#include <iostream>

#define MAX(X, Y) ((X) < (Y) ? (Y) : (X))

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int y;
    int w;

    std::cin >> y >> w;

    int ans = 6 - MAX(y, w) + 1;

    switch (ans)
    {
    case 1:
        std::cout << "1/6";
        break;
    case 2:
        std::cout << "1/3";
        break;
    case 3:
        std::cout << "1/2";
        break;
    case 4:
        std::cout << "2/3";
        break;
    case 5:
        std::cout << "5/6";
        break;
    default:
        std::cout << "1/1";
        break;
    }

    return EXIT_SUCCESS;
}