/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** game_loop
*/

#include "../include/matchstik.h"

int game_loop(matchstik_t *game)
{
    bool is_play = true;
    static size_t idx = 0;
    ai_t ai;
    int ret = -1;

    while (is_play) {
        ret = player_turn(game);
        if (ret == 1 || ret == 0) {
            ret = (ret == 1) ? 2 : ret;
            (ret == 2) ? my_putstr("You lost, too bad...\n") : NULL;
            return (ret);
        }
        ret = ia_turn(game, &ai);
        if (ret == 2) {
            ret = (ret == 2) ? 1 : ret;
            my_putstr("I lost... snif... but I'll get you next time!!\n");
            return (ret);
        }
        idx++;
    }
}