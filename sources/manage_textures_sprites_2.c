/*
** EPITECH PROJECT, 2020
** manage_textures_sprites_2
** File description:
** manage_textures_sprites_2
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"
#include "my.h"

void draw_game_over(my_t_t *my_t, sfRenderWindow *window)
{
    sfVector2f pos_g;
    pos_g.y = 200;
    pos_g.x = 300;
    sfSprite_setPosition(my_t->over.sprite, pos_g);
    sfRenderWindow_drawSprite(window, my_t->over.sprite, NULL);
}

void draw_win(my_t_t *my_t, sfRenderWindow *window)
{
    sfVector2f pos_w;
    pos_w.x = 200;
    pos_w.y = 150;
    sfSprite_setPosition(my_t->win.sprite, pos_w);
    sfRenderWindow_drawSprite(window, my_t->win.sprite, NULL);
}

void draw_heart(sfSprite *heart, sfRenderWindow *window)
{
    sfVector2f scale_h;
    scale_h.x = 3.0;
    scale_h.y = 3.0;
    sfSprite_setScale(heart, scale_h);
    sfRenderWindow_drawSprite(window, heart, NULL);
}

void draw_health(my_t_t *my_t, sfRenderWindow *window)
{
    if (lose_health(0) < 1)
        draw_heart(my_t->my_h3.sprite, window);
    if (lose_health(0) < 2)
        draw_heart(my_t->my_h2.sprite, window);
    if (lose_health(0) < 3)
        draw_heart(my_t->my_h1.sprite, window);
}

void draw_all(my_t_t *my_t, sfRenderWindow *window)
{
    draw_sprites(my_t, window);
    if (stop_or_not(0)) {
        if (win_or_lose(0, my_t) == 2) {
            draw_game_over(my_t, window);
        }
        if(win_or_lose(0, my_t) == 1)
            draw_win(my_t, window);
    }
    draw_play(my_t, window);
    draw_cursor(my_t, window);
    draw_score(my_t, window);
    draw_health(my_t, window);
}