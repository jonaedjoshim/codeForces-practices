#include <stdio.h>

int main()
{
    long long int N, M;
    scanf("%lld %lld", &N, &M);

    int n = N % 10;
    int m = M % 10;

    printf("%d", n + m);

    return 0;
}