/*
** EPITECH PROJECT, 2020
** manage_textures_sprites
** File description:
** manage_textures_sprites
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

my_t_s *define_my_textures(my_t_s *my_t)
{
    my_t->my_d.path = "ressources/duck.png";
    my_t->my_b.path = "ressources/background.jpg";
    my_t->over.path = "ressources/gameover.png";
    my_t->my_d.texture = create_my_texture();
    my_t->my_b.texture = create_my_texture();
    my_t->over.texture = create_my_texture();
    my_t->my_b.sprite = create_my_sprite(my_t->my_b.texture, my_t->my_b.path);
    my_t->my_d.sprite = create_my_sprite(my_t->my_d.texture, my_t->my_d.path);
    my_t->over.sprite = create_my_sprite(my_t->over.texture, my_t->over.path);
    return (my_t);
}

int is_texture(sfTexture *texture)
{
    if (!texture)
        return (EXIT_FAILURE);
    else
        return (0);
}

sfTexture *create_my_texture()
{
    sfTexture *texture;
    texture = sfTexture_create(800, 600);
    is_texture(texture);
    return (texture);
}

sfSprite *create_my_sprite(sfTexture *texture, char *filepath)
{
    sfSprite *sprite;
    sprite = sfSprite_create();
    texture = sfTexture_createFromFile(filepath, NULL);
    sfSprite_setTexture(sprite, texture, sfFalse);
    return (sprite);
}

void draw_sprites(my_t_s *my_t, sfRenderWindow *window)
{
    is_duck_on_screen(my_t, window);
    sfSprite_setTextureRect(my_t->my_d.sprite, my_t->my_d.rect);
    sfRenderWindow_drawSprite(window, my_t->my_b.sprite, NULL);
    if (!stop_or_not(0))
        my_t->my_d.pos = move_duck_pos(my_t);
    sfRenderWindow_drawSprite(window, my_t->my_d.sprite, NULL);
}