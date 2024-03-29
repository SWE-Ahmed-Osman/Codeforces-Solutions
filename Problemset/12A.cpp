#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    char input[3][3];

    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 3; ++j)
        {
            std::cin >> input[i][j];
        }
    }

    if (input[0][0] != input[2][2] || input[0][1] != input[2][1] || input[1][0] != input[1][2] || input[0][2] != input[2][0])
    {
        std::cout << "NO";
    }
    else
    {
        std::cout << "YES";
    }

    return EXIT_SUCCESS;
}