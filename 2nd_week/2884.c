#include <stdio.h>
int main(void)
{
    int h, m;
    scanf("%d%d", &h, &m);
    if ( h > 0 && m - 45 < 0 )
        printf("%d %d\n", h-1, m + 15);
    else if ( h == 0 && m - 45 < 0)
        printf("23 %d\n", m+15);
    else
        printf("%d %d\n", h, m-45);
    return 0;
}
