#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ans = 0;
    char matrix[8][8];

    for (size_t i = 0; i < 8; ++i)
    {
        for (size_t j = 0; j < 8; ++j)
        {
            scanf("%c", matrix[i] + j);
        }
        scanf("%*c");
    }

    for (size_t i = 0; i < 8; ++i)
    {
        int c = 0;

        for (size_t j = 0; j < 8; ++j)
        {
            if (matrix[i][j] == 'B')
            {
                c++;
            }
        }

        if (c == 8)
        {
            ans++;
        }
    }

    for (size_t i = 0; i < 8; ++i)
    {
        int c = 0;

        for (size_t j = 0; j < 8; ++j)
        {
            if (matrix[j][i] == 'B')
            {
                c++;
            }
        }

        if (c == 8)
        {
            ans++;
        }
    }

    printf("%i", ans == 16 ? 8 : ans);

    return EXIT_SUCCESS;
}