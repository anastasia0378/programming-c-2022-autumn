#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int ma = -1000;
	int index = 0;
	int K = 0;
	int T = 0;

	std::cin >> n;

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> K;
	std::cin >> T;

	for (int i = K - 1; i < T; ++i)
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