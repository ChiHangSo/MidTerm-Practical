// MidTerm Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void questions();

int main()
{
	srand((unsigned int)time(NULL));
	unsigned int questions = rand() % 4;

	if (questions == 1)
	{
		char answer;
		std::cout << "How much is 5+5? \n";

		std::cout << " 1. 7" << "\n 2. 5\n" << " 3. 10\n" << " 4. 25\n\n";

		std::cin >> answer;

		if (answer == '3')
			std::cout << "You are correct! Thank you for playing!";
		else
			std::cout << "Incorrect!";
	}
	else if (questions == '2')
	{
		char answer;
		std::cout << "How much is 3*3?\n";

		std::cout << " 1. 9\n " << "2. 69\n " << "3. 10\n " << "4. 20\n\n";

		std::cin >> answer;

		if (answer == 1)
			std::cout << "You are correct! Thank you for playing!";
		else
			std::cout << "Incorrect!";
	}
	else if (questions == '3')
	{
		char answer;
		std::cout << "What color are oranges?\n";

		std::cout << " 1. Red\n " << "2. Yellow\n " << "3. Blue\n" << " 4. Orange\n\n";

		std::cin >> answer;

		if (answer == '4')
			std::cout << "You are correct! Thank you for playing!";
		else
			std::cout << "Incorrect!";

	}
	else
	{
		char answer;
		std::cout << "When was the year that covid began?\n";

		std::cout << " 1. 2018\n " << "2. 2019\n " << "3. 2020\n" << " 4. 2021\n\n";

		std::cin >> answer;

		if (answer == '2')
			std::cout << "You are correct! Thank you for playing!";
		else
			std::cout << "Incorrect!";
	}

}


