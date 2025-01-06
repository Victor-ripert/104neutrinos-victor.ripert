/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/
#include <stdio.h>
#include "neutrinos.h"
#include <string.h>
#include <stdlib.h>

int get_newvalue(double *value)
{
    char *input = malloc(sizeof(char) * 100);

    printf("Enter next value: ");
    scanf("%s", input);
    if (strcmp(input, "END") == 0) {
        return 1;
    }
    if (is_nbr(input) == 0) {
        (*value) = atof(input);
        return 0;
    } else {
        return - 1;
    }
    return 0;
}
