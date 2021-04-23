/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** utils
*/

#include "../include/matchstik.h"

size_t get_number_stick_from_line(matchstik_t *game, int line)
{
    size_t stick = 0;

    for (int i = 0; game->map[line][i]; i++) {
        if (game->map[line][i] == '|')
            stick++;
    }
    return (stick);
}