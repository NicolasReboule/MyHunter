/*
** EPITECH PROJECT, 2020
** manage_window
** File description:
** manage_window
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"


int is_window(sfRenderWindow *window)
{
    if (!window)
        return EXIT_FAILURE;
    else
        return (0);
}

sfRenderWindow *create_my_window()
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow *window;
    window = sfRenderWindow_create(mode, "My_hunter", sfClose, NULL);
    is_window(window);
    sfRenderWindow_setFramerateLimit(window, 30);
    return (window);
}
