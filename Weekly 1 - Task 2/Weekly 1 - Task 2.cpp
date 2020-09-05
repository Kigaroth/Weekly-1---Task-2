// Weekly 1 - Task 2.cpp//

#include <iostream>
#include <string>
#include <conio.h>

bool coffee_answer = false;

std::string age = "";
std::string name = "";

std::string coffee_answer = "";

int yes = 1;
int YES = 1;
int Yes = 1;
int no = 0;
int No = 0;
int NO = 0;

int main()
{
	std::cout << " Hello! Could you tell me your name? ";
	std::getline(std::cin, name);
	std::cout << "\n Thank you! \n How old are you? ";
	
	std::getline(std::cin, age);
	std::cout << "\n Thank you for telling me!\n Last question:\n Do you drink coffee? Please answer by typing 'yes' or 'no' ";

	std::getline(std::cin,coffee_answer);

	std::cout << "\n Thank you for letting me get to know you: ";
	std::cout << "\n\t Your name is: " << name,".";
	std::cout << "\n\t You are" << age,".";
	
	if (coffee_answer = 1) {
		std::cout << "\n\t Seems you like to drink coffee.";
	}

	else {
		std::cout << "\n\t Seems you don't like to drink coffee.";
	}

}

