#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int ma = 0;

	std::cin >> n >> k;

	int* a = new int[n] {0};
	int* b = new int[k] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];

		ma = (ma < a[i] ? a[i] : ma);
	}

	for (int i = 0; i < k; ++i)
	{
		std::cin >> b[i];
	}

	int* c = new int[ma + 1] {0};

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < k; ++j)
		{
			c[a[i]] = (a[i] == b[j] ? ++c[a[i]] : c[a[i]]);
		}
	}

	for (int i = 0; i <= ma; ++i)
	{
		if (c[i])
		{
			std::cout << i << " ";
		}
	}

	delete[]a;

	return EXIT_SUCCESS;
}