#include "ScavTrap.hpp"
#include "source.hpp"

#include <iostream>
#include <string>

ScavTrap&	ScavTrap::operator=( const ScavTrap& rhs ) {
	std::cout << "S[COPY] ScavTrap Copy assignment operator called" << std::endl;
	this->_name = rhs.get_name();
	this->_hit_points = rhs.get_hit_points();
	this->_energy_points = rhs.get_energy_points();
	this->_attack_damages = rhs.get_attack_damages();
	return (*this);
}

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_name = "default";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damages = 20;
	std::cout << "S[CONSTRUCTOR DEFAULT] ScavTrap " << _name << " come to life."; 
	display_points();
}

ScavTrap::ScavTrap( const ScavTrap& copy) : ClapTrap()
{
	*this = copy;
	std::cout << "S[CONSTRUCTOR COPY] ScavTrap " << _name << " come to life." << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damages = 20;
	std::cout << "S[CONSTRUCTOR NAME] ScavTrap " << name << " come to life."; 
	display_points();
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "S[DESTRUCTOR] ScavTrap " <<  _name << " leave this world peacefully.";
	display_points();
}

void	ScavTrap::guardGate(void) const {

	if (_incapacity())
		return (_exhausted("guard gates"));

	std::cout << "S[GATE KEEPER] ScavTrap " << _name << " is now in gate keeper mod" << std::endl;
}

void	ScavTrap::attack( const std::string& target ) {

	if (_incapacity())
		return (_exhausted("attack"));

	this->_energy_points--;

	std::cout << "S[ATTACK] ScavTrap " << this->_name << " attacks " << target
	<< " , causing " << this->_attack_damages
	<< " points of dammages!";
	this->display_points();
	return ;
}
