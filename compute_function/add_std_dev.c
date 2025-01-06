/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/
#include <stdio.h>
#include <math.h>

double add_std(int nb_value, double std_dev, double value, double a_mean)
{
    double old_variance = std_dev * std_dev;
    double sum_sq_dev = nb_value * old_variance;
    double sum_sq_dev_new = sum_sq_dev + ((value - a_mean) * (value - a_mean));
    double new_variance = sum_sq_dev_new / (nb_value + 1);
    double new_std_dev = sqrt(new_variance);

    return new_std_dev;
}
