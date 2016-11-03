/*
 *  This file is part of Goat Attack.
 *
 *  Goat Attack is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Goat Attack is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Goat Attack.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _SUBSYSTEM_HPP_
#define _SUBSYSTEM_HPP_

#include "Exception.hpp"
#include "Tile.hpp"
#include "TextMessageSystem.hpp"
#include "ZipReader.hpp"
#include "I18N.hpp"

#include <iostream>

#ifdef _WIN32
#include "Win.hpp"
#endif

class Resources;

class SubsystemException : public Exception {
public:
    SubsystemException(const char *msg) : Exception(msg) { }
    SubsystemException(const std::string& msg) : Exception(msg) { }
};

enum GamePlayType {
    GamePlayTypeDM = 0,     /* death match      */
    GamePlayTypeTDM,        /* team death match */
    GamePlayTypeCTF,        /* capture the flag */
    GamePlayTypeSR,         /* speed race       */
    GamePlayTypeCTC,        /* catch the coin   */
    GamePlayTypeGOH         /* goat of the hill */
};

struct InputData {
    /* this enum is analog to GameProtocol's PlayerKeyState* */
    enum InputJoyDirection {
        InputJoyDirectionLeft = 1,
        InputJoyDirectionRight = 2,
        InputJoyDirectionUp = 4,
        InputJoyDirectionDown = 8
    };

    enum InputDataType {
        InputDataTypeNothing = 0,
        InputDataTypeQuit,
        InputDataTypeMouseMove,
        InputDataTypeMouseLeftDown,
        InputDataTypeMouseLeftUp,
        InputDataTypeMouseMiddleDown,
        InputDataTypeMouseMiddleUp,
        InputDataTypeMouseRightDown,
        InputDataTypeMouseRightUp,
        InputDataTypeKeyDown,
        InputDataTypeKeyUp,
        InputDataTypeJoyMotion,
        InputDataTypeJoyButtonDown,
        InputDataTypeJoyButtonUp,
        InputDataTypeText,
        InputDataMouseLeftWindow,
        InputDataMouseEnteredWindow,
        _InputDataTypeMAX
    };

    enum InputKeyType {
        InputKeyTypeNothing = 0,
        InputKeyTypeLeft,
        InputKeyTypeRight,
        InputKeyTypeUp,
        InputKeyTypeDown,
        InputKeyTypeBackspace,
        InputKeyTypeDelete,
        InputKeyTypeHome,
        InputKeyTypeEnd,
        InputKeyTypePageUp,
        InputKeyTypePageDown,
        InputKeyTypeEscape,
        InputKeyTypeButtonA,
        InputKeyTypeButtonB,
        InputKeyTypeButtonX,
        InputKeyTypeButtonY,
        InputKeyTypeStatistics,
        InputKeyTypeChat,
        _InputKeyTypeMAX
    };

    InputDataType data_type;
    InputKeyType key_type;
    int key_repeat;
    int param1;
    int param2;
    int keycode;
    const unsigned char *text;
};

class TileGraphic;
class Audio;
class Font;
class Icon;
class Sound;
class Music;
class Shader;

class Subsystem {
private:
    Subsystem(const Subsystem&);
    Subsystem& operator=(const Subsystem&);

public:
    Subsystem(std::ostream& stream, I18N& i18n, const std::string& window_title) throw (SubsystemException);
    virtual ~Subsystem();

    template<class T> std::ostream& operator<<(const T& what) {
        stream << what;
        return stream;
    }

    void set_scanlines_icon(Icon *icon);
    void set_keep_pictures(bool state);
    bool get_keep_pictures() const;
    std::ostream& get_stream() const;
    I18N& get_i18n() const;

    virtual void initialize(Resources& resources) = 0;
    virtual const char *get_subsystem_name() const = 0;
    virtual bool is_dedicated_server() const = 0;

    virtual int get_zoom_factor() const = 0;
    virtual void toggle_fullscreen() = 0;
    virtual bool is_fullscreen() const = 0;
    virtual void set_mouse_position(int x, int y) = 0;
    virtual void enable_text_input() = 0;
    virtual void disable_text_input() = 0;
    virtual bool has_scanlines() = 0;
    virtual void set_scanlines(bool state) = 0;
    virtual void set_scanlines_intensity(float v) = 0;
    virtual float get_scanlines_intensity() = 0;
    virtual void set_deadzone_horizontal(int v) = 0;
    virtual void set_deadzone_vertical(int v) = 0;

    virtual TileGraphic *create_tilegraphic(int width, int height) = 0;
    virtual Audio *create_audio() = 0;
    virtual Shader *create_shader(const std::string& filename, ZipReader *zip) = 0;

    virtual void begin_drawings() = 0;
    virtual void end_drawings() = 0;
    virtual void set_color(float r, float g, float b, float a) = 0;
    virtual void reset_color() = 0;
    virtual void draw_tile(Tile *tile, int x, int y) = 0;
    virtual void draw_tilegraphic(TileGraphic *tilegraphic, int x, int y) = 0;
    virtual void draw_tilegraphic(TileGraphic *tilegraphic, int index, int x, int y) = 0;
    virtual void draw_box(int x, int y, int width, int height) = 0;
    virtual int draw_text(Font *font, int x, int y, const std::string& text) = 0;
    virtual int draw_clipped_text(Font *font, int x, int y, int width, const std::string& text) = 0;
    virtual int draw_char(Font *font, int x, int y, const char *s) = 0;
    virtual void draw_icon(Icon *icon, int x, int y) = 0;

    virtual int play_sound(Sound *sound, int loops) = 0;
    virtual void play_system_sound(Sound *sound) = 0;
    virtual int play_controlled_sound(Sound *sound, int loops) = 0;
    virtual bool is_sound_playing(Sound *sound) = 0;
    virtual void stop_sound(int channel) = 0;

    virtual bool play_music(Music *music) = 0;
    virtual void stop_music() = 0;
    virtual void start_music_player(Resources& resources, TextMessageSystem& tms, const char *directory = 0) = 0;
    virtual void skip_music_player_song() = 0;
    virtual void stop_music_player() = 0;

    virtual void set_music_volume(int v) = 0;
    virtual int get_music_volume() = 0;
    virtual void set_sound_volume(int v) = 0;

    virtual bool get_input(InputData& input) = 0;
    virtual void clear_input_buffer() = 0;
    virtual const char *get_keycode_name(int keycode) = 0;
    virtual const char *get_controller_name() = 0;
    virtual int rescan_joysticks() = 0;

    virtual int get_arena_width() = 0;
    virtual int get_arena_height() = 0;
    virtual int get_view_width() = 0;
    virtual int get_view_height() = 0;

protected:
    std::ostream& stream;
    I18N& i18n;
    Icon *scanlines;
    bool keep_pictures;
};

#endif
