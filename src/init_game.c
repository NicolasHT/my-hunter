/*
** EPITECH PROJECT, 2018
** init_game
** File description:
** init struct game
*/

#include "../include/my_hunter.h"

int	init_window(t_hunter *scroller)
{
	scroller->mode = sfVideoMode_getDesktopMode();
	scroller->window = sfRenderWindow_create(scroller->mode, "Duck", sfFullscreen, NULL);
	if (scroller->window == NULL)
		return (84);
	sfRenderWindow_setFramerateLimit(scroller->window, 50);
	sfRenderWindow_setMouseCursorVisible(scroller->window, sfTrue);
	return (0);
}

int	init_textures(t_hunter *scroller)
{
	init_game2(scroller);
	if ((scroller->titre_t = sfTexture_createFromFile("img/titre.png", NULL)) == NULL)
		return (84);
	if ((scroller->start_t = sfTexture_createFromFile("img/start.png", NULL)) == NULL)
		return (84);
	if ((scroller->jukebox_t = sfTexture_createFromFile("img/jukebox.png", NULL)) == NULL)
		return (84);
	if ((scroller->stop_music_t = sfTexture_createFromFile("img/stop_music.png", NULL)) == NULL)
		return (84);
	return (0);
}

int	init_sprites(t_hunter *scroller)
{
	sfVector2f	scale;

	init_sprites1(scroller);
	init_sprites2(scroller);
	init_sprites3(scroller, scale);
	sfSprite_setPosition(scroller->jukebox, scale);
	scale.x = 1280;
	scale.y = 769;
	sfSprite_setTexture(scroller->stop_music, scroller->stop_music_t, sfTrue);
	sfSprite_setPosition(scroller->stop_music, scale);
	sfSprite_setTexture(scroller->background, scroller->background_t, sfTrue);
	scale.x = 1280;
	scale.y = 769;
	sfSprite_setOrigin(scroller->titre, scale);
	scale.x = 426;
	scale.y = 65;
	sfSprite_setOrigin(scroller->start, scale);
	scale.x = 249;
	scale.y = 103;
	sfSprite_setOrigin(scroller->jukebox, scale);
	return (0);
}

int	init_sounds(t_hunter *scroller)
{
	scroller->music = sfMusic_createFromFile("img/music.ogg");
	scroller->music2 = sfMusic_createFromFile("img/music2.ogg");
	scroller->music3 = sfMusic_createFromFile("img/pedobear_song.ogg");
	scroller->sound_sb = sfSoundBuffer_createFromFile("img/sound.ogg");
	if (scroller->sound == NULL)
		return (84);
	scroller->sound = sfSound_create();
	if (scroller->sound == NULL)
		return (84);
	sfSound_setBuffer(scroller->sound, scroller->sound_sb);
	sfMusic_play(scroller->music3);
	return (0);
}

int	init_game(t_hunter *scroller)
{
	if (init_window(scroller) == -1
	    || init_textures(scroller) == -1
	    || init_sprites(scroller) == -1
	    || init_sounds(scroller) == -1)
		return (84);
	scroller->titre_inc = 1;
	scroller->clock = sfClock_create();
	return (0);
}
