#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;
	int n = 0;

	std::cin >> n;

	int* a = new int[n] {0};

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	std::cin >> s;

	n = (s < 0 ? (-1 * s % n) : (n - s % n));

	for (int i = 0; i < n; i++)
	{
		std::cout << a[(i + n) % n] << " ";
	}

	delete[]a;

	return EXIT_SUCCESS;
}