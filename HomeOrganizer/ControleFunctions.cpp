#include "ControleFunctions.h"
std::string GetFirstName() {
	std::cout << "Podaj imie\n";
	std::string firstName;
	std::cin >> firstName;
	while (firstName.length() < 2) {
		std::cout << "Imie musi zawierac co najmniej 2 znaki\n";
			std::cin >> firstName;
		}
	return firstName;

}

std::string GetLastName() {
	std::cout << "Podaj nazwisko \n";
	std::string lastName;
	std::cin >> lastName;
	while (lastName.length() < 2) {
		std::cout << "Nazwisko musi zawierac co najmniej 2 znaki\n";
		std::cin >> lastName;
	}
	return lastName;
}

std::string GetCategory() {
	std::cout << "Podaj kategorie \n";
	std::string category;
	std::cin >> category;
	while (category.length() < 2) {
		std::cout << "Kategoria musi zawierac co najmniej 2 znaki\n";
		std::cin >> category;
	}
	return category;
}

std::string GetTelNumber() {
	std::cout << "Podaj numer telefonu\n";
	int telNbr;
	std::cin >> telNbr;
	

	while (((trunc(log10(telNbr)) + 1) != 9)) {
			std::cout << "Numer telefonu zawiera 9 znakow\n";
			std::cin >> telNbr;
		}
	
	std::string telNbrString = std::to_string(telNbr);
	return telNbrString;
}
