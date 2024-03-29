#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, d, previous_b, moves = 0;

    std::cin >> n >> d;

    for (int i = 0; i < n; ++i)
    {
        int b;

        std::cin >> b;

        if (i && previous_b >= b)
        {
            int x = (previous_b - b + d) / d;
            moves += x;
            b += x * d;
        }

        previous_b = b;
    }

    std::cout << moves;

    return EXIT_SUCCESS;
}