/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** ia
*/

#include "../include/matchstik.h"

void get_bin(matchstik_t *game, ai_t *ai)
{
    init_ai(game, ai);
    for (int i = 1; i < my_ptrlen(game->map) - 1; i++) {
        ai->bin[i - 1] = my_strdup\
        (my_itob(get_number_stick_from_line(game, i), "01", 0));
        ai->stick[i - 1] = get_number_stick_from_line(game, i);
        ai->map[i - 1] = my_strdup(game->map[i]);
    }
}

void simulation(matchstik_t *g, ai_t *ai)
{
    int rm_stick = 0;
    int i = 0;
    bool test = false;

    for (; i < my_ptrlen(g->map) - 1;) {
        rm_stick = 0;
        rm_stick = test_xor(ai, g, i);
        if (rm_stick > 0 && xor(ai) == 0) {
            ai_resume(i, rm_stick);
            actualise_map(g, i, rm_stick);
            test = true;
            break;
        } else
            i++;
    }
    if (test == false) {
        randomize(g, ai);
    }
}

void get_final(matchstik_t *g, ai_t *ai, int stick, int i)
{
    if (stick < g->match) {
        ai_resume(i, stick);
        actualise_map(g, i, stick);
    } else if (stick == g->match) {
        ai_resume(i, stick - 1);
        actualise_map(g, i, stick - 1);
    } else {
        ai_resume(i, g->match - 1);
        actualise_map(g, i, g->match - 1);
    }
}

void final(matchstik_t *g, ai_t *ai)
{
    int i = 0;
    int stick = 0;

    for (;i < my_ptrlen(g->map); i++) {
        stick = get_number_stick_from_line(g, i);
        if (stick > 0) {
            get_final(g, ai, stick, i);
            return ;
        }
    }
}

int ia_turn(matchstik_t *game, ai_t *ai)
{
    my_putstr("\nAI's turn...\n");
    get_bin(game, ai);
    if (tcheck_if_final(game) == false) {
        simulation(game, ai);
    } else {
        final(game, ai);
    }
    my_put_array(game->map);
    if (other_stick(game->map) == false)
        return (2);
    return (0);
}