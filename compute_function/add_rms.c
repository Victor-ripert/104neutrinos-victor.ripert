/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include <stdio.h>
#include <math.h>

double add_rms(int nb_value, double rms, double new_value)
{
    double new_rms = 0;
    //double square_sum = (nb_value * (rms * rms)) + (new_value * new_value);

    new_rms = sqrt(((nb_value * (rms * rms)) + (new_value * new_value)) / (nb_value + 1));
    return new_rms;
}
