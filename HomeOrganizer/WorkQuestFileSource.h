#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include "WorkQuest.h"
namespace project {

	class WorkQuestFileSource {
	protected:
		std::vector<project::workQuest>workQuests;
		std::string fileName;

		//this function saves our data to file.
		void workQuestSaveData() {
				std::ofstream stream(fileName);
				for (const auto& quest : workQuests) {
					stream << quest.QuestInformation() << ";" << quest.Day() << ";" << quest.Month() << ";" << quest.Year() <<";"<< quest.Done() <<";"<<quest.Place()<<";"<<quest.Period()<< std::endl;
				}
				stream.close();
		}
	public:
		//This function reads all quest from file
		WorkQuestFileSource(const std::string& fileName);

		//This function adds a new work quest.
		void addWorkQuest(const project::workQuest& workQuest);
		
		//This function shows our all work quests
		void ShowWorkQuests();

		//By this function we can get a workQuest by unique ID, and delete it 
		void DeleteWorkQuestByID(int id);

		//void GetWorkQuestsByDate(std::string day, std::string month, std::string year);
		
		//By this function we can get a work quest by date, and show it on the screen
		void GetWorkQuestsByDate(int day, int  month, int year);

		//By this function we can get all work quests that are done, or aren't done
		void GetWorkQuestsByStatus(std::string status);
	};
}