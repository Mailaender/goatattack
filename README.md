# Goat Attack
![alt tag](https://raw.githubusercontent.com/goatattack/goatattack/master/goatattack1.png)

## Goatattack is a fast-paced multiplayer pixel art shooter game.
Goat Attack is a multiplayer 2D platformer pixel art shooter game for Linux, OS X and Windows. You can play it in a local network or over the Internet. This project is splitted three subprojects. the game itself, its map editor and a master server. six gameplay modes are supported. deathmatch, team deathmatch, capture the flag, speed race, catch the coin and goat of the hill.

the game and the map editor can be compiled for all three platforms. the master server is for linux only. the master server is a dedicated server responsible for collecting the connection information (IP address and port) of all available game servers and providing that to the users.

## Build client
### Requires
* **Debian/Ubuntu** build-essential autoconf libtool git libsdl2-dev libsdl2-mixer-dev libpng12-dev
* **Archlinux** sdl2 sdl2_mixer libpng git

### Installation
1. Clone the repo `git clone https://github.com/goatattack/goatattack`
2. `cd goatattack`
2. `autoreconf -i`
3. `./configure` with map-editor: `./configure --enable-map-editor`
4. `make`
5. `make install`

## Build server
### Requires
* **Debian/Ubuntu** build-essential libpng12-dev
* **Archlinux** libpng

### Installation
1. Clone the repo `git clone https://github.com/goatattack/goatattack`
2. `cd goatattack`
2. `autoreconf -i`
3. `./configure --enable-dedicated-server`
4. `make`
5. `make install`

## Visit the forum
If you have any question, visit the [Goat Attack forum](http://forum.goatattack.net).
