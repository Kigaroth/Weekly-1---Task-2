// Weekly 1 - Task 2.cpp//

#include <iostream>
#include <string>
#include <conio.h>

std::string age = "";
std::string name = "";

std::string drinks_coffee = "";


int main()
{
	std::cout << " Hello! Could you tell me your name? ";
	std::getline(std::cin, name);
	std::cout << "\n Thank you! \n How old are you? ";
	
	std::getline(std::cin, age);
	std::cout << "\n Thank you for telling me!\n Last question:\n Do you drink coffee? Please answer by typing 'yes' or 'no' ";

	std::getline(std::cin, drinks_coffee);

	std::cout << "\n Thank you for letting me get to know you: ";
	std::cout << "\n\t Your name is: " << name,".";
	std::cout << "\n\t You are " << age," years old.";
	
	if (drinks_coffee == "yes") {
		std::cout << "\n\t Seems you like coffee.";
	}

	else {
		std::cout << "\n\t Oh you don't like coffee.";
	}

}

