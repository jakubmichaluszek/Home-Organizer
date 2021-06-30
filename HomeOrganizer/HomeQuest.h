#include "Quest.h"
#pragma once
namespace project {

class HomeQuest : public Quest {

		std::string questInformation;
		std::string  day;
		std::string  month;
		std::string year;
		std::string done;
		std::string place;
	public:
		HomeQuest(const std::string& info, const std::string& d, const std::string& m, const std::string& y, const std::string& status, const std::string& place) :
			questInformation(info),
			day(d),
			month(m),
			year(y),
			done(status),
			place(place) {
		}
		~HomeQuest() {
			questInformation = "";
			day = "";
			month = "";
			year = "";
			done = "";
			place = "";
		}
		virtual std::string Category() const noexcept { return "Dom"; };

		void QuestInformation(const std::string& questInformation) noexcept {
			this->questInformation = questInformation;
		}

		virtual std::string ToString() const noexcept {
			return questInformation + " " + day + " " + month + " " + year + " " + place + " ";
		}

		virtual std::string QuestInformation() const noexcept {
			return questInformation;
		}

		void Day(const std::string& day) noexcept {
			this->day = day;
		}
		std::string Day() const noexcept {
			return day;
		}
		void Month(const std::string& month) noexcept {
			this->month = month;
		}
		std::string Month() const noexcept {
			return month;
		}
		void Year(const std::string& year) noexcept {
			this->year = year;
		}
		std::string Year() const noexcept {
			return year;
		}

		void Done(const std::string& done) noexcept {
			this->done = done;
		}
		std::string Done() const noexcept {
			return done;
		}

		void Place(const std::string& place) noexcept {
			this->place = place;
		}
		std::string Place() const noexcept {
			return place;
		}


		bool operator ==(const HomeQuest& homeQuest) const noexcept {
			return questInformation == homeQuest.questInformation && day == homeQuest.day && month == homeQuest.month && year == homeQuest.year;
		}
	};
}

