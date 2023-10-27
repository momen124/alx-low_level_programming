#include <stdio.h>
#include <stdlib.h>
/**
* main - print the mini num of coins
* @argc: num of commandline
* @argv:pointer to array of command line
* Retrun:0-success
*/

int main(int argc, char *argv[])
{
if (argc == 2)
{
	int i, minicent = 0, money = atoi(argv[1]);

	int cent[] = {25, 10, 5, 2, 1};

}
for (i = 0; i < 5; i++)
{
	if (money >= cent[i])
	{
		minicent += money / cent[i];
		money = money % cent[i];
		if (money % cent[i] == 0)
		{
			break;
		}
	}
	printf("%d\n", minicent);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
