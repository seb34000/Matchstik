/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_xor
*/

#include "../include/matchstik.h"

int xor(ai_t *ai)
{
    int i = 1;
    int res = -1;

    for (; ai->bin[i]; i++) {
        if (res == -1)
            res = ai->stick[i - 1] ^ ai->stick[i];
        else
            res ^= ai->stick[i];
    }
    return (res);
}

int test_xor(ai_t *ai, matchstik_t *g, int i)
{
    int rm_stick = 0;

    while (xor(ai) != 0) {
        if (ai->stick[i] == 0 || rm_stick == g->match) {
            return (rm_stick);
        }
        ai->stick[i]--;
        rm_stick++;
    }
    return (-1);
}
