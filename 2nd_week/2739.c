#include <stdio.h>
int main(void)
{
    int N, i=1;
    scanf("%d", &N);
    while ( i < 10 )
    {
        printf("%d * %d = %d\n", N, i, N*i);
        i++;
    }
    return 0;
}
