#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    for (int i = 0; i < a; i++)
    {
        int v;
        scanf("%d", &v);
        if (v % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (v > 0)
        {
            positive++;
        }
        else if (v < 0)
        {
            negative++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}