#include <set>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

    int n;

    std::cin >> n;

    std::set<std::string> sts;

    std::map<std::string, int> mpsi;

    std::vector<int> vi;
    std::vector<std::string> vs;
    std::vector<std::pair<int, std::string>> vis;

    while (n--)
    {
        int score;
        std::string name;

        std::cin >> name >> score;

        mpsi[name] += score;

        vi.push_back(mpsi[name]);
        vs.push_back(name);
    }

    for (auto it : mpsi)
    {
        vis.push_back({it.second, it.first});
    }

    std::sort(vis.rbegin(), vis.rend());

    for (size_t i = 0; i < vis.size(); i++)
    {
        if (vis[i].first == vis[0].first)
        {
            sts.insert(vis[i].second);
        }
        else
        {
            break;
        }
    }

    for (size_t i = 0; i < vi.size(); i++)
    {
        if (vi[i] >= vis[0].first && sts.count(vs[i]))
        {
            std::cout << vs[i];
            break;
        }
    }

    return EXIT_SUCCESS;
}