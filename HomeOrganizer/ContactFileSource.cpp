#include "ContactFileSource.h"


project::ContactFileSource::ContactFileSource(const std::string &fileName) : fileName(fileName) {
	std::ifstream stream(fileName);
	std::string line;
	while (getline(stream, line)) {
		std::stringstream stringLine(line);
		std::string firstName;
		std::string lastName;
		std::string category;
		std::string telNumber;
		getline(stringLine, firstName, ';');
		getline(stringLine, lastName, ';');
		getline(stringLine, category, ';');
		getline(stringLine, telNumber, ';');
		contacts.push_back(project::Contact(firstName, lastName, category, telNumber));
	}
	stream.close();
}

void project::ContactFileSource::AddContact(const project::Contact& contact) {
	contacts.push_back(contact);
	saveData();
}

void project::ContactFileSource::ShowContacts() {
	int i = 0;
	for (auto contact : contacts) {
		std::cout << "ID: " << i << "   " << contact.FirstName() << ", " << contact.LastName() << ", " << contact.Category() << ", " << contact.TelNumber() << std::endl;
		i++;
	}
}

void project::ContactFileSource::DeleteContactByID(int id) {
	if (id >= contacts.size()) {
		std::cout << "Brak takiego id" << std::endl;
	}
	else {
		auto x = find(contacts.begin(), contacts.end(), contacts[id]);
		if (x != contacts.end()) {
			contacts.erase(x);
			saveData();
		}
	}
}

void project::ContactFileSource::getContactByTelNumber(std::string telNumber) {
	auto x = find_if(contacts.begin(), contacts.end(), [&telNumber](const project::Contact& object) {return object.TelNumber() == telNumber; });
	if (x != contacts.end()) {
		std::cout << x->FirstName() << ", " << x->LastName() << ", " << x->Category() << std::endl;
	}
	else {
		std::cout << "Brak takiego numeru telefonu" << std::endl;
	}
}

void project::ContactFileSource::getContactsByCategory(std::string cat) {
	int control = 0;
	for (auto contact : contacts) {
		if (contact.Category() == cat) {
			std::cout << contact.FirstName() << ", " << contact.LastName() << ", " << contact.TelNumber() << std::endl;
			control++;
		}
	}
	if (control == 0)std::cout << "Brak takiej kategorii" << std::endl;
}