#include <iostream>
#include <algorithm>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    std::string flags_colours;
    std::string first_wakefulness;
    std::string second_wakefulness;

    std::cin >> flags_colours;
    std::cin >> first_wakefulness;
    std::cin >> second_wakefulness;

    std::string reverse_flags_colours = flags_colours;
    reverse(reverse_flags_colours.begin(), reverse_flags_colours.end());

    bool from_A_to_B = false;
    bool from_B_to_A = false;

    size_t first_wakefulness_idx = flags_colours.find(first_wakefulness);
    size_t second_wakefulness_idx;

    if (first_wakefulness_idx != std::string::npos)
    {
        second_wakefulness_idx = flags_colours.find(second_wakefulness, first_wakefulness_idx + first_wakefulness.size());
        if (second_wakefulness_idx != std::string::npos && second_wakefulness_idx > first_wakefulness_idx)
        {
            from_A_to_B = true;
        }
    }

    first_wakefulness_idx = reverse_flags_colours.find(first_wakefulness);

    if (first_wakefulness_idx != std::string::npos)
    {
        second_wakefulness_idx = reverse_flags_colours.find(second_wakefulness, first_wakefulness_idx + first_wakefulness.size());
        if (second_wakefulness_idx != std::string::npos && second_wakefulness_idx > first_wakefulness_idx)
        {
            from_B_to_A = true;
        }
    }

    if (from_A_to_B && from_B_to_A)
    {
        std::cout << "both";
    }
    else if (from_A_to_B)
    {
        std::cout << "forward";
    }
    else if (from_B_to_A)
    {
        std::cout << "backward";
    }
    else
    {
        std::cout << "fantasy";
    }

    return EXIT_SUCCESS;
}