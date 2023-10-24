#include <iostream>

int main()
{
	int n = 0;
	do
	{
		std::cin >> n;
	} while (n < 0 || n > 2000000);
	
	
	int count = 0;

	int maxsimum = n;

	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = n * 3 + 1;
		}

		++count;

		if (n > maxsimum)
		{
			maxsimum = n;
		}
	}

	std::cout << count << " " << maxsimum << std::endl;

	return 0;
}