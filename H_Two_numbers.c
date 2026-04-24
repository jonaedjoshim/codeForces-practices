#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int floor = A / B;
    int ceil = (A + B - 1) / B;
    int round = (A * 1.0 / B) + 0.5;

    printf("floor %d / %d = %d\n", A, B, floor);
    printf("ceil %d / %d = %d\n", A, B, ceil);
    printf("round %d / %d = %d", A, B, round);

    return 0;
}