#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

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
