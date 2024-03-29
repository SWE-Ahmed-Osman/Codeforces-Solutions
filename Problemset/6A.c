#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX(X, Y) ((X) < (Y) ? (Y) : (X))

int main(void)
{
    int l[4];
    bool seg = false;

    for (size_t i = 0; i < 4; ++i)
    {
        scanf("%i", l + i);
    }

    for (size_t i = 0; i < 4; ++i)
    {
        for (size_t j = i + 1; j < 4; ++j)
        {
            for (size_t g = j + 1; g < 4; ++g)
            {
                int mx = MAX(l[i], MAX(l[j], l[g])), sum = l[i] + l[j] + l[g];

                if (mx < sum - mx)
                {
                    printf("TRIANGLE");
                    return EXIT_SUCCESS;
                }
                else if (mx == sum - mx)
                {
                    seg = true;
                }
            }
        }
    }

    printf(seg ? "SEGMENT" : "IMPOSSIBLE");
    return EXIT_SUCCESS;
}