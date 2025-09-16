#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <iomanip>
/*So now we create ScavTrap class which inherits charasteristics from ClapTrap (so in one way this is connected to the base Class)
And we don't need the data members because those are always copied by default but constructors we need?
And if the functions will behave differently depending on the class
//Do we need to mark something as virtual?*/
class ScavTrap : public ClapTrap {
private:
	bool isGuarding;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& copy);
	ScavTrap &operator=(const ScavTrap &src); 
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};
#endif
