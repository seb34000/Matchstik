/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_resume
*/

#include "../include/matchstik.h"

void player_resume(int line, int match)
{
    my_putstr("Player removed ");
    my_putnbr(match);
    my_putstr(" match(es) from line ");
    my_putnbr(line);
    my_putchar('\n');
}

void ai_resume(int line, int match)
{
    my_putstr("AI removed ");
    my_putnbr(match);
    my_putstr(" match(es) from line ");
    my_putnbr(line);
    my_putchar('\n');
}