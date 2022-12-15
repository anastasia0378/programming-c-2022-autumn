#include<iostream>

int** array(int b)
{
	int** res = new int* [b];

	for (int i = 0; i < b; ++i)
	{
		res[i] = new int[b] {0};
	}

	return res;
}

int** spiral(int** r, int x, int y, int z, int b, int f)
{
	if (z > b * b)
	{
		return r;
	}

	if (y < b - f && x == f - 1)
	{
		if (r[x][y])
		{
			r[++x][++y] = z;
			return spiral(r, x, ++y, ++z, b, ++f);
		}
		else
		{
			r[x][y] = z;
			return spiral(r, x, ++y, ++z, b, f);
		}
	}
	else if (y == b - f && x < b - f)
	{
		r[x][y] = z;

		return spiral(r, ++x, y, ++z, b, f);
	}
	else if (y > f - 1 && x == b - f)
	{
		r[x][y] = z;

		return spiral(r, x, --y, ++z, b, f);
	}
	else if (y == f - 1 && x >= f)
	{
		r[x][y] = z;

		return spiral(r, --x, y, ++z, b, f);
	}
}

int main(int argc, char* argv[])
{
	int b = 0;

	std::cin >> b;

	int** a = array(b);

	a = spiral(a, 0, 0, 1, b, 1);

	for (int i = 0; i < b; ++i)
	{
		for (int j = 0; j < b; ++j)
		{
			std::cout << a[i][j] << " ";
		}

		std::cout << std::endl;
	}

	delete[] a;

	return EXIT_SUCCESS;
}