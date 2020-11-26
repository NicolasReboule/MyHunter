/*
** EPITECH PROJECT, 2020
** struct_h
** File description:
** struct
*/

#ifndef _STRUCT_H_
#define _STRUCT_H_

#include <SFML/Graphics.h>

typedef struct duck {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfIntRect rect;
    char *path;
} duck;

typedef struct background {
    sfTexture *texture;
    sfSprite *sprite;
    char *path;
} background;

typedef struct gameover {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfIntRect rect;
    char *path;
}over;

typedef struct textures {
    duck my_d;
    background my_b;
    over over;
}my_t_s;

typedef struct clock_s {
    sfClock *clock;
    sfTime time;
    float seconds;
}clock_s;

#endif