/*
** EPITECH PROJECT, 2020
** manage_event
** File description:
** manage_events
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"


void close_window(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
}

void mouse_clicks(sfVector2i mouse_pos, my_t_t *my_t)
{
    is_mouse_on_duck(mouse_pos, my_t);
    is_mouse_on_play(mouse_pos, my_t);
}


void analyse_events(sfRenderWindow *window, sfEvent e, my_t_t *my_t)
{
    sfVector2i mouse_pos;
    while (sfRenderWindow_pollEvent(window, &e)) {
        mouse_pos = sfMouse_getPositionRenderWindow(window);
        if (e.type == sfEvtMouseButtonPressed) {
            sfSprite_setTextureRect(my_t->my_c.sprite, my_t->my_c.rect);
            sfRenderWindow_drawSprite(window, my_t->my_c.sprite, NULL);
            mouse_clicks(mouse_pos, my_t);
        }
        if (e.type == sfEvtClosed) {
            close_window(window);
        }
    }
}