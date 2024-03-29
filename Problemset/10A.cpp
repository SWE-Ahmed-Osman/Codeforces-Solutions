#include <iostream>

#define MIN(X, Y) ((X) > (Y) ? (Y) : (X))

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n, P1, P2, P3, T1, T2;

    std::cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;

    int previous_l, total_power = 0;

    for (int i = 0; i < n; ++i)
    {
        int l, r;

        std::cin >> l >> r;

        if (i == 0)
        {
            previous_l = l;
        }

        int time_between_l_and_previous_l = l - previous_l;

        int power1 = P1 * MIN(time_between_l_and_previous_l, T1);
        time_between_l_and_previous_l -= MIN(time_between_l_and_previous_l, T1);

        int power2 = P2 * MIN(time_between_l_and_previous_l, T2);
        time_between_l_and_previous_l -= MIN(time_between_l_and_previous_l, T2);

        int power3 = P3 * time_between_l_and_previous_l;

        total_power += power1 + power2 + power3;
        total_power += (r - l) * P1;

        previous_l = r;
    }

    std::cout << total_power;

    return EXIT_SUCCESS;
}