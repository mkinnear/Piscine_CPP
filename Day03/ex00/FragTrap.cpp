/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 15:09:46 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/08 17:31:19 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include <iostream>
#include <cstdlib>

FragTrap::FragTrap(void): _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100), _Level(1), _MeleeAttackDamage(30), _RangedAttackDamage(20), _ArmorDamageReduction(5)
{

	std::cout << "OH Shit Here comes Keegan! Somebody's about to get fucked UP!" << std::endl;
	setName("default");
	return;
}

FragTrap::FragTrap(std::string const name): _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100), _Level(1), _MeleeAttackDamage(30), _RangedAttackDamage(20), _ArmorDamageReduction(5)
{

	std::cout << "Awe, chise, laat ek jou wys hoe maak ek jou in jou poes in!" << std::endl;
	setName(name);
	return;
}

FragTrap::FragTrap(FragTrap const & src) {

	std::cout << "Hey Ouens! chise, steek uit!" << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap() {

	std::cout << "I JUST GOT KNOCKED THE FUCK OUT!" << std::endl;
	return;
}

void	FragTrap::setName(std::string const name) {

	this->_Name = name;
	return;
}

std::string		FragTrap::getName(void) const {

	return (this->_Name);
}

FragTrap &  FragTrap::operator=(FragTrap const & src) {

	std::cout << "Watching kung fu movies to Recompile Fighting Skills!" << std::endl;
	this->_Name = src.getName();
	this->_HitPoints = src._HitPoints;
	this->_MaxHitPoints = src._MaxHitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_MaxEnergyPoints = src._MaxEnergyPoints;
	this->_Level = src._Level;
	this->_MeleeAttackDamage = src._MeleeAttackDamage;
	this->_RangedAttackDamage = src._RangedAttackDamage;
	this->_ArmorDamageReduction = src._ArmorDamageReduction;
	return *this;
}

void	FragTrap::RangedAttack(std::string const & target) {

	std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range with a poes klap, causing " << this->_RangedAttackDamage << " points of damage !" << std::endl;
	return;
}

void	FragTrap::MeleeAttack(std::string const & target) {

	std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at melee and a drop kick, ca\
using " << this->_MeleeAttackDamage << " points of damage !" << std::endl;
	return;
}

void    FragTrap::Damage(unsigned int amount) {

	int		hit_points;

	if (this->_HitPoints == 0) {
		std::cout << "FR4G-TP " << this->getName() << " can't take any more damage hys klaar dik geskop!" << std::endl;
	} else if ((int)amount <= this->_ArmorDamageReduction) {
		std::cout << "FR4G-TP " << this->getName() << " didn't voel fokol!" << std::endl;
	} else {
		if ((hit_points = this->_HitPoints + this->_ArmorDamageReduction - amount) < 0)
			hit_points = 0;
		std::cout << "FR4G-TP " << this->getName() << " word aangepak " << amount << " damage, and has now " << hit_points << " hit points." << std::endl;
		this->_HitPoints = hit_points;
	}
	return;
}

void	FragTrap::Health(unsigned int amount) {

	int		hit_points;

	if (this->_HitPoints == this->_MaxHitPoints) {
		std::cout << "FR4G-TP "<< this->getName() << " is already full health from the sensu beans!" <<  std::endl;
	} else {
		if ((hit_points = this->_HitPoints + amount) > 100)
			hit_points = 100;
		std::cout << "FR4G-TP " << this->getName() << " reg vir die attack " << amount << " points, and has now " << hit_points << " hit points." << std::endl;
		this->_HitPoints = hit_points;
	}
	return;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target) {

	std::string		specialAttacks[] = {"Poes Klap", "uppercut Punches", "flya kicks", "panga", "ouens aan pak"};

	if (this->_EnergyPoints > 0) {
		this->_EnergyPoints -= 25;
		std::cout << "FR4G-TP " << this->_Name << " uses " << specialAttacks[(rand() % 5)] << " on " << target << " and has now " << this->_EnergyPoints << " energy points left !" << std::endl;
	} else {
		std::cout << "FR4G-TP " << this->_Name << " is fucked up !" << std::endl;
	}
}
