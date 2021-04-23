/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_random
*/

#include "../include/matchstik.h"

void randomize(matchstik_t *g, ai_t *ai)
{
    int line = 0;
    int match = 0;
    int max = 0;

    srand(time(NULL));
    do {
        line = (rand() % (g->line + 1 - 1)) + 1;
    } while (get_number_stick_from_line(g, line) == 0);
    max = get_number_stick_from_line(g, line);
    do {
        match = (rand() % (max + 1 - 1)) + 1;
    } while (max < match || match > g->match);
    ai_resume(line, match);
    actualise_map(g, line, match);
}