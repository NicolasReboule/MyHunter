/*
** EPITECH PROJECT, 2020
** manage_score
** File description:
** manage_score
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "struct.h"
#include "my.h"

int what_is_the_score(int nb)
{
    static int score = 0;
    if (nb < 0)
        score = 0;
    if (nb == 1)
        score++;
    return (score);
}

char *score_to_char(int score)
{
    int i = 1;
    int n = 0;
    char *score_c = malloc(sizeof(char) * 4);
    if (score == 0) {
        score_c[n] = '0';
        n++;
    }
    while (i <= score)
        i = i * 10;
    i = i / 10;
    while (i != 0) {
        score_c[n] = score / i + 48;
        score = score % i;
        i = i / 10;
        n++;
    }
    score_c[n] = '\0';
    return (score_c);
}

int best_score(void)
{
    static int b_score = 0;
    int score = what_is_the_score(0);
    if (score > b_score)
        b_score = score;
    return (b_score);
}