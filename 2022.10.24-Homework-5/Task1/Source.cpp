#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int cnt = 0;
	int num = 0;

	std::cin >> n;

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> num;

	for (int i = 0; i < n; ++i)
	{
		cnt = (num == a[i] ? ++cnt : cnt);
	}

	std::cout << cnt;

	free(a);

	return EXIT_SUCCESS;
}