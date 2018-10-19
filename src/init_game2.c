/*
** EPITECH PROJECT, 2018
** init_game2
** File description:
** for norm
*/

#include "../include/my_hunter.h"

int	init_game2(t_hunter *scroller)
{
	if ((scroller->background_t = sfTexture_createFromFile("img/intro.jpg", NULL)) == NULL)
		return(84);
	if ((scroller->duck_t = sfTexture_createFromFile("img/spritesheet.png", NULL)) == NULL)
		return (84);
	if ((scroller->score_t = sfTexture_createFromFile("img/score.png", NULL)) == NULL)
		return (84);
	if ((scroller->font_t = sfTexture_createFromFile("img/background.png", NULL)) == NULL)
		return (84);
	return (0);
}

int	init_sprites1(t_hunter *scroller)
{
	if ((scroller->jukebox = sfSprite_create()) == NULL)
		return (84);
	if ((scroller->background = sfSprite_create()) == NULL)
		return (84);
	if ((scroller->duck = sfSprite_create()) == NULL)
		return (84);
	if ((scroller->score = sfSprite_create()) == NULL)
		return (84);
	if ((scroller->font = sfSprite_create()) == NULL)
		return (84);
	if ((scroller->stop_music = sfSprite_create()) == NULL)
		return (84);
	return (0);
}

int	init_sprites2(t_hunter *scroller)
{
	if ((scroller->titre = sfSprite_create()) == NULL)
		return (84);
        if ((scroller->start = sfSprite_create()) == NULL)
		return (84);
	sfSprite_setTexture(scroller->duck, scroller->duck_t, sfTrue);
	sfSprite_setTexture(scroller->font, scroller->font_t, sfTrue);
	sfSprite_setTexture(scroller->score, scroller->score_t, sfTrue);
	scroller->rect.left = 0;
	scroller->rect.top = 0;
	scroller->rect.width = 110;
	scroller->rect.height = 110;
	scroller->rect2.left = 0;
	scroller->rect2.top = 0;
	scroller->rect2.width = 72;
	scroller->rect2.height = 77;
	sfSprite_setTextureRect(scroller->duck, scroller->rect);
	sfSprite_setTextureRect(scroller->score, scroller->rect2);
	return (0);
}

void	init_sprites3(t_hunter *scroller, sfVector2f scale)
{
	sfSprite_setTexture(scroller->titre, scroller->titre_t, sfTrue);
	sfSprite_setPosition(scroller->titre, scale);
        scale.x = 960;
	scale.y = 440;
	sfSprite_setTexture(scroller->start, scroller->start_t, sfTrue);
	sfSprite_setPosition(scroller->start, scale);
	scale.x = 960;
	scale.y = 720;
	sfSprite_setTexture(scroller->jukebox, scroller->jukebox_t, sfTrue);
}
