/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** actualise
*/

#include "../include/matchstik.h"

void actualise_map(matchstik_t *game, int line, int match)
{
    int i = 0;

    for (; i < ((game->line) * 2) + 1; i++);
    for (; i > 0 && match > 0; i--) {
        if (game->map[line][i] == '|') {
            game->map[line][i] = ' ';
            match--;
        }
    }
}