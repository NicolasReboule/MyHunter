/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void print_usage()
{
    my_printf("\n%s\n", "My hunter is a Duck Hunt like game");
    my_printf("%s", "The goal is to shoot flying ducks");
    my_printf("%s\n", " by clicking on them with the mouse");
    my_printf("%s", "Try to shoot them as much as possible");
    my_printf("%s\n", " to score the maximum number of points");
    my_printf("%s\n\n", "Good luck!");
}

int main(int ac, char **av)
{
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h')
            print_usage();
        else {
            write(1, "Invalid argument, try '-h' instead\n", 36);
            exit (84);
        }
    }
    else if (ac != 1) {
        write(1, "Invalid number of arguments\n", 29);
        exit (84);
    }
    else
        my_hunter_main();
}