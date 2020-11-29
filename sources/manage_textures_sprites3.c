/*
** EPITECH PROJECT, 2020
** manage_textures_sprites_3
** File description:
** manage_textures_sprites_3
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"
#include "my.h"

void draw_score(my_t_t *my_t, sfRenderWindow *window)
{
    sfText_setString(my_t->my_s.s_d.text, score_to_char(what_is_the_score(0)));
    sfText_setString(my_t->my_s.bs_d.text, score_to_char(best_score()));
    sfRenderWindow_drawText(window, my_t->my_s.bs_c.text, NULL);
    sfRenderWindow_drawText(window, my_t->my_s.bs_d.text, NULL);
    sfRenderWindow_drawText(window, my_t->my_s.s_d.text, NULL);
    sfRenderWindow_drawText(window, my_t->my_s.s_c.text, NULL);
}

void draw_cursor(my_t_t *my_t, sfRenderWindow *window)
{
    sfVector2i pos_m = sfMouse_getPositionRenderWindow(window);
    my_t->my_c.pos.x = pos_m.x - 25;
    my_t->my_c.pos.y = pos_m.y - 25;
    my_t->my_c.rect.height = 180;
    my_t->my_c.rect.width = 180;
    my_t->my_c.rect.left = 180;
    sfSprite_setTextureRect(my_t->my_c.sprite, my_t->my_c.rect);
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    sfSprite_setPosition(my_t->my_c.sprite, my_t->my_c.pos);
    sfRenderWindow_drawSprite(window, my_t->my_c.sprite, NULL);
}

void draw_play(my_t_t *my_t, sfRenderWindow *window)
{
    my_t->play.rect.height = 60;
    my_t->play.rect.width = 150;
    my_t->play.rect.top = 10;
    my_t->play.rect.left = 0;
    if (!stop_or_not(0))
        move_play(my_t, 0);
    if (stop_or_not(0))
        move_play(my_t, 1);
    sfSprite_setTextureRect(my_t->play.sprite, my_t->play.rect);
    sfRenderWindow_drawSprite(window, my_t->play.sprite, NULL);

}