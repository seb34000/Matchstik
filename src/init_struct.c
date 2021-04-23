/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** init_struct
*/

#include "../include/matchstik.h"

int init_struct(matchstik_t *game, char **av)
{
    game->line = my_getnbr(av[1]);
    if (game->line < 2 || game->line > 99)
        return (84);
    game->match = my_getnbr(av[2]);
    game->map = create_map(av);
    return (0);
}

void init_ai(matchstik_t *game, ai_t *ai)
{
    ai->bin = malloc(sizeof(char *) * my_ptrlen(game->map));
    ai->stick = malloc(sizeof(int) * my_ptrlen(game->map));
    ai->map = malloc(sizeof(char *) * my_ptrlen(game->map));
    my_memset(ai->bin, 0, sizeof(char *) * my_ptrlen(game->map));
    my_memset(ai->stick, 0, sizeof(int) * my_ptrlen(game->map));
    my_memset(ai->map, 0, sizeof(char *) * my_ptrlen(game->map));
}