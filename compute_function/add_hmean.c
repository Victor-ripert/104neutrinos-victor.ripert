/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include <stdio.h>

double add_hmean(int nb_value, double hmean, double new_value)
{
    double new_hmean = 0;

    new_hmean = (nb_value + 1) / ((nb_value / hmean) + (1 / new_value));
    // printf("(%d + 1) / ((%d * %f) + (1 / %f)) = %f\n", nb_value, nb_value, hmean, new_value, new_hmean);
    return new_hmean;
}
