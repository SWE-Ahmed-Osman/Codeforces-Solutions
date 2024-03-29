#include <vector>
#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(NULL);
    std::cin.tie(NULL);

	int p = 0, b = 0;

	for (std::string s; getline(std::cin, s);)
	{
		switch (s[0])
		{
		case '+':
			p++;
			break;
		case '-':
			p--;
			break;
		default:
			int l = 0;
			bool f = 0;
			for (char ch : s)
			{
				if (f)
				{
					l++;
				}
				if (ch == ':')
				{
					f = 1;
				}
			}
			b += l * p;
		}
	}

	std::cout << b;
}