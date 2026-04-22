#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int signal = 1;
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            signal = 0; 
            break;
        }
        i++;
        j--;
    }

    if (signal == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}