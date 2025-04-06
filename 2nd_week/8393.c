#include <stdio.h>
int main(void)
{
    int a, b = 0, i = 1;
    scanf("%d", &a);
    while ( i <= a )
    {
        b += i;
        i++;
    }
    printf("%d\n", b);
    return 0;
}
