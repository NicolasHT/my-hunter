/*
** EPITECH PROJECT, 2018
** my_hunter.h
** File description:
** oklm header .h
*/

#ifndef MY_HUNTER_H_
# define MY_HUNTER_H_

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

typedef struct			s_hunter
{
	sfRenderWindow		*window;
	sfVideoMode		mode;

	sfSprite		*titre;
	sfSprite		*background;
	sfSprite		*font;
        sfSprite		*start;
	sfSprite		*jukebox;
        sfSprite		*stop_music;
	sfSprite		*duck;
	sfSprite		*score;

	sfIntRect		rect;
	sfIntRect		rect2;

	sfTexture		*titre_t;
	sfTexture		*background_t;
	sfTexture		*font_t;
        sfTexture		*start_t;
	sfTexture		*jukebox_t;
        sfTexture		*stop_music_t;
	sfTexture		*duck_t;
	sfTexture		*score_t;

	sfVector2f		scale;
	sfVector2f		scale2;
	sfVector2f		scale4;
	sfVector2f		yolo;
	sfVector2f		n_pos;

	sfVector2f		zozio;

	sfMusic			*music;
	sfMusic			*music2;
	sfMusic			*music3;
	sfSound			*sound;
	sfSoundBuffer		*sound_sb;

	sfClock			*clock;
	sfTime			time;
	float			seconds;

	sfVector2i		souris;

	float			titre_inc;
}				t_hunter;

int	init_game(t_hunter* hunt);
void	loop(t_hunter* hunt);
void	display_menu(t_hunter* hunt);
void	event_top(t_hunter *hunt, sfVector2f *scale4);
void	my_data(t_hunter* hunt);
void	destroy(t_hunter* hunt);
void	loop_game(t_hunter* hunt, sfVector2f *scale4);
sfVector2f	*my_display_game(t_hunter* hunt, sfVector2f *scale4);
void	destroy2(t_hunter* hunt);
void	destroyer(t_hunter* hunt);
void	function_norm(t_hunter* hunt, sfEvent event);
int	init_game2(t_hunter* hunt);
int	init_sprites1(t_hunter* hunt);
int	init_sprites2(t_hunter* hunt);
void	init_sprites3(t_hunter* hunt, sfVector2f scale);
void	move_duck(sfIntRect *rect, int size, int max);

#endif /* MY_HUNTER_H_ */
