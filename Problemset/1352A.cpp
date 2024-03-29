#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define PI acos(-1)
#define MIN(X, Y) ((X) > (Y) ? (Y) : (X))
#define MAX(X, Y) ((X) < (Y) ? (Y) : (X))
#define CEIL(X, Y) (((X) + (Y)-1) / (Y))
#define NUMBER_OF_DIGITS(X) floor(1 + log10(X))
#define TOGGLE_CASE(CHARACTER) ((CHARACTER) ^ (1 << 5))
#define WATCH(X) std::cout << (#X) << " = " << X << endl
#define SWAP(X, Y) ((X) ^= (Y)), ((Y) ^= (X)), ((X) ^= (Y))
#define SET_BIT(VARIABLE, INDEX) ((VARIABLE) | 1 << (INDEX))

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout << fixed << setprecision(9);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int mod = 1;
        vector<int> summands;

        do
        {
            mod *= 10;

            if (n % mod)
                summands.push_back(n % mod);

            n /= mod;
            n *= mod;
        } while (mod / 10 <= n);

        cout << summands.size() << endl;

        for (auto summand : summands)
            cout << summand << " ";

        cout << endl;
    }

    return EXIT_SUCCESS;
}