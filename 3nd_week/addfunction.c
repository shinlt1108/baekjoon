#include <stdio.h>
int add(int a, int b){
    return a+b;
}
int main(void)
{
    int n,m;
    scanf("%d%d", &n, &m);
    int result = add(n, m);
    printf("결과 : %d\n", result);
    return 0;
}
