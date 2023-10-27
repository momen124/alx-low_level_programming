#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the minimum number of coins required to make change for an amount of money.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    int i, minicent = 0, money = atoi(argv[1]);
    int cent[] = {25, 10, 5, 2, 1};

    if (money < 0)
    {
        printf("0\n");
        return (0);
    }

    for (i = 0; i < 5; i++)
    {
        if (money >= cent[i])
        {
            minicent += money / cent[i];
            money = money % cent[i;
            if (money == 0)
            {
                break;
            }
        }
    }

    printf("%d\n", minicent);
    return (0);
}
