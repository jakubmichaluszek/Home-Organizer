#include "ContactFileSource.h"
#include "ControleFunctions.h"
#include "MainMenu.h"
#pragma once
void mainMenu();
void backToContactMenu();
namespace project {
	 ContactFileSource* Kontakty = new ContactFileSource("kontakty.txt");
}



void ContactMenu() {
	std::cout << "0.Powrot do glownego Menu \n 1. Wyswietl kontakty \n" << "2. Dodaj kontakt \n" << "3. Usun kontakt po ID \n"
		<< "4. Wyszukaj kontakt po numerze telefonu \n" << "5.Wyswietl kontakty po kategorii \n" << std::endl;

	int wybor;
	std::cin >> wybor;
	switch (wybor)
	{
	case 0: {
		system("cls");
		mainMenu();
		break;
	};
	case 1: {
		system("cls");
		 project::Kontakty->ShowContacts();
		 backToContactMenu();
		break;
	};
	case 2: {
		system("cls");
		std::cout << "DODAWANIE KONTAKTU\n======================================\n" << std::endl;
	
				std::string firstName = GetFirstName();
				std::string lastName = GetLastName();
				std::string category = GetCategory();
				std::string telNumber = GetTelNumber();
				project::Kontakty->AddContact(project::Contact(firstName, lastName, category, telNumber));

		backToContactMenu();
		break;
	};
	case 3: {
		std::cout << "\nPodaj ID kontaktu, ktory chcesz usunac" << std::endl;
		int id;
		std::cin >> id;
		project::Kontakty->DeleteContactByID(id);
		backToContactMenu();
		break;
	};
	case 4: {
		std::string telNumber = GetTelNumber();
		project::Kontakty->getContactByTelNumber(telNumber);
		backToContactMenu();
		break;
	};
	case 5: {
		std::string category = GetCategory();
		project::Kontakty->getContactsByCategory(category);
		backToContactMenu();
		break;
	};
	default: {
		break;
	};
	}
}
void backToContactMenu() {
	std::cout << "aby powrocic wprowadz 1" << std::endl;
	int n;
	std::cin >> n;
	if (n == 1) {
		system("cls");
		ContactMenu();
	}
}