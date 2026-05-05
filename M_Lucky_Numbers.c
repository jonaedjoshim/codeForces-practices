#include <stdio.h>

int main()
{
    int a, b;
    int flag = 0;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        int lucky = 1;
        int n = i;

        while (n > 0)
        {
            int last_digit = n % 10;

            if (last_digit != 4 && last_digit != 7)
            {
                lucky = 0;
            }

            n /= 10;
        }

        if (lucky)
        {
            flag = 1;
            printf("%d ", i);
        }
    }

    if (flag == 0)
    {
        printf("-1");
    }

    return 0;
}