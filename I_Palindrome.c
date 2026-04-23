#include <stdio.h>

int main()
{
    char s[1001];
    scanf("%s", s);

    int length = strlen(s);
    int signal = 1;
    int i = 0;
    int j = length - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            signal = 0;
            break;
        }
        i++, j--;
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