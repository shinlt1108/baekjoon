#include <stdio.h>
int main(void)
{
    int a, b = 0, c = 0, i = 1;
    scanf("%d", &a);
    while (i <= a)
    {
        while ( c < a-i )
        {
            printf(" ");
            c++;
        }
        c = 0;
        while (b < i)
        {
            printf("*");
            b++;
        }
        b =0;
        i++;
        printf("\n");
    }
    return 0;
}
