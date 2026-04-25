#include <stdio.h>
#include <string.h>

int freq[26];

int main()
{
    char c;
    while (scanf("%c", &c) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            freq[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}