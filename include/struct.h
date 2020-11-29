/*
** EPITECH PROJECT, 2020
** struct_h
** File description:
** struct
*/

#ifndef _STRUCT_H_
#define _STRUCT_H_

#include <SFML/Graphics.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Sound.h>

typedef struct duck_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfIntRect rect;
    char *path;
} duck_t;

typedef struct heart_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfVector2f scale;
    char *path;
} heart_t;

typedef struct background_s {
    sfTexture *texture;
    sfSprite *sprite;
    char *path;
} background_t;

typedef struct gui_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfIntRect rect;
    sfVector2f scale;
    char *path;
} gui_t;

typedef struct text_s {
    sfFont *font;
    sfText *text;
    char *path;
    sfVector2f pos;
    sfVector2f scale;
} text_t;

typedef struct p_score_s {
    text_t bs_c;
    text_t bs_d;
    text_t s_c;
    text_t s_d;
} p_score_t;

typedef struct song_s {
    sfSound *sound;
    sfSoundBuffer *buffer;
} song_t;

typedef struct textures_s {
    duck_t my_d;
    background_t my_b;
    gui_t over;
    gui_t win;
    gui_t my_c;
    gui_t play;
    song_t song;
    p_score_t my_s;
    heart_t my_h1;
    heart_t my_h2;
    heart_t my_h3;
    int morts;
} my_t_t;

typedef struct clock_s {
    sfClock *clock;
    sfTime time;
    float seconds;
} clocks_t;

#endif