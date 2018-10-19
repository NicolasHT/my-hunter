/*
** EPITECH PROJECT, 2018
** data
** File description:
** size map
*/

#include "../include/my_hunter.h"

void	my_data(t_hunter *hunter)
{
	float		angle;

	hunter->scale.x = hunter->scale.x + 2;
	hunter->scale.y = hunter->scale.y + 4;
	if (hunter->scale.x >= 2000)
		hunter->scale.x = -1200;
	if (hunter->scale.y >= 1300)
		hunter->scale.y = -100;
	sfSprite_setPosition(hunter->titre, hunter->scale);
	angle = sfSprite_getRotation(hunter->titre);
	if ((angle < 180 && angle > 20) ||
	    (angle > 180 && angle < 340))
		hunter->titre_inc *= -1;
	sfSprite_rotate(hunter->titre, hunter->titre_inc);
}
