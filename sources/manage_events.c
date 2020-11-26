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

void mouse_clicks(sfVector2i mouse_pos, my_t_s *my_t, sfRenderWindow *window)
{
    is_mouse_on_duck(mouse_pos, my_t, window);
}


void analyse_events(sfRenderWindow *window, sfEvent event, my_t_s *my_t)
{
    sfVector2i mouse_pos;
    while (sfRenderWindow_pollEvent(window, &event)) {
        mouse_pos = sfMouse_getPositionRenderWindow(window);
        if (event.type == sfEvtMouseButtonPressed) {
            mouse_clicks(mouse_pos, my_t, window);
            my_printf("x =%d, y =%d\n", mouse_pos.x, mouse_pos.y);
        }
        if (event.type == sfEvtClosed) {
            close_window(window);
        }
    }
}