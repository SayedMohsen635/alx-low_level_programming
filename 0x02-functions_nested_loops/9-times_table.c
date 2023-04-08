#include "main.h"

/**
 * times_table - The function prints the 9 times table, starting with 0
 * Return: Void
*/

void times_table()
{
    int i, j, mult;
    
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            mult = i * j;
            if (j == 0)
                printf("%d", mult);
            if (mult < 10)
            {
                printf(",  ");
                printf("%d", mult);
            }else if (mult >= 10)
            {
                printf(", ");
                printf("%d", mult);
            }
        }
        printf("\n");
    }
}
