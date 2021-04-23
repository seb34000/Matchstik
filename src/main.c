/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** main
*/

#include "../include/matchstik.h"

int main(int ac, char **av)
{
    int i = 0;
    matchstik_t game = {0};
    int ret = 0;

    if (ac != 3)
        return (84);
    if (tcheck_error(av) == 84)
        return (84);
    if (init_struct(&game, av) == 84)
        return (84);
    my_put_array(game.map);
    ret = game_loop(&game);
    return (ret);
}