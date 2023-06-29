#include <Windows.h>
#include <iostream>
#include <limits.h>
#include <string>

int a;

float a_number1;
float a_number2;

float m_number1;
float m_number2;

float d_number1;
float d_number2;

int main()
{
isaacgimmetop:

	SetConsoleTitleA("Math Tools");

	std::cout << "Please Pick an option from the list below \n[1] Addition Caluclator\n[2] Multiplication Calculator\n[3] Division Calculator\n[4] Exit" << std::endl << "\nOption: ";

	std::cin >> a;

	switch (a)
	{
	case 1:
		std::cout << "Whats the first number you want to use for addition?";
		std::cin >> a_number1;
		std::cout << "Whats the second number you want to use for addition?";
		std::cin >> a_number2;

		std::cout << "The sum of " << a_number1 << " + " << a_number2 << " = " << a_number1 + a_number2 << std::endl;

		Sleep(5000);
		system("cls");
		goto isaacgimmetop;
		break;
	case 2:
		std::cout << "Whats the first number you want to use for multiplication?";
		std::cin >> m_number1;
		std::cout << "Whats the second number you want to use for multiplication?";
		std::cin >> m_number2;

		std::cout << "The product of " << m_number1 << " x " << m_number2 << " = " << m_number1 * m_number2 << std::endl;

		Sleep(5000);
		system("cls");
		goto isaacgimmetop;
		break;
	case 3:
		std::cout << "Whats the first number you want to use for division?";
		std::cin >> d_number1;
		std::cout << "Whats the second number you want to use for division?";
		std::cin >> d_number2;

		std::cout << "The dividend of " << d_number1 << " / " << d_number2 << " = " << d_number1 / d_number2 << std::endl;

		Sleep(5000);
		system("cls");
		goto isaacgimmetop;
		break;
	case 4:
		exit(12);
		break;
	default:
		exit(1);
		break;
	}
	return 0;
}
