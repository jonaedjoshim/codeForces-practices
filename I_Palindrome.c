#include <stdio.h>

int main()
{
    int n, r = 0, temp;

    scanf("%d", &n);
    temp = n;

    while (n)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }

    printf("%d\n", r);
    printf(temp == r ? "YES\n" : "NO\n");

    return 0;
}