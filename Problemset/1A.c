#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m, a;

    scanf("%i %i %i", &n, &m, &a);

    long long int N = (n + a - 1) / a, M = (m + a - 1) / a;

    printf("%lli", N * M);

    return EXIT_SUCCESS;
}