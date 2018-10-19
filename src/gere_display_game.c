/*
** EPITECH PROJECT, 2018
** display game
** File description:
** background mouv
*/

#include "../include/my_hunter.h"
#include <stdio.h>

sfVector2f	*my_display_game(t_hunter *hunt, sfVector2f *scale4)
{
	sfRenderWindow_clear(hunt->window, sfBlack);
	sfSprite_setPosition(hunt->duck, *scale4);
	scale4->x = scale4->x + 2;
	sfSprite_setPosition(hunt->score, (sfVector2f){0,1000});
	sfSprite_setTextureRect(hunt->score, hunt->rect2);
        sfSprite_setTextureRect(hunt->duck, hunt->rect);
	sfRenderWindow_drawSprite(hunt->window, hunt->font, NULL);
	sfRenderWindow_drawSprite(hunt->window, hunt->duck, NULL);
	sfRenderWindow_drawSprite(hunt->window, hunt->score, NULL);
	sfRenderWindow_display(hunt->window);
	return (scale4);
}
