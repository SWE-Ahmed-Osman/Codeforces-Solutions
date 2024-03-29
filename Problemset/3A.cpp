#include <vector>
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    char ch;
    int pr, pc, ar, ac, br, bc, st = 0;

    std::cin >> ch >> pr;

    pc = ch - 'a';

    std::cin >> ch >> ar;

    ac = ch - 'a';

    br = abs(ar - pr);
    bc = abs(ac - pc);

    std::vector<std::string> v;

    while (bc || br)
    {
        if (bc && br)
        {
            if (ar > pr)
            {
                if (ac > pc)
                {
                    pr++, pc++, v.push_back("RU");
                }
                else
                {
                    pr++, pc--, v.push_back("LU");
                }
            }
            else if (ac > pc)
            {
                pr--, pc++, v.push_back("RD");
            }
            else
            {
                pr--, pc--, v.push_back("LD");
            }

            bc--, br--, st++;
        }
        else if (br)
        {
            if (ar > pr)
            {
                pr++, v.push_back("U");
            }
            else
            {
                pr--, v.push_back("D");
            }

            br--, st++;
        }
        else
        {
            if (ac > pc)
            {
                pc++, v.push_back("R");
            }
            else
            {
                pc--, v.push_back("L");
            }

            bc--, st++;
        }
    }

    std::cout << st << "\n";

    for (std::string s : v)
    {
        std::cout << s << "\n";
    }

    return EXIT_SUCCESS;
}