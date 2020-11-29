/*
** EPITECH PROJECT, 2020
** manage_game
** File description:
** manage_game
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

int clocker(int nb)
{
    static int i = 0;
    i++;
    if (i == 10)
        i = 0;
    if (nb == 1)
        return (i);
    else
        return(0);
}

int win_or_lose(int nb, my_t_t *my_t)
{
    static int i = 0;
    stop_or_not(1);
    set_duck_pos(my_t, -200, 150);
    move_play(my_t, 1);
    if (nb == 1)
        i = 1;
    if (nb == 2)
        i = 2;
    if (nb == 3) {
        i = 3;
        stop_or_not(2);
    }
    return(i);
}

int augment_speed(int nb)
{
    static int speed = 10;
    if (nb < 0)
        speed = 10;
    if (nb == 1)
        speed++;
    return(speed);
}

void my_hunter_game(sfRenderWindow *window, my_t_t *my_t)
{
    clocks_t *my_clock = malloc(sizeof(clock_t));
    sfEvent event;
    my_clock->clock = sfClock_create();
    my_t->my_d.pos = set_duck_pos(my_t, -200, 100);
    my_t->my_d.rect = define_rect(my_t->my_d.rect);
    sfSprite_setPosition(my_t->my_d.sprite, my_t->my_d.pos);
    while (1 && sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        analyse_events(window, event, my_t);
        if (my_clock->seconds > 0.30) {
            move_rect(&my_t->my_d.rect, 110, 330, 0);
            sfClock_restart(my_clock->clock);
        }
        clocker(0);
        draw_all(my_t, window);
        sfRenderWindow_display(window);
        my_clock->time = sfClock_getElapsedTime(my_clock->clock);
        my_clock->seconds = my_clock->time.microseconds / 1000000.0;
    }
}