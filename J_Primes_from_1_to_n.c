#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        int signal = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                signal = 0;
                break;
            }
        }
        if (signal == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}