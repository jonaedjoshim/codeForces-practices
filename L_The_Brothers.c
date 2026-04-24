#include <stdio.h>

int main()
{
    char f1[100], s1[100];
    char f2[100], s2[100];
    int i = 0, ok = 1;

    scanf("%s %s", f1, s1);
    scanf("%s %s", f2, s2);

    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            ok = 0;
            break;
        }
        i++;
    }

    if (ok == 1)
        printf("ARE Brothers");
    else
        printf("NOT");

    return 0;
}