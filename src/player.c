/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** player
*/

#include "../include/matchstik.h"

bool tcheck_input_line(char *line, matchstik_t *game)
{
    if (my_strncmp(line, "\n", 1) == 0 || my_getnbr(line) < 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (false);
    } else if (my_getnbr(line) > game->line || my_getnbr(line) == 0) {
        my_putstr("Error: this line is out of range\n");
        return (false);
    }
    return (true);
}

bool test_if_match(int match, int line, matchstik_t *game)
{
    size_t nbr = 0;

    for (size_t i = 0; game->map[line][i]; i++) {
        if (game->map[line][i] == '|')
            nbr++;
    }
    if (nbr < match)
        return (false);
    return (true);
}

bool tcheck_input_match(char *match, char *line, matchstik_t *game)
{
    if (my_strncmp(match, "\n", 1) == 0 || my_getnbr(match) < 0) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (false);
    } else if (my_getnbr(match) == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (false);
    } else if (my_getnbr(match) > game->match) {
        my_putstr("Error: you cannot remove more than ");
        my_putnbr(game->match);
        my_putstr(" matches per turn\n");
        return (false);
    } else if (test_if_match(my_getnbr(match), my_getnbr(line), game) != true) {
        my_putstr("Error: not enough matches on this line\n");
        return (false);
    }
    return (true);
}

int end_player(matchstik_t *game, char *line, char *match)
{
    actualise_map(game, my_getnbr(line), my_getnbr(match));
    player_resume(my_getnbr(line), my_getnbr(match));
    my_put_array(game->map);
    if (other_stick(game->map) == false)
        return (1);
    return (-1);
}

int player_turn(matchstik_t *game)
{
    char *line = NULL;
    char *match = NULL;
    size_t len = 0;
    size_t len2 = 0;

    my_putstr("\nYour turn: \n");
    do {
        do {
            my_putstr("Line: ");
            if (getline(&line, &len, stdin) == -1)
                return (0);
        } while (tcheck_input_line(line, game) == false);
            my_putstr("Matches: ");
            if (getline(&match, &len2, stdin) == -1)
                return (0);
    } while (tcheck_input_match(match, line, game) == false);
    if (end_player(game, line, match) == 1)
        return (1);
    return (-1);
}