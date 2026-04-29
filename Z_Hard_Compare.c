#include <stdio.h>
#include <math.h>

int main()
{
    double A, C;
    long long B, D;

    scanf("%lf %lld %lf %lld", &A, &B, &C, &D);

    double left = B * log(A);
    double right = D * log(C);

    if (left > right)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}