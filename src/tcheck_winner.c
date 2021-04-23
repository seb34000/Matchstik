/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** tcheck_winner
*/

#include "../include/matchstik.h"

bool tcheck_win(matchstik_t *g)
{
    int idx = 0;

    for (int i = 0; i < my_ptrlen(g->map); i++) {
        idx += get_number_stick_from_line(g, i);
    }
    if (idx == 1)
        return (true);
    return (false);
}

bool tcheck_if_final(matchstik_t *g)
{
    bool tcheck = true;

    for (int i = 1; i < my_ptrlen(g->map) - 1; i++) {
        if (get_number_stick_from_line(g, i) > 1) {
            tcheck = false;
        }
    }
    return (tcheck);
}

bool tcheck_if_final_two(matchstik_t *g)
{
    int test = 0;
    int save = 0;

    for (int i = 1; i < my_ptrlen(g->map) - 1; i++) {
        if (get_number_stick_from_line(g, i) >= 1) {
            test++;
            save = i;
        }
    }
    if (test == 1)
        return (true);
    return (false);
}

bool other_stick(char **map)
{
    int idx = 0;

    for (int i = 0; i < my_ptrlen(map); i++) {
        for (int j = 0; j < my_strlen(map[i]); j++) {
            idx += (map[i][j] == '|') ? 1 : 0;
        }
    }
    if (idx == 0)
        return (false);
    return (true);
}