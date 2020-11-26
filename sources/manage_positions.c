/*
** EPITECH PROJECT, 2020
** manage_position
** File description:
** manage_positions
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

sfVector2f set_duck_pos(my_t_s *my_t, float x, float y)
{
    my_t->my_d.pos = sfSprite_getPosition(my_t->my_d.sprite);
    my_t->my_d.pos.x = x;
    my_t->my_d.pos.y = y;
    return (my_t->my_d.pos);
}

sfVector2f move_duck_pos(my_t_s *my_t)
{
    my_t->my_d.pos = sfSprite_getPosition(my_t->my_d.sprite);
    my_t->my_d.pos.x = my_t->my_d.pos.x + 10;
    sfSprite_setPosition(my_t->my_d.sprite, my_t->my_d.pos);
    return (my_t->my_d.pos);
}

int stop_or_not(int nb)
{
    static int i = 0;
        if (nb == 1)
            i = 1;
    return (i);
}

sfVector2f random_pos(sfVector2f pos_d)
{
    int i = clocker(1);
    float tab[10][2] = {{0, 100}, {1, 150}, {2, 200}, {3, 250}, {4, 300}, {5, 350},
    {6, 400}, {7, 450} , {8, 500}, {9, 50}};
    pos_d.y = tab[i][1];
    return (pos_d);
}

void is_duck_on_screen(my_t_s *my_t, sfRenderWindow *window)
{
    sfVector2f pos_d =  sfSprite_getPosition(my_t->my_d.sprite);
    static int i = 0;
    if (pos_d.x >= 800 ) {
        pos_d.x = -200;
        pos_d = random_pos(pos_d);
        sfSprite_setPosition(my_t->my_d.sprite, pos_d);
        i++;
    }
    if (i == 3) {
        win_or_lose(0, my_t, window);
    }
}
