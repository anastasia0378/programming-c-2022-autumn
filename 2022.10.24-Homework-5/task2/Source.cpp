#include<iostream>

int main(int argc, char* argv[])
{
	int b = 0;
	int K = 0;
	int T = 0;
	int index = 0;
	int ma = -1000;

	scanf_s("%d", &b);

	int* a = new int[b] {0};

	for (int i = 0; i < b; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	scanf_s("%d", &K);
	scanf_s("%d", &T);

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