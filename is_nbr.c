/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

int is_nbr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return -1;
        }
    }
    return 0;
}
