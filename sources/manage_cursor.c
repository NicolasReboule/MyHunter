/*
** EPITECH PROJECT, 2020
** manage_ cursor
** File description:
** manage_cursor
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"
#include "my.h"

my_t_t *create_cursor(my_t_t *my_t)
{
    my_t->my_c.rect.height = 180;
    my_t->my_c.rect.width = 180;
    my_t->my_c.rect.left = 0;
    my_t->my_c.rect.top = 0;
    sfSprite_setTextureRect(my_t->my_c.sprite, my_t->my_c.rect);
    return (my_t);
}