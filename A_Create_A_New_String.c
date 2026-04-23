#include <stdio.h>

int main()
{
    char s[1001], t[1001];
    scanf("%s %s", s, t);

    int counta = 0, countb = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        counta++;
    }

    for (int i = 0; t[i] != '\0'; i++)
    {
        countb++;
    }

    printf("%d %d\n", counta, countb);
    printf("%s %s\n", s, t);

    return 0;
}