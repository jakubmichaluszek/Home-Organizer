#include <string>
#pragma once
namespace project {

class Quest {
private:
public:
	virtual std::string Category() const noexcept { return " "; };
	//virtual void show() = 0;
	virtual std::string questInformation() const noexcept { return " ";};
	virtual std::string ToString() const noexcept { return " "; };
	
};
}