#include<iostream>

int main(int arg, char* argv[])
{
	int ban = 0;

	std::cin >> ban;

	int x = ban / 100;
	int y = (ban % 100) / 10;
	int z = ban % 10;

	switch (x)
	{
	case 1:
		std::cout << "sto ";
		break;
	case 2:
		std::cout << "dvesti ";
		break;
	case 3:
		std::cout << "trista ";
		break;
	case 4:
		std::cout << "chetirista ";
		break;
	case 5:
		std::cout << "pyt'sot ";
		break;
	case 6:
		std::cout << "sest'sot ";
		break;
	case 7:
		std::cout << "sem'sot ";
		break;
	case 8:
		std::cout << "vosem'sot ";
		break;
	case 9:
		std::cout << "devyt'sot ";
		break;
	case 0:
		break;
	}

	if (y == 1)
	{
		switch (z)
		{
		case 1:
			std::cout << "odinadcat' bananov";
			break;
		case 2:
			std::cout << "dvenadcat' bananov";
			break;
		case 3:
			std::cout << "trinadcat' bananov";
			break;
		case 4:
			std::cout << "chetirnadcat' bananov";
			break;
		case 5:
			std::cout << "pyatnadcat' bananov";
			break;
		case 6:
			std::cout << "shestnadcat' bananov";
			break;
		case 7:
			std::cout << "semnadcat' bananov";
			break;
		case 8:
			std::cout << "vosemnadcat' bananov";
			break;
		case 9:
			std::cout << "dvenadcat' bananov";
			break;
		case 0:
			std::cout << "desyat' bananov";
			break;
		}
	}
	else
	{
		switch (y)
		{
		case 2:
			std::cout << "dvadcat' ";
			break;
		case 3:
			std::cout << "tridcat' ";
			break;
		case 4:
			std::cout << "sorok ";
			break;
		case 5:
			std::cout << "pyadesat ";
			break;
		case 6:
			std::cout << "shesdesyat ";
			break;
		case 7:
			std::cout << "semdesyat ";
			break;
		case 8:
			std::cout << "vosemdesyat ";
			break;
		case 9:
			std::cout << "devyanosto ";
			break;
		case 0:
			break;
		}
		switch (z)
		{
		case 1:
			std::cout << "odin banan";
			break;
		case 2:
			std::cout << "dva banana";
			break;
		case 3:
			std::cout << "tri banana";
			break;
		case 4:
			std::cout << "chetire banana";
			break;
		case 5:
			std::cout << "pyat' bananov";
			break;
		case 6:
			std::cout << "shest' bananov";
			break;
		case 7:
			std::cout << "sem' bananov";
			break;
		case 8:
			std::cout << "vosem' bananov";
			break;
		case 9:
			std::cout << "devyat' bananov";
			break;
		case 0:
			if (ban == 0)
			{
				std::cout << "nol' bananov";
			}
			else
			{
				std::cout << "bananov";
			}
			break;
		}
	}

	return EXIT_SUCCESS;
}

