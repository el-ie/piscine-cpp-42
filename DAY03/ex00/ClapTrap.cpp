#include "ClapTrap.hpp"

#include <iostream>
#include <string>

ClapTrap::ClapTrap(void) // faut il garder ce constructeur pour la forme canonique et donner un nom aleatoire comme ca ?
{
	std::cout << "A ClapTrap come to life." << std::endl;
	this->_name = "ClapTraper";
}

ClapTrap::ClapTrap( std::string name ) : _name(name)
{
	_hit_points = 10;
	_energy_points = 10;
	_attack_damages = 0;

	std::cout << name << " come to life." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " leave this world peacefully." << std::endl;
}

bool	ClapTrap::_incapacity(void) const {
	if (this->_hit_points == 0 || this->_energy_points == 0)
		return (1);
	return (0);
}

void	ClapTrap::_exhausted( std::string action ) const {

	if (this->_hit_points == 0 && this->_energy_points == 0)
		std::cout << this->_name << " can't " << action << " beacause he has no more hit points and no more energy points" << std::endl;
	else if (this->_hit_points == 0)
		std::cout << this->_name << " can't " << action << " beacause he has no more hit points" << std::endl;
	else if (this->_energy_points == 0)
		std::cout << this->_name << " can't " << action << " beacause he has no more energy points" << std::endl;
}

void	ClapTrap::attack( const std::string& target ) {

	if (_incapacity())
		return (_exhausted("attack"));

	this->_energy_points--;

	std::cout << "ClapTrap " << this->_name << " attacks " << target 
	<< " , causing " << this->_attack_damages 
	<< " points of dammages!" << std::endl;
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (_incapacity())
		return (_exhausted("be repaired"));

	this->_energy_points--;
	this->_hit_points += amount;
	std::cout << this->_name << " is being repaired, he gain " << amount << " hit points." << std::endl;
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if (_hit_points <= 0) {
		std::cout << this->_name << " is already dead and burried, he can't take more damages." << std::endl;
		return ;
	}

	this->_hit_points -= amount;

	if (_hit_points < 0)
		_hit_points = 0;

	std::cout << this->_name << " is under attack, he take " << amount << " dammages." << std::endl;

	return ;
}
