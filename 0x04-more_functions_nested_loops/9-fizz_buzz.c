#include <stdio.h>
/*
* main - entry block
*Return: 0 success
*/
int main(void)
{
    int i;
    for ( i=1 ;i <= 100; i++)
{
        if((i % 3 == 0) && ( i % 15 != 0))
        {
            printf("fizz ");
        }
        else if((i % 5 == 0) && ( i % 15 != 0))
            {
                printf("buzz ");
            }
        else if (i % 15 == 0)
            {
                printf("fizzbuzz ");
            }
        else
        {
            printf("%d ",i);
        }
}
    putchar('\n');
    return (0);
}
