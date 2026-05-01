#include <stdio.h>

int main()
{
    long long l1, r1, l2, r2;
    scanf("%lld %lld %lld %lld", &l1, &r1, &l2, &r2);

    long long left, right;

    if (l1 > l2)
        left = l1;
    else
        left = l2;

    if (r1 < r2)
        right = r1;
    else
        right = r2;

    if (left <= right)
        printf("%lld %lld\n", left, right);
    else
        printf("-1\n");

    return 0;
}