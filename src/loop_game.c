/*
** EPITECH PROJECT, 2018
** loop_game
** File description:
** boucle
*/

#include "../include/my_hunter.h"

void	loop_game(t_hunter *hunt, sfVector2f *scale4)
{
	while (sfRenderWindow_isOpen(hunt->window) == sfTrue) {
		event_top(hunt, scale4);
		hunt->time = sfClock_getElapsedTime(hunt->clock);
		hunt->seconds = hunt->time.microseconds / 1000000.0;
		if (hunt->seconds > 0.12) {
			move_duck(&hunt->rect, 110, 330);
			sfSprite_setTextureRect(hunt->duck, hunt->rect);
			sfClock_restart(hunt->clock);
		}
		scale4 = my_display_game(hunt, scale4);
		my_data(hunt);
	}
}
