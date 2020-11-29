/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** Contains the prototypes of all the functions in my library
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>
#include <SFML/Graphics.h>
#include "struct.h"


char *my_strdup(const char *str);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(long long int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char *src);
int my_strcmp(char const *s1,char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int my_printf(char *format, ...);
int my_put_float(float nb);
int my_put_oct(long long int nb);
int my_put_unprintable(char *str);
int my_put_hex_lowcase(long long int nb);
int my_put_hex_uppercase(long long int nb);
int my_put_binary(long long int nb);
int negativ_or_null(long long int nb);
void my_print_long(va_list list, int *nb, char **format);
int my_hunter_main();
int is_window(sfRenderWindow *window);
sfRenderWindow *create_my_window();
sfTexture *create_my_texture();
sfSprite *create_my_sprite(sfTexture *texture, char *filepath);
void my_hunter_game(sfRenderWindow *window, my_t_t *my_t);
void analyse_events(sfRenderWindow *window, sfEvent e, my_t_t *my_t);
void destroy_them_all(sfRenderWindow *window, my_t_t *my_t);
sfIntRect define_rect(sfIntRect rect);
void move_rect(sfIntRect *rect, int offset, int max_value, int min_value);
my_t_t *define_my_textures(my_t_t *my_t);
sfVector2f set_duck_pos(my_t_t *my_t, float x, float y);
sfVector2f move_duck_pos(my_t_t *my_t);
void draw_sprites(my_t_t *my_t, sfRenderWindow *window);
void is_mouse_on_duck(sfVector2i mouse_pos, my_t_t *my_t);
void destroy_duck(my_t_t *my_t);
int stop_or_not(int nb);
void is_duck_on_screen(my_t_t *my_t);
int win_or_lose(int nb, my_t_t *my_t);
int clocker(int nb);
sfVector2f random_pos(sfVector2f pos_d);
void draw_game_over(my_t_t *my_t, sfRenderWindow *window);
void draw_all(my_t_t *my_t, sfRenderWindow *window);
my_t_t *set_sprites(my_t_t *my_t);
my_t_t *set_textures(my_t_t *my_t);
my_t_t *set_path(my_t_t *my_t);
my_t_t *set_positions(my_t_t *my_t);
int lose_health(int nb);
int augment_speed(int nb);
my_t_t *set_scale(my_t_t *my_t);
int what_is_the_score(int nb);
my_t_t *setText(my_t_t *my_t);
my_t_t *setFont(my_t_t *my_t);
void draw_score(my_t_t *my_t, sfRenderWindow *window);
char *score_to_char(int score);
int best_score(void);
my_t_t *create_audio(my_t_t *my_t);
my_t_t *create_cursor(my_t_t *my_t);
void draw_cursor(my_t_t *my_t, sfRenderWindow *window);
void wait_a_bit(my_t_t *my_t, sfRenderWindow *window, clocks_t *clock);
void draw_play(my_t_t *my_t, sfRenderWindow *window);
void is_mouse_on_play(sfVector2i mouse_pos, my_t_t * my_t);
void move_play(my_t_t *my_t, int nb);

#endif