#include <stdio.h>
int main(void)
{
    int a, b=0, i=1;
    scanf("%d", &a);
    while ( i <= a )
    {
        while( b < i)
        {
        printf("*");
        b++;
        }
        printf("\n");
        i++;
        b = 0;

    }
    return 0;
}
