#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int sum = 0;
        if (x >= y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 == 1)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}