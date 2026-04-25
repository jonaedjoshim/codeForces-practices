#include <stdio.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int min_sum = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                int result = a[i] + a[j] + j - i;

                if (result < min_sum)
                {
                    min_sum = result;
                }
            }
        }
        printf("%d\n", min_sum);
    }
    return 0;
}