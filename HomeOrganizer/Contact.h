#pragma once
#include <string>

namespace project {

	class Contact {
		std::string firstName;
		std::string lastName;
		std::string category;
		std::string telNumber;
		
	public:
		Contact(const std::string& firstName, const std::string& lastName, const std::string& category, const std::string& telNumber) :
			firstName(firstName),
			lastName(lastName),
			category(category),
			telNumber(telNumber) {
		}
		~Contact() {
			firstName = "";
			lastName = "";
			category = "";
			telNumber = "";
		}

		void FirstName(const std::string& firstName) noexcept {
			this->firstName = firstName;
		}
		std::string FirstName() const noexcept {
			return firstName;
		}

		void LastName(const std::string& lastName) noexcept {
			this->lastName = lastName;
		}
		std::string LastName() const noexcept {
			return lastName;
		}

		void Category(const std::string& category) noexcept {
			this->category = category;
		}
		std::string Category() const noexcept {
			return category;
		}

		void TelNumber(const std::string& telNumber) noexcept {
			this->telNumber = telNumber;
		}
		std::string TelNumber() const noexcept {
			return telNumber;
		}

		std::string ToString() const noexcept {
			return firstName + " " + lastName + " " + telNumber;
		}

		bool operator ==(const Contact& contact) const noexcept {
			return firstName == contact.firstName && lastName == contact.lastName && telNumber == contact.telNumber;
 		}
	};
}