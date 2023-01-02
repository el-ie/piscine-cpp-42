#include "FragTrap.hpp"
#include "source.hpp"

#include <iostream>
#include <string>

FragTrap&	FragTrap::operator=( const FragTrap& rhs ) {
	std::cout << "F[COPY] FragTrap Copy assignment operator called" << std::endl;
	this->_name = rhs.get_name();
	this->_hit_points = rhs.get_hit_points();
	this->_energy_points = rhs.get_energy_points();
	this->_attack_damages = rhs.get_attack_damages();
	return (*this);
}

FragTrap::FragTrap(void) : ClapTrap()
{
	_name = "default";
	_hit_points = 100;
	_energy_points = 100;
	_attack_damages = 30;
	std::cout << "F[CONSTRUCTOR DEFAULT] FragTrap " << _name << " come to life."; 
	display_points();
}

FragTrap::FragTrap( const FragTrap& copy) : ClapTrap()
{
	*this = copy;
	std::cout << "F[CONSTRUCTOR COPY] FragTrap " << _name << " come to life." << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damages = 30;
	std::cout << "F[CONSTRUCTOR NAME] FragTrap " << name << " come to life."; 
	display_points();
}

FragTrap::~FragTrap(void)
{
	std::cout << "F[DESTRUCTOR] FragTrap " <<  _name << " leave this world peacefully.";
	display_points();
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "F[HIGH FIVE] May you high fives with me pleas human ?" << std::endl;
}
