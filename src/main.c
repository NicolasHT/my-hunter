/*
** EPITECH PROJECT, 2018
** main
** File description:
** compile
*/

#include "../include/my_hunter.h"
#include <stdlib.h>

int			main()
{
	t_hunter	*hunt = malloc(sizeof(t_hunter));

	if (init_game(hunt) == -1)
		return (84);
	loop(hunt);
	destroyer(hunt);
	return (0);
}
