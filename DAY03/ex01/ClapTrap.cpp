#include "ClapTrap.hpp"
#include "source.hpp"

#include <iostream>
#include <string>

ClapTrap&	ClapTrap::operator=( const ClapTrap& rhs ) {
	std::cout << "C[COPY] Copy assignment operator called" << std::endl;
	this->_name = rhs.get_name();
	this->_hit_points = rhs.get_hit_points();
	this->_energy_points = rhs.get_energy_points();
	this->_attack_damages = rhs.get_attack_damages();
	return (*this);
}

ClapTrap::ClapTrap(void) {

	_name = "default";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damages = 0;
	std::cout << "C[CONSTRUCTOR DEFAULT] ClapTrap " << _name << " come to life.";
	display_points();
}

ClapTrap::ClapTrap( const ClapTrap& copy)
{
	*this = copy;
	std::cout << "C[CONSTRUCTOR COPY] ClapTrap " << _name << " come to life." << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name)
{
	_hit_points = 10;
	_energy_points = 10;
	_attack_damages = 0;

	std::cout << "C[CONSTRUCTOR NAME] ClapTrap " << name << " come to life.";
	display_points();
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "C[DESTRUCTOR] ClapTrap " << _name << " leave this world peacefully."; 
	display_points();
}

bool	ClapTrap::_incapacity(void) const {
	if (this->_hit_points == 0 || this->_energy_points == 0)
		return (1);
	return (0);
}

void	ClapTrap::_exhausted( std::string action ) const {

	std::cout << "C[EXHAUSTED] " << _name << " can't " << action
		<< " because he has no more ";

	if (_hit_points == 0 && _energy_points == 0)
		std::cout << "hit points and no more energy points";
	else if (_hit_points == 0)
		std::cout << "hit points";
	else if (_energy_points == 0)
		std::cout << "energy points";
	display_points();
}

void	ClapTrap::attack( const std::string& target ) {

	if (_incapacity())
		return (_exhausted("attack"));

	this->_energy_points--;

	std::cout << "C[ATTACK] ClapTrap " << this->_name << " attacks " << target 
	<< " , causing " << this->_attack_damages 
	<< " points of dammages!";
	this->display_points();
	return ;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (_incapacity())
		return (_exhausted("be repaired"));

	_energy_points--;
	_hit_points += amount;
	std::cout << "[REPAIRED] " << _name << " is being repaired, he gain " << amount << " hit points.";
	display_points();
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if (_hit_points <= 0) {
		std::cout << "[TAKE DAMAGES] " << _name << " is already dead and burried, he can't take more damages." ;
	}
	else {
		_hit_points -= amount;

		if (_hit_points < 0)
			_hit_points = 0;

		std::cout << "[TAKE DAMAGES] "<< _name << " is under attack, he take " << amount << " dammages.";
	}
	display_points();

	return ;
}

void	ClapTrap::add_points(const int points , const int points_type) {

	if (points_type == HIT)
		_hit_points += points;
	else if (points_type == ENERGY)
		_energy_points += points;
	else {
		std::cout << "Bad points type." << std::endl;
		return ;
	}

	std::cout << "C[ADD] " << _name << " gained " << points << " points of ";
	if (points_type == HIT)
		std::cout << "HP.";
	else if (points_type == ENERGY)
		std::cout << "energy.";
	display_points();
}

void	ClapTrap::display_points(void) const {
	std::cout << "  [energy = " << _energy_points << " HP = " << _hit_points  << "]"<< std::endl;
}

std::string	ClapTrap::get_name(void) const {
	return (_name);
}

int	ClapTrap::get_hit_points(void) const {
	return (_hit_points);
}

int	ClapTrap::get_energy_points(void) const {
	return (_energy_points);
}

int	ClapTrap::get_attack_damages(void) const {
	return (_attack_damages);
}
