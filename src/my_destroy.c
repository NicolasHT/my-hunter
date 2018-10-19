/*
** EPITECH PROJECT, 2018
** my_destroy
** File description:
** kill sprite all
*/

#include "../include/my_hunter.h"

void	destroy(t_hunter *hunt)
{
	sfSprite_destroy(hunt->titre);
	sfSprite_destroy(hunt->background);
	sfSprite_destroy(hunt->start);
	sfSprite_destroy(hunt->jukebox);
	sfSprite_destroy(hunt->duck);
	sfSprite_destroy(hunt->font);
}

void	destroy2(t_hunter *hunt)
{
	sfTexture_destroy(hunt->titre_t);
	sfTexture_destroy(hunt->background_t);
	sfTexture_destroy(hunt->start_t);
	sfTexture_destroy(hunt->jukebox_t);
	sfTexture_destroy(hunt->duck_t);
	sfTexture_destroy(hunt->font_t);
	sfSound_destroy(hunt->sound);
	sfRenderWindow_destroy(hunt->window);
}

void	destroyer(t_hunter *hunt)
{
	destroy(hunt);
	destroy2(hunt);
}
