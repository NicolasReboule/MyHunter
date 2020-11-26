/*
** EPITECH PROJECT, 2020
** manage_textures_sprites_2
** File description:
** manage_textures_sprites_2
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

void draw_game_over(my_t_s *my_t, sfRenderWindow *window)
{
    sfVector2f pos_g = sfSprite_getPosition(my_t->over.sprite);
    pos_g.y = 200;
    pos_g.x = 300;
    sfSprite_setPosition(my_t->over.sprite, pos_g);
    sfRenderWindow_drawSprite(window, my_t->over.sprite, NULL);
}