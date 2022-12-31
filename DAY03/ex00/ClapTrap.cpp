#include "ClapTrap.hpp"
#include "source.hpp"

#include <iostream>
#include <string>

ClapTrap::ClapTrap(void) // faut il garder ce constructeur pour la forme canonique et donner un nom aleatoire comme ca ?
{
	std::cout << "[CONSTRUCTOR] A ClapTrap come to life." << std::endl;
	this->_name = "ClapTraper";
}

ClapTrap::ClapTrap( std::string name ) : _name(name)
{
	_hit_points = 10;
	_energy_points = 10;
	_attack_damages = 0;

	std::cout << "[CONSTRUCTOR] " << name << " come to life." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[DESTRUCTOR] " << _name << " leave this world peacefully." << std::endl;
}

bool	ClapTrap::_incapacity(void) const {
	if (this->_hit_points == 0 || this->_energy_points == 0)
		return (1);
	return (0);
}

void	ClapTrap::_exhausted( std::string action ) const {

	std::cout << "[EXHAUSTED] " << _name << " can't " << action
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

	std::cout << "[ATTACK] ClapTrap " << this->_name << " attacks " << target 
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

	std::cout << "[ADD] " << _name << " gained " << points << " points of ";
	if (points_type == HIT)
		std::cout << "HP.";
	else if (points_type == ENERGY)
		std::cout << "energy.";
	display_points();
}

void	ClapTrap::display_points(void) const {
	std::cout << "  [energy = " << _energy_points << " HP = " << _hit_points  << "]"<< std::endl;
}
