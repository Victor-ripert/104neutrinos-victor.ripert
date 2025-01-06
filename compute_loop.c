/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/
#include "neutrinos.h"
#include <stdlib.h>
#include <stdio.h>

int compute_loop(neutrinos_t *data, double new_value)
{
    double new_mean = 0;
    double new_rms = 0;
    double new_hmean = 0;
    double new_std_dev = 0;

    //printf("\tNumber of Values: %d\n", data->nb_values + 1);
    new_std_dev = add_std_dev(data->nb_values, data->st_dev, new_value, data->a_mean);
    //printf("\tStandard Deviation: %.2f\n", new_std_dev);
    new_mean = add_mean(data->nb_values, data->a_mean, new_value);
    //printf("\tAritmetic Mean: %.2f\n", new_mean);
    if (data->rs_mean == 0) {
        data->rs_mean = find_rms(data->nb_values, data->a_mean, data->st_dev);
    }
    new_rms = add_rms(data->nb_values, data->rs_mean, new_value);
    //printf("\tRoot Mean Square: %.2f\n", new_rms);
    new_hmean = add_hmean(data->nb_values, data->h_mean, new_value);
    //printf("\tHarmonic Mean: %.2f\n", new_hmean);
    data->a_mean = new_mean;
    data->st_dev = new_std_dev;
    data->rs_mean = new_rms;
    data->h_mean = new_hmean;
    data->nb_values += 1;
    return 0;
}
