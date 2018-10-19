/*
** EPITECH PROJECT, 2018
** my_event
** File description:
** recup event
*/

#include "../include/my_hunter.h"

void	function_norm(t_hunter *hunt, sfEvent event)
{
	if (event.key.code == sfKeyNum1) {
		sfMusic_stop(hunt->music2);
		sfMusic_stop(hunt->music);
		sfMusic_stop(hunt->music3);
		sfMusic_play(hunt->music);
	}
	else if (event.key.code == sfKeyNum2) {
		sfMusic_stop(hunt->music);
		sfMusic_stop(hunt->music2);
		sfMusic_stop(hunt->music3);
		sfMusic_play(hunt->music2);
	}
	else if (event.key.code == sfKeyNum2) {
		sfMusic_stop(hunt->music);
		sfMusic_stop(hunt->music2);
		sfMusic_stop(hunt->music3);
		sfMusic_play(hunt->music3);
	}
}

void		event_top(t_hunter *hunt, sfVector2f *scale4)
{
	sfEvent		event;

	while (sfRenderWindow_pollEvent(hunt->window, &event)) {
		if (event.type == sfEvtClosed)
			sfRenderWindow_close(hunt->window);
		if (event.key.code == sfKeyEscape)
			sfRenderWindow_close(hunt->window);
		if (event.type == sfEvtMouseButtonReleased) {
			hunt->souris.x = sfMouse_getPositionRenderWindow(hunt->window).x;
			hunt->souris.y = sfMouse_getPositionRenderWindow(hunt->window).y;
			if (hunt->souris.x >= scale4->x && hunt->souris.x <= scale4->x + 110 &&
				hunt->souris.y >= scale4->y && hunt->souris.y <= scale4->y + 110) {
				scale4->x = -100;
				scale4->y = rand()%(110-330)+330;
				move_duck(&hunt->rect2, 72, 720);
			}
		}
		function_norm(hunt, event);
		if (event.key.code == sfKeySpace)
			loop_game(hunt, scale4);
	}
}
