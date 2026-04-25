#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[51], t[51];
        scanf("%s %s", s, t);

        int len_s = strlen(s);
        int len_t = strlen(t);

        int i = 0;
        while (i < len_s && i < len_t)
        {
            printf("%c%c", s[i], t[i]);
            i++;
        }

        while (i < len_s)
        {
            printf("%c", s[i]);
            i++;
        }

        while (i < len_t)
        {
            printf("%c", t[i]);
            i++;
        }

        printf("\n");
    }

    return 0;
}