#include<iostream>

int main(int argc, char* argv[])
{
	int b = 0;
	int c3 = 0;
	int c4 = 0;
	std::string r = "";

	scanf_s("%d", &b);

	int* a = new int[b] {0};
	int* three = new int[b] {0};
	int* four = new int[b] {0};

	for (int i = 0; i < b; ++i)
	{
		scanf_s("%d", &a[i]);

		if (a[i] % 2 == 0)
		{
			four[c4] = a[i];
			++c4;
		}
		else
		{
			three[c3] = a[i];
			++c3;
		}
	}

	for (int i = 0; i < c3; ++i)
	{
		std::cout << three[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < c4; ++i)
	{
		std::cout << four[i] << " ";
	}

	std::cout << std::endl;

	r = (c3 <= c4 ? "YES" : "NO");

	std::cout << r;

	delete[]a;

	return EXIT_SUCCESS;
}