/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/
#include "neutrinos.h"
#include <stdlib.h>
#include <stdio.h>

int display(neutrinos_t data)
{

    printf("    Number of values:   %d\n", data.nb_values);
    printf("    Standard deviation: %.2f\n", data.st_dev);
    printf("    Arithmetic mean:    %.2f\n", data.a_mean);
    printf("    Root mean square:   %.2f\n", data.rs_mean);
    printf("    Harmonic mean:      %.2f\n\n", data.h_mean);
    return 0;
}
