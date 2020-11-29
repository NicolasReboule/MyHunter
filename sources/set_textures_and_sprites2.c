/*
** EPITECH PROJECT, 2020
** set_textures_sprites2
** File description:
** set_textures_sprites2
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "struct.h"
#include "my.h"

my_t_t *setFont(my_t_t *my_t)
{
    my_t->my_s.s_c.font = sfFont_createFromFile(my_t->my_s.s_c.path);
    my_t->my_s.s_d.font = sfFont_createFromFile(my_t->my_s.s_d.path);
    my_t->my_s.bs_c.font = sfFont_createFromFile(my_t->my_s.bs_c.path);
    my_t->my_s.bs_d.font = sfFont_createFromFile(my_t->my_s.bs_d.path);
    return (my_t);
}

my_t_t *setText(my_t_t *my_t)
{
    my_t->my_s.bs_c.text = sfText_create();
    my_t->my_s.bs_d.text = sfText_create();
    my_t->my_s.s_d.text = sfText_create();
    my_t->my_s.s_c.text = sfText_create();
    sfText_setFont(my_t->my_s.bs_c.text, my_t->my_s.bs_c.font);
    sfText_setFont(my_t->my_s.bs_d.text, my_t->my_s.bs_d.font);
    sfText_setFont(my_t->my_s.s_c.text, my_t->my_s.s_c.font);
    sfText_setFont(my_t->my_s.s_d.text, my_t->my_s.s_d.font);
    sfText_setString(my_t->my_s.bs_c.text, "Best Score:");
    sfText_setString(my_t->my_s.s_c.text, "Your Score:");
    sfText_setString(my_t->my_s.bs_d.text, score_to_char(best_score()));
    sfText_setString(my_t->my_s.s_d.text, score_to_char(what_is_the_score(0)));
    sfText_setColor(my_t->my_s.bs_c.text, sfWhite);
    sfText_setColor(my_t->my_s.bs_d.text, sfWhite);
    sfText_setColor(my_t->my_s.s_d.text, sfWhite);
    sfText_setColor(my_t->my_s.s_c.text, sfWhite);
    return (my_t);
}

my_t_t *define_scale(my_t_t *my_t)
{
    my_t->my_c.scale.x = 0.30;
    my_t->my_c.scale.y = 0.30;
    my_t->play.scale.x = 2;
    my_t->play.scale.y = 1.5;
    my_t->my_s.bs_c.scale.y = 0.80;
    my_t->my_s.bs_d.scale.y = 0.80;
    my_t->my_s.s_d.scale.y = 0.80;
    my_t->my_s.s_c.scale.y = 0.80;
    my_t->my_s.bs_c.scale.x = 0.80;
    my_t->my_s.bs_d.scale.x = 0.80;
    my_t->my_s.s_d.scale.x = 0.80;
    my_t->my_s.s_c.scale.x = 0.80;
    return (my_t);
}

my_t_t *set_scale(my_t_t *my_t)
{
    my_t = define_scale(my_t);
    sfSprite_setScale(my_t->my_c.sprite, my_t->my_c.scale);
    sfSprite_setScale(my_t->play.sprite, my_t->play.scale);
    sfText_setScale(my_t->my_s.bs_c.text, my_t->my_s.bs_c.scale);
    sfText_setScale(my_t->my_s.bs_d.text, my_t->my_s.bs_d.scale);
    sfText_setScale(my_t->my_s.s_c.text, my_t->my_s.s_c.scale);
    sfText_setScale(my_t->my_s.s_d.text, my_t->my_s.s_d.scale);
    return (my_t);
}
