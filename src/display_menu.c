/*
** EPITECH PROJECT, 2018
** display menu
** File description:
** my_menu
*/

#include "../include/my_hunter.h"

void	display_menu(t_hunter *hunt)
{
	sfRenderWindow_clear(hunt->window, sfBlack);
	sfRenderWindow_drawSprite(hunt->window, hunt->background, NULL);
	sfRenderWindow_drawSprite(hunt->window, hunt->start, NULL);
	sfRenderWindow_drawSprite(hunt->window, hunt->jukebox, NULL);
	sfRenderWindow_drawSprite(hunt->window, hunt->duck, NULL);
	sfRenderWindow_drawSprite(hunt->window, hunt->titre, NULL);
	sfRenderWindow_drawSprite(hunt->window, hunt->stop_music, NULL);
	sfRenderWindow_display(hunt->window);
}
