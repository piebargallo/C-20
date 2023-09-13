#include <string> // std::string
#include <vector> // std::vector
#include <ranges> // std::range
#include <iostream>
#include <algorithm> // sort()

class Person
{
public:
	Person(std::string first, std::string last)
		: m_firstName{ move(first) }, m_lastName{ move(last) } { }

	const std::string& getFirstName() const { return m_firstName; }
	const std::string& getLastName() const { return m_lastName; }

private:
	std::string m_firstName;
	std::string m_lastName;
};

int main()
{
	std::vector persons{ Person{"John", "White"}, Person{"Chris", "Blue"} };

	std::ranges::sort(persons, {}, &Person::getFirstName);

	for (const auto& person : persons)  
		std::cout << person.getFirstName() << std::endl; 
	
	return 0;
}
