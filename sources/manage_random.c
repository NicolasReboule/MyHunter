/*
** EPITECH PROJECT, 2020
** choose_yes_or_no
** File description:
** yes_or_no
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"


int stop_or_not(int nb)
{
    static int i = 0;
    if (nb == 2) {
        i = 0;
    }
    if (nb == 1)
        i = 1;
    return (i);
}

int lose_health(int nb)
{
    static int i = 0;
    if (nb == 1)
        i = 1;
    if (nb == 2)
        i = 2;
    if (nb == 3)
        i = 3;
    if (nb == 4)
        i = 0;
    return(i);
}