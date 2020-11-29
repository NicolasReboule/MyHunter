/*
** EPITECH PROJECT, 2020
** set_textures_sprites
** File description:
** set_textures_sprites
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"
#include "my.h"

my_t_t *set_path(my_t_t *my_t)
{
    my_t->my_d.path = "ressources/duck.png";
    my_t->my_b.path = "ressources/background.jpg";
    my_t->over.path = "ressources/gameover.png";
    my_t->my_h1.path = "ressources/Heart.png";
    my_t->my_h2.path = "ressources/Heart.png";
    my_t->my_h3.path = "ressources/Heart.png";
    my_t->win.path = "ressources/win.png";
    my_t->my_c.path = "ressources/target.png";
    my_t->my_s.bs_c.path = "ressources/text.TTF";
    my_t->my_s.bs_d.path = "ressources/text.TTF";
    my_t->my_s.s_c.path = "ressources/text.TTF";
    my_t->my_s.s_d.path = "ressources/text.TTF";
    my_t->play.path = "ressources/gui.png";
    return (my_t);
}

my_t_t *set_textures(my_t_t *my_t)
{
    my_t->my_d.texture = create_my_texture();
    my_t->my_b.texture = create_my_texture();
    my_t->over.texture = create_my_texture();
    my_t->my_h1.texture = create_my_texture();
    my_t->my_h2.texture = create_my_texture();
    my_t->my_h3.texture = create_my_texture();
    my_t->win.texture = create_my_texture();
    my_t->my_c.texture = create_my_texture();
    my_t->play.texture = create_my_texture();
    return (my_t);
}

my_t_t *set_sprites(my_t_t *my_t)
{
    my_t->my_b.sprite = create_my_sprite(my_t->my_b.texture, my_t->my_b.path);
    my_t->my_d.sprite = create_my_sprite(my_t->my_d.texture, my_t->my_d.path);
    my_t->over.sprite = create_my_sprite(my_t->over.texture, my_t->over.path);
    my_t->my_h1.sprite = create_my_sprite(my_t->my_h1.texture, my_t->my_h1.path);
    my_t->my_h2.sprite = create_my_sprite(my_t->my_h2.texture, my_t->my_h2.path);
    my_t->my_h3.sprite = create_my_sprite(my_t->my_h3.texture, my_t->my_h3.path);
    my_t->win.sprite = create_my_sprite(my_t->win.texture, my_t->win.path);
    my_t->my_c.sprite = create_my_sprite(my_t->my_c.texture, my_t->my_c.path);
    my_t->play.sprite = create_my_sprite(my_t->play.texture, my_t->play.path);
    return (my_t);
}

my_t_t *define_pos(my_t_t *my_t)
{
    my_t->my_h1.pos.x = 10;
    my_t->my_h1.pos.y = 10;
    my_t->my_h2.pos.x = 60;
    my_t->my_h2.pos.y = 10;
    my_t->my_h3.pos.x = 110;
    my_t->my_h3.pos.y = 10;
    my_t->my_s.bs_c.pos.x = 500;
    my_t->my_s.bs_c.pos.y = 10;
    my_t->my_s.bs_d.pos.x = 755;
    my_t->my_s.bs_d.pos.y = 10;
    my_t->my_s.s_d.pos.x = 755;
    my_t->my_s.s_d.pos.y = 50;
    my_t->my_s.s_c.pos.x = 500;
    my_t->my_s.s_c.pos.y = 50;
    my_t->play.pos.x = -500;
    my_t->play.pos.y = -500;
    return (my_t);
}

my_t_t *set_positions(my_t_t *my_t)
{
    my_t = define_pos(my_t);
    sfSprite_setPosition(my_t->my_h1.sprite, my_t->my_h1.pos);
    sfSprite_setPosition(my_t->my_h2.sprite, my_t->my_h2.pos);
    sfSprite_setPosition(my_t->my_h3.sprite, my_t->my_h3.pos);
    sfSprite_setPosition(my_t->play.sprite, my_t->play.pos);
    sfText_setPosition(my_t->my_s.bs_c.text, my_t->my_s.bs_c.pos);
    sfText_setPosition(my_t->my_s.bs_d.text, my_t->my_s.bs_d.pos);
    sfText_setPosition(my_t->my_s.s_c.text, my_t->my_s.s_c.pos);
    sfText_setPosition(my_t->my_s.s_d.text, my_t->my_s.s_d.pos);
    return (my_t);
}