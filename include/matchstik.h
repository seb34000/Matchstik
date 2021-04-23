/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** MATCHSTIK
*/

#ifndef MATCHSTIK_H_
#define MATCHSTIK_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <time.h>

typedef struct ai_s {
    char **map;
    char **bin;
    int *stick;
} ai_t;

typedef struct matchstik_s {
    size_t line;
    size_t match;
    char **map;
} matchstik_t;

/*LIB*/
char *my_str_malloc(char *str, size_t size);
void *my_memset(void *str, int value, size_t size);
void *my_calloc(int value, size_t size_ptr, size_t n_size);
char **split_string(char *str);
char *my_strcpy (char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
size_t my_strlen(const char *str);
size_t my_ptrlen(char const **tab);
char *my_strdup(char const *src);
void my_putchar(char const c);
void my_putstr(char const *str);
void my_put_array(char **array);
int my_strncmp(char const *s1, char const *s2, int n);
int my_getnbr(char const *str);
int my_putnbr(int nb);
char *my_itob(long long nb, char *base, int ix);
void my_put_array_no_nl(char **array);

/* PROG */
int tcheck_error(char const **av);
char **create_map(char const **av);
int init_struct(matchstik_t *game, char **av);
void init_ai(matchstik_t *game, ai_t *ai);
int game_loop(matchstik_t *game);
int player_turn(matchstik_t *game);
void actualise_map(matchstik_t *game, int line, int match);
size_t get_number_stick_from_line(matchstik_t *game, int line);
int ia_turn(matchstik_t *game, ai_t *ai);
bool tcheck_win(matchstik_t *g);
bool tcheck_if_final(matchstik_t *g);
bool other_stick(char **map);
void player_resume(int line, int match);
void ai_resume(int line, int match);
int xor(ai_t *ai);
int test_xor(ai_t *ai, matchstik_t *g, int i);
void randomize(matchstik_t *g, ai_t *ai);

#endif /* !MATCHSTIK_H_ */