/*
** EPITECH PROJECT, 2020
** manage_ audio
** File description:
** manage_audio
*/

#include <SFML/Graphics.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Sound.h>
#include <stdlib.h>
#include "struct.h"
#include "my.h"

my_t_t *create_audio(my_t_t *my_t)
{
    my_t->song.sound = sfSound_create();
    my_t->song.buffer = sfSoundBuffer_createFromFile("ressources/song.ogg");
    sfSound_setBuffer(my_t->song.sound, my_t->song.buffer);
    sfSound_setLoop(my_t->song.sound, sfTrue);
    sfSound_play(my_t->song.sound);
    sfSound_setVolume(my_t->song.sound, 10);
    return (my_t);
}