#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include "Contact.h"
#pragma once
namespace project {

	class ContactFileSource {
	protected:
		std::vector<project::Contact> contacts;
		std::string fileName;

		void saveData() {
			std::ofstream stream(fileName);
			for (const auto& contact : contacts) {
				stream << contact.FirstName() << ";" << contact.LastName() << ";" << contact.Category() << ";" << contact.TelNumber() << std::endl;
			}
			stream.close();
		}
	public:

		ContactFileSource(const std::string& fileName);
		void AddContact(const project::Contact& contact);
		void ShowContacts();
		void DeleteContactByID(int id);
		void getContactByTelNumber(std::string telNumber);
		void getContactsByCategory(std::string cat);

	};
}