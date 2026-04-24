// #include <stdio.h>

// int main()
// {
//     char x[21], y[21];
//     scanf("%s %s", x, y);
//     int result = strcmp(x, y);
//     if (result < 0)
//     {
//         printf("%s\n", x);
//     }
//     else if (result > 0)
//     {
//         printf("%s\n", y);
//     }
//     else
//     {
//         printf("%s\n", x);
//     }

//     return 0;
// }







#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    int i = 0;

    while (true)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("%s", a);
            break;
        }
        else if (a[i] == '\0')
        {
            printf("%s", a);
            break;
        }
        else if (b[i] == '\0')
        {
            printf("%s", b);
            break;
        }
        else if (a[i] < b[i])
        {
            printf("%s", a);
            break;
        }
        else if (a[i] > b[i])
        {
            printf("%s", b);
            break;
        }
        else
        {
            i++;
        }
    }

    return 0;
}