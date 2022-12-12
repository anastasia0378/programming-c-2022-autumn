#include<iostream>
int* h(int a, int b, int* arr)
{
	if (a * 2 >= b)
	{
		return arr;
	}

	else
	{
		int x = arr[a];
		arr[a] = arr[b - a];
		arr[b - a] = x;

		return h(++a, b, arr);
	}
}
int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	a = h(0, n - 1, a);

	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}

	delete[] a;

	return EXIT_SUCCESS;
}