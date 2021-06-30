#pragma once
#include "ContactMenu.h"
#include "QuestMenu.h"
void mainMenu() {
	std::cout << "1. Zarzadzaj kontaktami\n";
	std::cout << "2.Zarzadzaj zadaniami\n";
	int wybor;
	std::cin >> wybor;
	switch (wybor)
	{
	case 1: 
	{	system("cls");
		ContactMenu();
		break;
	}
	case 2: 
	{
		system("cls");
		QuestMenu();
		break;
	}
	default:
	{
		delete project::Kontakty;
		delete project::HomeQuests;
		delete project::WorkQuests;
		break;
	}
	}
}