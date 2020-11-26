/*
** EPITECH PROJECT, 2020
** my_hunter_main
** File description:
** my_hunter_main
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"


int my_hunter_main()
{
    sfRenderWindow *window;
    my_t_s *my_t = malloc(sizeof(my_t_s));
    window = create_my_window();
    my_t = define_my_textures(my_t);
    my_hunter_game(window, my_t);
    destroy_them_all(window, my_t);
    return (EXIT_SUCCESS);
}