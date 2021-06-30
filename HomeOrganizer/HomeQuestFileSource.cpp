#include "HomeQuestFileSource.h"

project::HomeQuestFileSource::HomeQuestFileSource(const std::string& fileName) : fileName(fileName) {
	std::ifstream stream(fileName);
	std::string line;
	while (getline(stream, line)) {
		std::stringstream stringLine(line);

		std::string questInformation;
		std::string day;
		std::string month;
		std::string year;
		std::string done;
		std::string place;
		getline(stringLine, questInformation, ';');
		getline(stringLine, day, ';');
		getline(stringLine, month, ';');
		getline(stringLine, year, ';');
		getline(stringLine, done, ';');
		getline(stringLine, place, ';');


		homeQuests.push_back(project::HomeQuest(questInformation, day, month, year, done, place));
	}
	stream.close();
}

void project::HomeQuestFileSource::addHomeQuest(const project::HomeQuest& homeQuest) {
	homeQuests.push_back(homeQuest);
	HomeQuestSaveData();
}

void project::HomeQuestFileSource::ShowHomeQuests() {
	int i = 0;
	for (auto quest : homeQuests) {
		std::cout << "ID: " << i << "   " << quest.QuestInformation() << "  [" << quest.Day() << " | " << quest.Month() << " | " << quest.Year() << " ]"
			<< quest.Place() << " " << "  " << quest.Done() << " " << std::endl;
		i++;
	}
}

void project::HomeQuestFileSource::DeleteHomeQuestByID(int id) {
	if (id >= homeQuests.size()) {
		std::cout << "Brak takiego id" << std::endl;
	}
	else {
		auto x = find(homeQuests.begin(), homeQuests.end(), homeQuests[id]);
		if (x != homeQuests.end()) {
			homeQuests.erase(x);
			HomeQuestSaveData();
		}
	}
}
/*
void project::HomeQuestFileSource::GetHomeQuestsByDate(std::string day, std::string month, std::string year) {
	int control = 0;
	for (auto quest : homeQuests) {
		if ((quest.Day() == (day) && (quest.Month() == month) && (quest.Year() == year))) {
			std::cout << quest.QuestInformation() << ", " << quest.Place() << ", " << quest.Done() << std::endl;
			control++;
		}
	}
	if (control == 0)std::cout << "Brak zadania w danym terminie" << std::endl;
}
*/
void project::HomeQuestFileSource::GetHomeQuestsByDate(int day, int month, int  year) {
	int control = 0;
	for (auto quest : homeQuests) {
		int questDayInt = std::stoi(quest.Day());
		int questMonthInt = std::stoi(quest.Month());
		int questYearInt = std::stoi(quest.Year());
		if ((questDayInt == day) && (questMonthInt == month) && (questYearInt == year)) {
			std::cout << quest.QuestInformation() << ", " << quest.Place() << ", " << quest.Done() << std::endl;
			control++;
		}
	}
	if (control == 0)std::cout << "Brak zadania w danym terminie" << std::endl;
}

void project::HomeQuestFileSource::GetHomeQuestsByStatus(std::string status) {
	for (auto quest : homeQuests) {
		if (quest.Done() == status) {
			std::cout << quest.QuestInformation() << "  [" << quest.Day() << " | " << quest.Month() << " | " << quest.Year() << " ]"
				<< quest.Place() << " " << std::endl;
		}
	}

}
