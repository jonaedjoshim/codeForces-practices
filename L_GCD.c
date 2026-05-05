#include <stdio.h>

int main()
{
    int a, b, mod;
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        mod = a % b;
        a = b;
        b = mod;
    }
    printf("%d\n", a);
    return 0;
}