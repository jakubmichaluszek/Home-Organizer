#include "WorkQuestFileSource.h"
#pragma once


project::WorkQuestFileSource::WorkQuestFileSource(const std::string& fileName) : fileName(fileName) {
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
		std::string period;
		getline(stringLine, questInformation,';');
		getline(stringLine, day, ';');
		getline(stringLine, month, ';');
		getline(stringLine, year, ';');
		getline(stringLine, done, ';');
		getline(stringLine, place, ';');
		getline(stringLine, period,';');
		
		workQuests.push_back(project::workQuest(questInformation, day, month, year,done,place,period));
	}
	stream.close();
}

void project::WorkQuestFileSource::addWorkQuest(const project::workQuest& workQuest) {
	workQuests.push_back(workQuest);
	workQuestSaveData();
}

void project::WorkQuestFileSource::ShowWorkQuests() {
	int i = 0;
	for (auto quest : workQuests) {
		std::cout << "ID: " << i << "   " << quest.QuestInformation() << "  [" << quest.Day() << " | " << quest.Month() << " | " << quest.Year() << " ]"
			<< quest.Place() << " " << "  " << quest.Done() << " " << quest.Period()<<  " "<<std::endl;
		i++;
	}
}

void project::WorkQuestFileSource::DeleteWorkQuestByID(int id) {
	if (id >= workQuests.size()) {
		std::cout << "Brak takiego id" << std::endl;
	}
	else {
		auto x = find(workQuests.begin(), workQuests.end(), workQuests[id]);
		if (x != workQuests.end()) {
			workQuests.erase(x);
			workQuestSaveData();
		}
	}
}

/*
void project::WorkQuestFileSource::GetWorkQuestsByDate(std::string day, std::string month, std::string year) {
	int control = 0;
	for (auto quest : workQuests) {
		int questDayInt= std::stoi(quest.Day());
		int questMonthInt = std::stoi(quest.Month());
		int questYearInt = std::stoi(quest.Year());
		if ( (quest.Day() ==day) && (quest.Month() ==month) && (quest.Year() == year))  {
			std::cout << quest.QuestInformation() << ", " << quest.Place() << ", " << quest.Done() << std::endl;
			control++;
		}
	}
	if (control == 0)std::cout << "Brak zadania w danym terminie" << std::endl;
}
*/

void project::WorkQuestFileSource::GetWorkQuestsByDate(int day, int month, int  year) {
	int control = 0;
	for (auto quest : workQuests) {
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
void project::WorkQuestFileSource::GetWorkQuestsByStatus(std::string status) {
	for (auto quest : workQuests) {
		if (quest.Done() == status) {
			std::cout << quest.QuestInformation() << "  [" << quest.Day() << " | " << quest.Month() << " | " << quest.Year() << " ]"
				<< quest.Place() << " " <<quest.Period()<< std::endl;
		}
	}

}