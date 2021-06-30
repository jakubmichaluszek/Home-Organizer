
#include "MainMenu.h"
#include "WorkQuestFileSource.h"
#include "HomeQuestFileSource.h"
#include "QuestControleFunctions.h"
#pragma once
void mainMenu(); // This function goes one level up to Main menu 
void backToQuestMenu(); //This function goes one level up to Menu of Quests

namespace project {
	WorkQuestFileSource* WorkQuests = new WorkQuestFileSource("zadaniaPraca.txt");
	HomeQuestFileSource* HomeQuests = new HomeQuestFileSource("zadaniaDom.txt");
}


//This is a menu of quests, by clicking special number we call a function that does individual things.

void QuestMenu() {
	std::cout << "0.Powrot do glownego Menu \n 1. Wyswietl Wszystkie Zadania \n" << "2. Dodaj Zadanie \n" << "3. Usun zadanie po ID \n"
		<< "4. Wyszukaj zadanie po dacie \n" << "5.Wyswietl zadania niezrobione \n" << std::endl;

	int wybor;
	std::cin >> wybor;
	switch (wybor)
	{
	case 0: { //we go back to MainMenu
		system("cls");
		mainMenu();
		break;
	};
	case 1: { //We show all of our quests 
		system("cls");
		std::cout << " ______ WSZYSTKIE ZADANIA ________" << std::endl << std::endl;
		std::cout << "Zadania praca: " << std::endl;
		std::cout << "           Tresc:           " << "            Data           " << " Czy zrobione: " << "    Miejsce:   " << "     okres czasu: " << std::endl;
		project::WorkQuests->ShowWorkQuests();
		std::cout << "Zadania prywatne: " << std::endl;
		project::HomeQuests->ShowHomeQuests();
		backToQuestMenu();
		break;
	};
	case 2: { //we are adding a new quest 
		system("cls");
		std::cout << "____DODAWANIE ZADANIA_______" << std::endl;
		std::cout << "Wybierz kategorie: " << std::endl;
		std::cout << "1. Zadanie prywatne" << std::endl << "2. Zadanie praca" << std::endl;
		int wybor;
		std::cin >> wybor;
		switch (wybor) { //firstly we have to choose a category of our new quest 
			case 1: {
				std::string QuestInformation = GetQuestInformation();
				std::string day = GetDay();
				std::string month = GetMonth();
				std::string year = GetYear();
				std::string done = "nie"; // when we add a quest to do, we haven't done that.
				std::string place = GetPlace();
				project::HomeQuests->addHomeQuest(project::HomeQuest(QuestInformation, day, month, year, done, place));
				backToQuestMenu();
				break;
			}
			case 2: {
				std::string QuestInformation = GetQuestInformation();
				std::string day = GetDay();
				std::string month = GetMonth();
				std::string year = GetYear();
				std::string done = "nie"; // when we add a quest to do, we haven't done that.
				std::string place = GetPlace();
				std::string period = GetPeriod();
				project::WorkQuests->addWorkQuest(project::workQuest(QuestInformation, day, month, year, done, place, period));
				backToQuestMenu();
				break;
			}
		}
		break;
	}; //case 2 end
	case 3: {
		system("cls");
		std::cout << "____ USUWANIE ZADANIA____ " << std::endl;
		std::cout << " Wybierz kategorie: " << std::endl;
		std::cout << "1. Zadanie prywatne" << std::endl << "2. Zadanie praca" << std::endl;
		int wybor;
		std::cin >> wybor;
			switch (wybor) {
			case 1: {
				std::cout << "\nPodaj ID Zadania, ktory chcesz usunac" << std::endl;
				project::HomeQuests->ShowHomeQuests();
				std::cout << std::endl << std::endl;
				int id;
				std::cin >> id;
				project::HomeQuests->DeleteHomeQuestByID(id);
				backToQuestMenu();
				break;
					}

			case 2: {
				std::cout << "\nPodaj ID Zadania, ktory chcesz usunac" << std::endl;
				project::WorkQuests->ShowWorkQuests();
				std::cout << std::endl << std::endl;
				int id;
				std::cin >> id;
				project::WorkQuests->DeleteWorkQuestByID(id);
				backToQuestMenu();
				break;
				}
			}
			backToQuestMenu();
		break;
	}//case 3 end
	case 4: {
		system("cls");
		std::cout << " ___ WYSZUKIWANIE ZADANIA PO DACIE______" << std::endl;
		int day = std::stoi( GetDay());
		int month = std::stoi(GetMonth());
		int year =std::stoi(GetYear());

		project::WorkQuests->GetWorkQuestsByDate(day, month, year);
		project::HomeQuests->GetHomeQuestsByDate(day, month, year);
		backToQuestMenu();
		break;

	}
	case 5: {
		system("cls");
		std::cout << " ___ WYSZUKIWANIE ZADANIA PO STATUSIE______" << std::endl;
		std::cout << "1. Zrobione" << std::endl << "2.Niezrobione" << std::endl;
		int wybor;
		std::cin >> wybor;
		switch (wybor) {
		case 1: {
			std::string status = "tak";
			project::WorkQuests->GetWorkQuestsByStatus(status);
			project::HomeQuests->GetHomeQuestsByStatus(status);
			backToQuestMenu();
			break;
			}
		case 2: {
			std::string status = "nie";
			project::WorkQuests->GetWorkQuestsByStatus(status);
			project::HomeQuests->GetHomeQuestsByStatus(status);
			backToQuestMenu();
			break;
		}

		}
	}

	}//main switch end
}


void backToQuestMenu() {
		std::cout << "aby powrocic wprowadz 1" << std::endl;
		int n;
		std::cin >> n;
		if (n == 1) {
			system("cls");
			QuestMenu();
		}
}

