#include <stdio.h>

int main()
{
    long long int test;
    scanf("%lld", &test);

    for (int i = 1; i <= test; i++)
    {
        int n;
        long long int fact = 1;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("%lld\n", fact);
    }
    return 0;
}