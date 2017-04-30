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

#include "I18N.hpp"

const I18N::Text I18N::all_texts_french[] = {
    { I18N_BUTTON_YES, "Oui" },
    { I18N_BUTTON_NO, "Non" },
    { I18N_BUTTON_OK, "Ok" },
    { I18N_BUTTON_CANCEL, "Annuler" },
    { I18N_BUTTON_CLOSE, "Fermer" },
    { I18N_BUTTON_START_SERVER, "Démarrer le Serveur" },
    { I18N_BUTTON_DELETE, "Supprimer" },

    { I18N_TILETYPE01, "non bloquant" },
    { I18N_TILETYPE02, "bloquant" },
    { I18N_TILETYPE03, "bloquant juste la descente" },
    { I18N_TILETYPE04, "base rouge" },
    { I18N_TILETYPE05, "base bleue" },
    { I18N_TILETYPE06, "mortel" },
    { I18N_TILETYPE07, "jump, no descend" },
    { I18N_TILETYPE08, "fin de course" },
    { I18N_TILETYPE09, "zone de colline" },

    { I18N_WINTITLE_GAME, "Goat Attack" },
    { I18N_WINTITLE_EDITOR, "Goat Attack - Éditeur de cartes" },

    { I18N_SUBSYSTEM, "fonctionne avec ${1}" },
    { I18N_MODE_IS_NORMAL, "mode 'jeu normal'" },
    { I18N_MODE_IS_DEDICATED, "mode 'serveur dédié'" },

    { I18N_MAINMENU_PLAY, "Jouer" },
    { I18N_MAINMENU_LAN, "Créer un serveur local" },
    { I18N_MAINMENU_PACKAGES, "Lister les paquets chargés" },
    { I18N_MAINMENU_OPTIONS, "Options et Préférences" },
    { I18N_MAINMENU_CREDITS, "Crédits" },
    { I18N_MAINMENU_QUIT, "Quitter" },
    { I18N_MAINMENU_VERSION, "Version actuelle : ${1}" },
    { I18N_MAINMENU_INTERNET, "Internet" },
    { I18N_MAINMENU_INTERNET_SERVERS, "Serveurs internet :" },
    { I18N_MAINMENU_SERVER_NAME, "Nom du serveur" },
    { I18N_MAINMENU_CONNECT, "Se connecter" },
    { I18N_MAINMENU_REFRESH, "Rafraîchir" },
    { I18N_MAINMENU_PLAYERS, "Joueurs" },
    { I18N_MAINMENU_PING, "Ping" },
    { I18N_MAINMENU_LAN_TITLE, "Local" },
    { I18N_MAINMENU_LAN_SERVERS, "Serveurs locaux :" },
    { I18N_MAINMENU_CUSTOM_SERVER, "Serveur personalisé" },
    { I18N_MAINMENU_ENTER_HOSTNAME, "Entrez ici l'adresse IP et le port :" }, 
    { I18N_MAINMENU_ADDRESS, "Adresse :" },
    { I18N_MAINMENU_PORT, "Port :" },
    { I18N_MAINMENU_PASSWORD, "Mot de passe:" },
    { I18N_MAINMENU_ENTER_PASSWORD, "Entrer le mot de passe :" },
    { I18N_MAINMENU_SERVER_NAME2, "Nom du serveur :" },
    { I18N_MAINMENU_GAME_MODE, "Mode de jeu :" },
    { I18N_MAINMENU_GM_DM, "Match à mort" },
    { I18N_MAINMENU_GM_TDM, "Match à mort par équipe" },
    { I18N_MAINMENU_GM_CTF, "Capture de drapeau" },
    { I18N_MAINMENU_GM_SR, "Course" },
    { I18N_MAINMENU_GM_CTC, "Possession" },
    { I18N_MAINMENU_GM_GOH, "Chèvre sur la colline" },
    { I18N_MAINMENU_MAX_PLAYERS, "max. joueurs :" },
    { I18N_MAINMENU_WARMUP, "Échauffement :" },
    { I18N_MAINMENU_DURATION, "Durée :" },
    { I18N_MAINMENU_IN_SECONDS, "(en secondes)" },
    { I18N_MAINMENU_IN_MINUTES, "(en minutes)" },
    { I18N_MAINMENU_SELECT_MAP, "Choisir la carte :" },
    { I18N_MAINMENU_INVALID_SERVERNAME, "Merci d'entrer un nom de serveur valide." },
    { I18N_MAINMENU_MAX_PLAYERS_TITLE, "Max. Joueurs" },
    { I18N_MAINMENU_INVALID_GENERIC_NUMBER, "Merci d'entrer un nombre valide. (${1})" },
    { I18N_MAINMENU_DURATION2, "Durée" },
    { I18N_MAINMENU_WARMUP2, "Échauffement" },
    { I18N_MAINMENU_SELECT_MAP2, "Sélectionner la carte" },
    { I18N_MAINMENU_SELECT_MAP3, "Merci de sélectionner une carte" },
    { I18N_MAINMENU_PACKAGE, "Paquet" },
    { I18N_MAINMENU_HASH, "Hachage" },
    { I18N_MAINMENU_CREDITS_CODE, "programme :" },
    { I18N_MAINMENU_CREDITS_GFX, "graphismes :" },
    { I18N_MAINMENU_CREDITS_MAPS, "cartes :" },
    { I18N_MAINMENU_CREDITS_MUSIC, "musiques :" },
    { I18N_MAINMENU_CREDITS_THANKS, "un grand merci à :" },
    { I18N_MAINMENU_FREDERIC, "et bien sur, frederic la chèvre" },

    { I18N_OPTIONS_PLAYER, "Joueur" },
    { I18N_OPTIONS_GRAPHICS_AND_SOUND, "Graphismes et Son" },
    { I18N_OPTIONS_CONTROLLER, "Manette et Clavier" },
    { I18N_OPTIONS_SPECTATE, "Mode Spectateur" },
    { I18N_OPTIONS_SKIP_SONG, "Passer la musique" },
    { I18N_OPTIONS_RETURN, "Retour au menu principal" },
    { I18N_OPTIONS_SETTINGS11, "nom du joueur :" },
    { I18N_OPTIONS_SETTINGS12, "montrer le nom du joueur" },
    { I18N_OPTIONS_SETTINGS13, "personnage :" },
    { I18N_OPTIONS_SETTINGS21, "plein écran" },
    { I18N_OPTIONS_SETTINGS22, "lignes de balayage" },
    { I18N_OPTIONS_SETTINGS23, "intensité :" },
    { I18N_OPTIONS_SETTINGS24, "volume de la musique:" },
    { I18N_OPTIONS_SETTINGS25, "volume sonore :" },
    { I18N_OPTIONS_SETTINGS26, "défilement du texte :" },
    { I18N_OPTIONS_SETTINGS31, "haut :" },
    { I18N_OPTIONS_SETTINGS32, "bas :" },
    { I18N_OPTIONS_SETTINGS33, "gauche :" },
    { I18N_OPTIONS_SETTINGS34, "droite :" },
    { I18N_OPTIONS_SETTINGS35, "sauter :" },
    { I18N_OPTIONS_SETTINGS36, "tirer :" },
    { I18N_OPTIONS_SETTINGS37, "grenade :" },
    { I18N_OPTIONS_SETTINGS38, "bombe :" },
    { I18N_OPTIONS_SETTINGS39, "grenouille :" },
    { I18N_OPTIONS_SETTINGS40, "tchat :" },
    { I18N_OPTIONS_SETTINGS41, "statistiques :" },
    { I18N_OPTIONS_SETTINGS42, "échap :" },
    { I18N_OPTIONS_SETTINGS43, "horizontal controller deadzone:" },
    { I18N_OPTIONS_SETTINGS44, "vertical controller deadzone:" },
    { I18N_OPTIONS_SETTINGS45, "Scanner les manettes" },
    { I18N_OPTIONS_SETTINGS46, "capture d'écran" },
    { I18N_OPTIONS_SETTINGS47, "Appuyer sur une touche..." },
    { I18N_OPTIONS_SETTINGS48, "${1} manette(s) trouvée(s)." },
    { I18N_OPTIONS_SETTINGS49, "Manettes" },
    { I18N_OPTIONS_SETTINGS50, "[aucun]" },
    { I18N_OPTIONS_SETTINGS51, "Bouton : ${1}" },

    { I18N_CLIENT_TRANSFER, "Transfère ${1} (${2}%)" },
    { I18N_CLIENT_ENTER_MSG, "Écrire un message" },
    { I18N_CLIENT_CONNECTING_TO1, "Connection à ${1}, ping = ${2}" },
    { I18N_CLIENT_CONNECTING_TO2, ", demande un mot de passe" },
    { I18N_CLIENT_CONNECTING_TO3, "(joueurs : ${1}/${2})" },
    { I18N_CLIENT_LOGGED_IN, "vous êtes connecté" },
    { I18N_CLIENT_LOGGED_OUT, "vous êtes déconnecté" },
    { I18N_CLIENT_PING_TIMEOUT, "Vous êtes déconnecté (délai d'attente expiré)" },
    { I18N_CLIENT_TOO_MANY_RESENDS, "Vous êtes déconnecté (trop de renvois)" },
    { I18N_CLIENT_APPLICATION_LAYER, "Vous êtes déconnecté (application layer quit)" },
    { I18N_CLIENT_SERVER_MESSAGE, "Message du serveur" },
    { I18N_CLIENT_MAP_INFO, "carte : ${1}" },
    { I18N_CLIENT_JOIN_REFUSED, "VOTRE REQUÊTE DE CONNECTION A ÉTÉ REFUSÉE" },
    { I18N_CLIENT_FRIENDLY_FIRE, "TIR AMI : ATTENTION!!!" },
    { I18N_CLIENT_UNBALANCED, "JEU NON ÉQUILIBRÉ" },
    { I18N_CLIENT_WARMUP, "merci de vous échauffer" },
    { I18N_CLIENT_GAME_BEGINS, "la partie commence" },
    { I18N_CLIENT_GAME_OVER, "LA PARTIE EST FINIE" },
    { I18N_CLIENT_RENAME, "${1} est maintenant connu comme ${2}" },
    { I18N_CLIENT_SKIN_CHANGE, "${1} a changé son personnage pour ${2}" },

    { I18N_TNMT_NEW_MAP_LOADED, "nouvelle carte chargée" },
    { I18N_TNMT_SPECTATING, "SPECTATEUR" },
    { I18N_TNMT_WARMUP, "ÉCHAUFFEMENT" },
    { I18N_TNMT_SB_CTC_TITLE, "ATTRAPEZ LA PIÈCE" },
    { I18N_TNMT_SB_PLAYER, "JOUEUR" },
    { I18N_TNMT_SB_TOTAL, "TOTAL" },
    { I18N_TNMT_SB_PING, "PING" },
    { I18N_TNMT_SB_SPECTATORS, "SPECTATEURS :" },
    { I18N_TNMT_SB_DM_TITLE, "MATCH À MORT" },
    { I18N_TNMT_SB_FRAGS, "FRAGS" },
    { I18N_TNMT_SB_KILLS, "TUÉS" },
    { I18N_TNMT_SB_SCORE, "SCORE" },
    { I18N_TNMT_SB_SR_TITLE, "COURSE" },
    { I18N_TNMT_SB_LAPS, "TOURS" },
    { I18N_TNMT_SB_BEST, "MEILLEUR" },
    { I18N_TNMT_SB_LAST, "DERNIER" },
    { I18N_TNMT_SR_LEAD, "meneur :" },
    { I18N_TNMT_SR_LAP, "tour :" },
    { I18N_TNMT_SR_BEST, "meilleur :" },
    { I18N_TNMT_SR_LAST, "dernier :" },
    { I18N_TNMT_SR_NA, "N/A" },
    { I18N_TNMT_PLAYER_JOINS, "${1} a rejoint la partie" },
    { I18N_TNMT_PLAYER_FELL_OFF, "${1} est tombé d'un étage" },
    { I18N_TNMT_PLAYER_SUICIDE, "${1} a choisi le suicide" },
    { I18N_TNMT_COIN_RETURNED, "la pièce est de nouveau dans sa base" },
    { I18N_TNMT_COIN_CATCHED, "${1} a attrapé la pièce" },
    { I18N_TNMT_COIN_DROPPED, "la pièce a été lachée" },
    { I18N_TNMT_RED_FLAG_RETURNED, "le drapeau rouge est retourné à sa base" },
    { I18N_TNMT_BLUE_FLAG_RETURNED, "le drapeau bleu est retourné à sa base" },
    { I18N_TNMT_RED_FLAG_CATCHED, "${1} a attrapé le drapeau rouge" },
    { I18N_TNMT_BLUE_FLAG_CATCHED, "${1} a attrapé le drapeau bleu" },
    { I18N_TNMT_RED_FLAG_SAVED, "le drapeau rouge a été sauvé par ${1}" },
    { I18N_TNMT_BLUE_FLAG_SAVED, "le drapeau bleu a été sauvé par ${1}" },
    { I18N_TNMT_RED_FLAG_DROPPED, "le drapeau rouge a été laché" },
    { I18N_TNMT_BLUE_FLAG_DROPPED, "le drapeau bleu a été laché" },
    { I18N_TNMT_TEAM_RED_SCORED1, "l'équipe rouge a marqué" },
    { I18N_TNMT_TEAM_BLUE_SCORED1, "l'équipe bleue a marqué" },
    { I18N_TNMT_TEAM_RED_SCORED2, "L'ÉQUIPE ROUGE MARQUE" },
    { I18N_TNMT_TEAM_BLUE_SCORED2, "L'ÉQUIPE BLEUE MARQUE" },
    { I18N_TNMT_SR_RECORD, "nouveau record de ${1} : ${2}" },
    { I18N_TNMT_SR_COMPLETE, "fin de manche" },
    { I18N_TNMT_KILLED1, "${1} a tué ${2}" },
    { I18N_TNMT_KILLED2, "${1} a mis fin à ses jours" },
    { I18N_TNMT_FROGGED1, "${1} a grenouillé ${2}" },
    { I18N_TNMT_FROGGED2, "${1} a couru sur sa propre grenouille" },

    { I18N_TNMT_STATS_TEAM, "statistiques de l'équipe" },
    { I18N_TNMT_STATS_PLAYER, "statistiques du joueur" },
    { I18N_TNMT_STATS_OVER, "fin de la partie" },
    { I18N_TNMT_STATS_END, "statistiques de fin" },
    { I18N_TNMT_STATS_MAP_CLOSED, "carte actuelle fermée" },

    { I18N_TNMT_SELECT_TEAM1, "Choisissez avec 'haut' et 'bas', sélectionnez avec 'tirer'." },
    { I18N_TNMT_SELECT_TEAM2, "Sélectionner une équipe" },
    { I18N_TNMT_JOIN_RED_TEAM, "${1} a rejoint l'équipe rouge" },
    { I18N_TNMT_JOIN_BLUE_TEAM, "${1} a rejoint l'équipe bleue" },

    { I18N_TNMT_TEAM_RED_CAP, "ÉQUIPE ROUGE" },
    { I18N_TNMT_TEAM_BLUE_CAP, "ÉQUIPE BLEUE" },

    { I18N_SERVE_WARM_UP, "échauffement" },
    { I18N_SERVE_GAME_BEGINS, "la partie commence" },
    { I18N_SERVE_CONNECT, "${1} s'est connecté" },
    { I18N_SERVE_RECONNECT, "${1} s'est re-connecté" },
    { I18N_SERVE_SPECTATING, "${1} est maintenant spectateur" },
    { I18N_SERVE_UNKNOWN_COMMAND, "Commande serveur inconnue : ${1}" },
    { I18N_SERVE_WRONG_PASSWORD, "Mot de passe administrateur erroné" },
    { I18N_SERVE_ALREADY_ADMIN, "Vous êtes déja administrateur" },
    { I18N_SERVE_NEW_ADMIN, "${1} est maintenant en mode administrateur" },
    { I18N_SERVE_ADMIN_LEFT, "${1} n'est plus en mode administrateur" },
    { I18N_SERVE_KICK_YOURSELF, "Vous ne pouvez pas vous expulser vous-même !" },
    { I18N_SERVE_PLAYER_NOT_FOUND, "Joueur introuvable : ${1}" },
    { I18N_SERVE_NOT_AUTHORIZED, "Vous n'avez pas le droit de faire ça" },
    { I18N_SERVE_KICK, "${1} a expulsé ${2}" },
    { I18N_SERVE_NOT_IMPLEMENTED, "Ceci n'est pas encore implémenté" },
    { I18N_SERVE_NEXT_MAP, "${1} a lancé la carte suivante" },
    { I18N_SERVE_MAP_USAGE, "Utilisation : /map <nom_de_carte> <échauffement> <durée>" },
    { I18N_SERVE_MAP_LOADED, "${1} a lancé la carte ${2}" },
    { I18N_SERVE_CONFIG_RELOADED, "configuration rechargée" },
    { I18N_SERVE_CONFIG_SAVED, "configuration sauvegardée" },
    { I18N_SERVE_GET_USAGE, "Utilisation : /get <variable>" },
    { I18N_SERVE_SET_USAGE, "Utilisation : /set <variable> <valeur>" },
    { I18N_SERVE_SET_VAR_TO, "régler ${1} à ${2}" },
    { I18N_SERVE_RESET_USAGE, "Utilisation : /reset <variable>" },
    { I18N_SERVE_VAR_CLEARED, "${1} supprimé" },
    { I18N_SERVE_PARM_MISSING, "Paramètre manquant" },
    { I18N_SERVE_NO_PARM_NEEDED, "Aucun paramètre requis" },
    { I18N_SERVE_ILLEGAL_PARM, "Paramètre illégal" },

    { I18N_TNMT_LOGOUT_MSG01, "parti, parti... à jamais" },
    { I18N_TNMT_LOGOUT_MSG02, "parti en fumée" },
    { I18N_TNMT_LOGOUT_MSG03, "adieu, monde" },
    { I18N_TNMT_LOGOUT_MSG04, "à mordu la poussière" },
    { I18N_TNMT_LOGOUT_MSG05, "à rendu l'âme" },
    { I18N_TNMT_LOGOUT_MSG06, "à mordu le sol" },
    { I18N_TNMT_LOGOUT_MSG07, "bises..." },
    { I18N_TNMT_LOGOUT_MSG08, "auf Wiedersehen!" },
    { I18N_TNMT_LOGOUT_MSG09, "au revoir, hoo roo." },
    { I18N_TNMT_LOGOUT_MSG10, "il est temps de dire au revoie" },
    { I18N_TNMT_LOGOUT_MSG11, "j'ai pris la pillule bleue..." },
    { I18N_TNMT_LOGOUT_MSG12, "ainsi je disparais" },

    { I18N_VERSION_MISMATCH_TITLE, "Version différente" },
    { I18N_VERSION_MISMATCH_MESSAGE, "Les protocoles diffèrent, vous ne pouvez vous connecter à ce serveur" },
    { I18N_SERVER_TITLE, "Serveur" },
    { I18N_SELECT_SERVER, "Merci de choisir un serveur d'abord" },
    { I18N_ERROR_TITLE, "Erreur" },
    { I18N_PORT_TITLE, "Port" },
    { I18N_SERVER_UNKNOWN, "Serveur introuvable ou inconnu." },
    { I18N_INVALID_PORT, "Entrez un port valide" },
    { I18N_WRONG_MAPTYPE, "Carte du mauvais type" },
    { I18N_WRONG_MAPTYPE2, "Cette carte ne peux pas être jouée dans ce mode." },
    { I18N_SERVER_FULL, "Connection échouée : le serveur est plein" },
    { I18N_WRONG_PASSWORD, "Connection échouée : mauvais mot de passe." },
    { I18N_XFER_OPEN_FAILED, "ATTENTION : impossible d'ouvrir le fichier : ${1}" },
    { I18N_XFER_ALREADY_OPEN, "ATTENTION : impossible d'ouvrir ${1}. Ce fichier est déjà ouvert." },
    { I18N_THREAD_FAILED, "L'ouverture du fil d'exécution a échouée ." },
    { I18N_HEAP_CHANGE_ERROR, "Impossible de réduire le nombre de joueurs à ${1}, ${2} sont connectés." },
    { I18N_SERVER_TOO_OLD, "---[ serveur trop vieux ]---" },
    { I18N_ANIMATION_FAILED, "Échec de la création d'animation : ${1}" },
    { I18N_MISSING_SPAWN_POINTS, "Des points d'appartition sont manquants sur cette carte." },
    { I18N_MULTIPLE_COINS, "Une seule pièce est autorisée sur la carte" },
    { I18N_COIN_MISSING, "Il manque une pièce sur cette carte" },
    { I18N_MULTIPLE_RED_FLAGS, "Seul un drapeau rouge est autorisé" },
    { I18N_MULTIPLE_BLUE_FLAGS, "Seul un drapeau bleu est autorisé" },
    { I18N_RED_FLAG_MISSING, "Le drapeau rouge est manquant" },
    { I18N_BLUE_FLAG_MISSING, "Le drapeau bleu est manquant" },
    { I18N_WHY_MORE_SPAWN_POINTS, "Pourquoi plus qu'un point d'apparition pour ce mode de jeu?" },
    { I18N_RED_SPAWNPOINTS_MISSING, "Points d'apparition de l'équipe rouge manquant sur cette carte" },
    { I18N_BLUE_SPAWNPOINTS_MISSING, "Points d'apparition de l'équipe bleue manquant sur cette carte" },
    { I18N_DIFFERENT_HASH, "Le pack principal '${1}' a un différent hachage." },
    { I18N_NO_MAPS_DEFINED, "Aucune carte définie dans la configuration serveur" },
    { I18N_NO_DEDICATED_SERVER, "Ceci n'est pas un serveur dédié" },
    { I18N_MUSIC_INFO, "musique : ${1}" },
    { I18N_MUSIC_TOO_FAST, "ERREUR : ${1} a été jouée trop vite, et donc arrêtée." },
    { I18N_NO_MUSIC_FOUND, "ERREUR : aucune musique valide trouvée." },
    { I18N_ENTER_VALID_VALUE, "Entrer un valeur valide (${1})" },
    { I18N_NO_PARENT, "Aucun parent spécifié" },
    { I18N_NO_FONT, "Aucune police valide déclarée" },

    { I18N_RES_OBJECT_FOUND_WARNING, "ATTENTION : l'objet '${1}' dans '${2}' a déjà été trouvé, et donc sauté." },
    { I18N_RES_INIT_RESOURCES, "initialisation des ressources" },
    { I18N_RES_UNINIT_RESOURCES, "supression des ressources" },
    { I18N_RES_TILESET_NOT_FOUND, "tileset ${1} introuvable" },
    { I18N_RES_OBJECT_NOT_FOUND, "objet ${1} introuvable" },
    { I18N_RES_CHARACTERSET_NOT_FOUND, "personnage ${1} introuvable" },
    { I18N_RES_NPC_NOT_FOUND, "pnj ${1} introuvable" },
    { I18N_RES_ANIMATION_NOT_FOUND, "animation ${1} introuvable" },
    { I18N_RES_MAP_NOT_FOUND, "carte ${1} introuvable" },
    { I18N_RES_BACKGROUND_NOT_FOUND, "fond d'écran ${1} introuvable" },
    { I18N_RES_FONT_NOT_FOUND, "police ${1} introuvable" },
    { I18N_RES_ICON_NOT_FOUND, "icône ${1} introuvable" },
    { I18N_RES_SOUND_NOT_FOUND, "son ${1} introuvable" },
    { I18N_RES_MUSIC_NOT_FOUND, "musique ${1} introuvable" },
    { I18N_RES_GAME_SETTING_NOT_FOUND, "préférences ${1} introuvables" },
    { I18N_RES_SHADER_NOT_FOUND, "shader ${1} introuvable" },
    { I18N_RES_LOOKING_INTO, "est en train de chercher dans : ${1}" },
    { I18N_RES_SCANNING, "scanne ${1}" },
    { I18N_RES_PAK_MISSING, "${1} est manquant" },

    { I18N_SSSDL_START, "lancement de SubsystemSDL" },
    { I18N_SSSDL_INIT, "initialisation de SubsystemSDL" },
    { I18N_SSSDL_SIZE_QUERY, "Impossible de trouver la résolution de l'utilisateur : ${1}" },
    { I18N_SSSDL_WINDOW, "création de la fenêtre SDL" },
    { I18N_SSSDL_WINDOW_FAILED, "N'a pas pu créer la fenêtre : ${1}" },
    { I18N_SSSDL_OPENGL, "création du contexte OpenGL" },
    { I18N_SSSDL_MIXER_FAILED, "N'a pas pu initialiser le mixeur : ${1}" },
    { I18N_SSSDL_AUDIO_FAILED, "N'a pas pu ouvrir le son : ${1}" },
    { I18N_SSSDL_UNINIT, "suppression de SubsystemSDL" },
    { I18N_SSSDL_SHADING_PIPELINE, "using shading pipeline" },
    { I18N_SSSDL_FULLSCREEN, "activer le plein-écran" },
    { I18N_SSSDL_OPENGL_INIT, "initialisation de OpenGL" },

    { I18N_SSNULL_START, "lancement de SubsystemNull" },
    { I18N_SSNULL_UNINIT, "supression de SubsystemNull" },

    { I18N_ME_RADIUS, "Rayon" },
    { I18N_ME_RED, "Rouge" },
    { I18N_ME_GREEN, "Vert" },
    { I18N_ME_BLUE, "Bleu" },
    { I18N_ME_NAME, "Nom" },
    { I18N_ME_FROG_SPAWN, "Point d'apparition des grenouilles" },
    { I18N_ME_AUTHOR, "Auteur" },
    { I18N_ME_DESCRIPTION, "Description" },
    { I18N_ME_WIDTH, "Largeur" },
    { I18N_ME_WIDTH_EVEN, "La largeur de la carte doit être la même" },
    { I18N_ME_HEIGHT, "Hauteur" },
    { I18N_ME_PARALLAX_SHIFT, "Parallax Shift" },
    { I18N_ME_TILESET, "Tileset" },
    { I18N_ME_TILESET_SELECT, "Choisir un tileset." },
    { I18N_ME_BACKGROUND, "Fond d'écran" },
    { I18N_ME_BACKGROUND_SELECT, "Choisir un fond d'écran." },
    { I18N_ME_UNSAVED_MAP, "Carte non sauvegardée" },
    { I18N_ME_REALLY_CONTINUE, "Certain changements n'ont pas été sauvegardés. Voulez-vous vraiment continuer?" },
    { I18N_ME_TOOL, "Outil" },
    { I18N_ME_MODE_SELECTOR, "sélecteur de modes" },
    { I18N_ME_CENTER_MAP, "centrer la carte" },
    { I18N_ME_MAP_PROPERTIES, "propriétés de la carte" },
    { I18N_ME_LOAD_MAP, "charger une carte" },
    { I18N_ME_SAVE_MAP, "sauver une carte" },
    { I18N_ME_TILE_SELECTOR, "ouvrir le sélécteur de tiles" },
    { I18N_ME_OBJECT_SELECTOR, "ouvrir le sélecteur d'objets" },
    { I18N_ME_HORZ_COPY, "copie horizontale" },
    { I18N_ME_QUICK_LIGHTMAP, "créer des lumières rapides" },
    { I18N_ME_PIXEL_LIGHTMAP, "créer des lumières à précision 'par pixel'" },
    { I18N_ME_MAP_PACKAGE, "créer le paquet de la carte" },
    { I18N_ME_ZAP, "supprimer la carte" },
    { I18N_ME_OPTIONS, "options de l'éditeur de carte" },
    { I18N_ME_QUIT, "quitter l'éditeur de carte" },
    { I18N_ME_COMPILING, "Veuillez patienter... ${1}%" },
    { I18N_ME_MODIFIED, "modifié" },
    { I18N_ME_COMPILING2, "En compilation" },
    { I18N_ME_LIGHT_SRC, "Sources Lumineuses" },
    { I18N_ME_NO_LIGHT_SRC, "Aucune source lumineuse trouvée sur cette carte" },
    { I18N_ME_MAP_NAME, "Carte sans nom" },
    { I18N_ME_NO_MAP_NAME, "Merci de donner un nom à cette carte dans ses propriétés." },
    { I18N_ME_NO_TILESET1, "Aucun Tileset" },
    { I18N_ME_NO_TILESET2, "Merci de sélectoinner un tileset dans les propriétés de la carte." },
    { I18N_ME_LIGHT_MAP, "Lumières de la carte" },
    { I18N_ME_SAVING_FAILED, "Sauvegarde échouée : ${1}" },
    { I18N_ME_MODE_TILE, "TILE" },
    { I18N_ME_MODE_OBJECT, "OBJET" },
    { I18N_ME_MODE_LIGHT, "LUMIÈRE" },
    { I18N_ME_MODE_EDIT_LIGHT, "ÉDITER LUMIÈRE" },
    { I18N_ME_MIRRORING, "mirroring" },
    { I18N_ME_DECORATION, "décoration" },
    { I18N_ME_NO_DEC, "AUCUNE DÉCORATION" },
    { I18N_ME_NO_LGTMP, "AUCUNE LUMIÈRE DE CARTE" },
    { I18N_ME_NO_MP, "AUCUNE CARTE" },
    { I18N_ME_NO_OBJ, "AUCUN OBJET" },
    { I18N_ME_NO_LGT, "AUCUNE LUMIÈRE" },
    { I18N_ME_LOAD_MAP_TITLE, "Charger Carte" },
    { I18N_ME_ERROR_TITLE, "Erreur" },
    { I18N_ME_NO_SELECTION, "Acune sélection" },
    { I18N_ME_SELECT_MAP, "Merci de sélectionner une carte." },
    { I18N_ME_LIGHT_PROPERTIES, "Propriétés des lumières" },
    { I18N_ME_LP_RADIUS, "rayon :" },
    { I18N_ME_LP_RED, "rouge :" },
    { I18N_ME_LP_GREEN, "vert :" },
    { I18N_ME_LP_BLUE, "bleu :" },
    { I18N_ME_MP_TITLE, "Propriétés de carte" },
    { I18N_ME_MP_NAME, "nom :" },
    { I18N_ME_MP_FROG_SPAWN, "point d'apparition des grenouilles :" },
    { I18N_ME_MP_AUTHOR, "auteur :" },
    { I18N_ME_MP_DESCRIPTION, "description :" },
    { I18N_ME_MP_WIDTH, "largeur :" },
    { I18N_ME_MP_HEIGHT, "hauteur :" },
    { I18N_ME_MP_DECO_BRIGHTNESS, "lumin. déco. :" },
    { I18N_ME_MP_LIGHTMAP_ALPHA, "transp. lum. :" },
    { I18N_ME_MP_PARALLAX, "parallax :" },
    { I18N_ME_MP_TYPE, "type :" },
    { I18N_ME_MP_TILESET, "tileset :" },
    { I18N_ME_MP_BACKGROUND, "fond d'écran :" },
    { I18N_ME_SAVE_NO_MAP_NAME, "Aucun Nom de Carte" },
    { I18N_ME_SAVE_CHOOSE_NAME, "Merci de donner un nom à cette carte dans ses propriétés." },
    { I18N_ME_SELECT_TILE, "Sélectionner Tile" },
    { I18N_ME_ST_PROPERTIES, "Propriétés" },
    { I18N_ME_ST_NO_TILE1, "Aucune Tile" },
    { I18N_ME_ST_NO_TILE2, "Merci de sélectionner un tile d'abord." },
    { I18N_ME_TP_TITLE, "Propriétés de Tile (${1})" },
    { I18N_ME_TP_BACKGROUND, "la tile est un fond d'écran" },
    { I18N_ME_TP_BLOCKS_LIGHT, "la tile bloque la lumière" },
    { I18N_ME_TP_TILE_TYPE, "type de tile :" },
    { I18N_ME_TP_ANIMATION_SPEED, "vitesse d'animation :" },
    { I18N_ME_TP_FRICTION, "friction :" },
    { I18N_ME_SO_TITLE, "Sélectionner un Objet" },
    { I18N_ME_HC_MAP_INVALID1, "Carte invalide" },
    { I18N_ME_HC_MAP_INVALID2, "Merci de conigurer cette carte d'abord." },
    { I18N_ME_HC_MAP_INVALID3, "La largeur de la carte doit être la même." },
    { I18N_ME_HC_TITLE, "Copie horizontale" },
    { I18N_ME_HC_QUESTION, "Cette opération ne peut être annulée. Continuer?" },
    { I18N_ME_PAK_NO_MAP, "Aucune carte" },
    { I18N_ME_PAK_CONFIGURE, "Merci de créer ou charger une carte avant de créer un paquet." },
    { I18N_ME_PAK_SAVE_FIRST, "Merci de sauvegarder votre carte d'abord." },
    { I18N_ME_PAK_OVERWRITE1, "Écraser?" },
    { I18N_ME_PAK_OVERWRITE2, "Écraser les paquets existant?" },
    { I18N_ME_PAK_DONE1, "Fait" },
    { I18N_ME_PAK_DONE2, "Votre paquet '${1}.pak' a été créé." },
    { I18N_ME_OPTIONS1, "Options" },

    { I18N_FREETYPE_FAILED, "initialisation de freetype échouée." },
    { I18N_LANGUAGE, "Language" },
    { I18N_PAK_NAME_TOO_LONG, "nom de Pak '${1}' trop long (max. 31). Merci de le renommer." },
    { I18N_SHOW_LAGOMETER, "Montrer le lag-o-meter" },
    { I18N_SERVE_NO_COMMAND, "Aucune commande serveur entrée" },
    { I18N_SERVE_LIST_USAGE, "Utilisation : /list [partie_du_nom_du_joueur]" },
    { I18N_CLIENT_LOGGED_OUT_RPL, "${1} s'est deconnecté" },
    { I18N_CLIENT_PING_TIMEOUT_RPL, "${1} s'est deconnecté (a expiré)" },
    { I18N_CLIENT_TOO_MANY_RESENDS_RPL, "${1} s'est deconnecté (trop de renvois)" },
    { I18N_CLIENT_APPLICATION_LAYER_RPL, "${1} s'est deconnecté (application layer quit)" },
    { I18N_MAINMENU_CREATE_SERVER1, "Serveur" },
    { I18N_MAINMENU_CREATE_SERVER2, "Options" },
    { I18N_MAINMENU_RECONNECT_KILLS1, "reconnect kills" },
    { I18N_MAINMENU_RECONNECT_KILLS2, "Reconnect Kills" },
    { I18N_MAINMENU_HOLD_DISCONNECTED_PLAYERS, "maintenir les joueurs déconnectés" },
    { I18N_MAINMENU_FRIENDLY_FIRE, "alarme tir ami" },
    { I18N_MAINMENU_SHOOT_EXPLOSIVES, "autoriser à tirer sur les explosis" },
    { I18N_MAINMENU_PREVENT_PICK, "ne pas prendre l'objet si l'inventaire est plein" },
    { I18N_RES_FLAG_NOT_FOUND, "drapeau ${1} introuvable" },
    { I18N_ME_SELECT, "sélectionner" },

    { I18N_NONE, 0 }
};
