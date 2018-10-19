/*
** EPITECH PROJECT, 2018
** loop
** File description:
** loop rect
*/

#include "../include/my_hunter.h"
#include <stdio.h>

void	move_duck(sfIntRect *rect, int size, int max)
{
	if (rect->left < max - size)
		rect->left += size;
	else
		rect->left = 0;
}

void	loop(t_hunter *hunt)
{
	sfVector2f	scale4 = {0,0};

	while (sfRenderWindow_isOpen(hunt->window)) {
		event_top(hunt, &scale4);
		display_menu(hunt);
		my_data(hunt);
	}
}
