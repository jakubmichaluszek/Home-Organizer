#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include "HomeQuest.h"
namespace project {

	class HomeQuestFileSource {
	protected:
		std::vector<project::HomeQuest>homeQuests;
		std::string fileName;

		void HomeQuestSaveData() {
			std::ofstream stream(fileName);
			for (const auto& quest : homeQuests) {
				stream << quest.QuestInformation() << ";" << quest.Day() << ";" << quest.Month() << ";" << quest.Year() << ";" << quest.Done() << ";" << quest.Place() << std::endl;
			}
			stream.close();
		}
	public:
		HomeQuestFileSource(const std::string& fileName);
		void addHomeQuest(const project::HomeQuest& homeQuest);
		void ShowHomeQuests();
		void DeleteHomeQuestByID(int id);
		void GetHomeQuestsByDate(int day, int month, int year);
		void GetHomeQuestsByStatus(std::string status);
		
	};
}
