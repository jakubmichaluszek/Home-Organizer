#include "QuestControleFunctions.h"

std::string GetQuestInformation() {
	std::cout << "Podaj tresc zadania\n";
	std::string quest;
	std::cin.ignore();
	std::getline(std::cin, quest);
	while (quest.length() < 2) {
		std::cout << "Tresc zadania musi zawierac co najmniej 2 znaki\n";
		std::cin.ignore();
		std::getline(std::cin, quest);
	}
	return quest;

}
std::string GetDay() {
	std::cout << "Podaj dzien: \n";
	int day;
	std::cin >> day;

	while ((day <0) || (day >31))  {
		std::cout << "Dzien zawiera tylko liczby i jest w przedziale od 1 do 31 \n";
		std::cin >> day;
	}
	std::string dayToString = std::to_string(day);
	return dayToString;
}

std::string GetMonth() {
	std::cout << "Podaj miesiac: \n";
	int month;
	std::cin >> month;

	while ((month < 0) || (month > 12)) {
		std::cout << "Miesiac zawiera tylko liczby i jest w przedziale od 1 do 12 \n";
		std::cin >> month;
	}
	std::string monthToString = std::to_string(month);
	return monthToString;
}
std::string GetYear() {
	std::cout << "Podaj rok: \n";
	int year;
	std::cin >> year;
	
	while ((year < 2021) || (year > 2024)) {
		std::cout << "rok zawiera tylko liczby i musi miescic sie w przedziale od 2021 do 2024 \n";
		std::cin >> year;
	}
	std::string yearToString = std::to_string(year);
	return yearToString;
}

std::string GetPlace() {
	std::cout << "Podaj miejsce wykonania zadania \n";
	std::string place;
	std::cin >> place;
	while (place.length() < 2) {
		std::cout << "Miejsce zadania musi zawierac co najmniej 2 znaki\n";
		std::cin >> place;
	}
	return place;
}
std::string GetPeriod() {
	std::cout << "Podaj okres: \n";
	int period;
	std::cin >> period;

	while ((period < 0) || (period > 300)) {
		std::cout << "Okres czasu zawiera tylko liczby i jest w przedziale od 1 do 300\n";
		std::cin >> period;
	}
	std::string periodToString = std::to_string(period);
	return periodToString;
}