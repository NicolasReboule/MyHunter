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

void destroy_them_all(sfRenderWindow *window, my_t_s *my_t)
{
    sfSprite_destroy(my_t->my_b.sprite);
    sfSprite_destroy(my_t->my_d.sprite);
    sfSprite_destroy(my_t->over.sprite);
    sfTexture_destroy(my_t->my_b.texture);
    sfTexture_destroy(my_t->my_d.texture);
    sfTexture_destroy(my_t->over.texture);
    sfRenderWindow_destroy(window);
}