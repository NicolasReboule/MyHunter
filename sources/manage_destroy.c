/*
** EPITECH PROJECT, 2020
** manage_destroy
** File description:
** manage_destroy
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

void font_text_destroy(my_t_t *my_t)
{
    sfFont_destroy(my_t->my_s.bs_c.font);
    sfFont_destroy(my_t->my_s.bs_d.font);
    sfFont_destroy(my_t->my_s.s_c.font);
    sfFont_destroy(my_t->my_s.s_d.font);
    sfText_destroy(my_t->my_s.bs_c.text);
    sfText_destroy(my_t->my_s.bs_d.text);
    sfText_destroy(my_t->my_s.s_d.text);
    sfText_destroy(my_t->my_s.s_c.text);
}

void sprite_destroy(my_t_t *my_t)
{
    sfSprite_destroy(my_t->my_b.sprite);
    sfSprite_destroy(my_t->my_d.sprite);
    sfSprite_destroy(my_t->over.sprite);
    sfSprite_destroy(my_t->my_h1.sprite);
    sfSprite_destroy(my_t->my_h2.sprite);
    sfSprite_destroy(my_t->my_h3.sprite);
    sfSprite_destroy(my_t->win.sprite);
    sfSprite_destroy(my_t->my_c.sprite);
}

void texture_destroy(my_t_t *my_t)
{
    sfTexture_destroy(my_t->my_b.texture);
    sfTexture_destroy(my_t->my_d.texture);
    sfTexture_destroy(my_t->over.texture);
    sfTexture_destroy(my_t->my_h1.texture);
    sfTexture_destroy(my_t->my_h2.texture);
    sfTexture_destroy(my_t->my_h3.texture);
    sfTexture_destroy(my_t->win.texture);
    sfTexture_destroy(my_t->my_c.texture);
}

void destroy_them_all(sfRenderWindow *window, my_t_t *my_t)
{
    sprite_destroy(my_t);
    texture_destroy(my_t);
    font_text_destroy(my_t);
    sfSoundBuffer_destroy(my_t->song.buffer);
    sfSound_destroy(my_t->song.sound);
    sfRenderWindow_destroy(window);
}
