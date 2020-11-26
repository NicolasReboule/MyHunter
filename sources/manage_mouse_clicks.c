/*
** EPITECH PROJECT, 2020
** manage_mouse_clicks
** File description:
** manage_mouse_clicks
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

void is_mouse_on_duck(sfVector2i mouse_pos, my_t_s * my_t, sfRenderWindow *window)
{
    static int i = 0;
    sfVector2f pos_d = sfSprite_getPosition(my_t->my_d.sprite);
    if (mouse_pos.x >= pos_d.x && mouse_pos.x <= pos_d.x + 110 &&
    mouse_pos.y >= pos_d.y && mouse_pos.y <= pos_d.y + 110) {
        pos_d.x = -200;
        pos_d = random_pos(pos_d);
        sfSprite_setPosition(my_t->my_d.sprite, pos_d);
        i++;
    }
    if (i == 15) {
        win_or_lose(1, my_t, window);
    }
}