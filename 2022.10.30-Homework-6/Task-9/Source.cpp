#include<iostream>

int main(int argc, char* argv[])
{
	int b = 0;
	int c = 0;
	int n = 0;
	int m = 0;
	int mas = 0;
	int su = 0;

	std::cin >> b;

	int* a = new int[b] {0};

	for (int i = 0; i < b; i++)
	{
		std::cin >> a[i];
	}

	while (n < b)
	{
		for (int i = 0; i < b - n; ++i)
		{
			su += a[i + n];

			if (c < a[i + n] * (i + 1) && a[i + n] * (i + 1) > su)
			{
				c = a[i + n] * (i + 1);
				m = i + n;
			}
			else if (c < su)
			{
				c = su;
				m = i + n;
			}
		}
		n = m + 1;
		mas += c;
		c = 0;
		su = 0;
	}

	std::cout << mas;

	delete[]a;

	return EXIT_SUCCESS;
}