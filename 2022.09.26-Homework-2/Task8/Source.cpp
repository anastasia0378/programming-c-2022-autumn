#include<iostream>

int main(int arg, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;

	if ((c * c == a * a + b * b) || (a * a == b * b + c * c) || (b * b == a * a + c * c))
	{
		std::cout << "right";
	}
	else if ((c * c < a * a + b * b) || (a * a < c * c + b * b) || (b * b < a* a + c * c))
	{
		std::cout << "acute";
	}
	else if ((c * c > a * a + b * b) || (a * a > c * c + b * b) || (b * b > a * a + c * c))
	{
		std::cout << "obtuse";
	}
	else
	{
		std::cout << "impossible";
	}

	return EXIT_SUCCESS;
}