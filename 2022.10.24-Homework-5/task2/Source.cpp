#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int ma = -1000;
	int index = 0;
	int L = 0;
	int R = 0;

	std::cin >> n;

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> L;
	std::cin >> R;

	for (int i = L - 1; i < R; ++i)
	{
		if (a[i] > ma)
		{
			ma = a[i];
			index = ++i;
		}
	}

	std::cout << ma << " " << index;

	free(a);

	return EXIT_SUCCESS;
}