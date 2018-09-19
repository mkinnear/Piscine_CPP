/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:56:55 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/08 18:21:40 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include <iostream>
#include <cstdlib>

ScavTrap::ScavTrap(void): _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(50), _MaxEnergyPoints(50), _Level(1), _MeleeAttackDamage(20), _RangedAttackDamage(15), _ArmorDamageReduction(3) {

	std::cout << "I LIVE!" << std::endl;
	setName("default");
	return;
}

ScavTrap::ScavTrap(std::string const name): _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(50), _MaxEnergyPoints(50), _Level(1), _MeleeAttackDamage(20), _RangedAttackDamage(15), _ArmorDamageReduction(3) {

	std::cout << "Lets start the bootcamp" << std::endl;
	setName(name);
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src) {

	std::cout << "What the fuck is this!" << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap() {

	std::cout << "I wont give up" << std::endl;
	return;
}

void	ScavTrap::setName(std::string const name) {

	this->_Name = name;
	return;
}

std::string		ScavTrap::getName(void) const {

	return (this->_Name);
}

ScavTrap &  ScavTrap::operator=(ScavTrap const & src) {

	std::cout << "Changing!" << std::endl;
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

void	ScavTrap::RangedAttack(std::string const & target) {

	std::cout << "SC4V-TP " << this->getName() << " attacks " << target << " at range swinging " << this->_RangedAttackDamage << " points of damage !" << std::endl;
	return;
}

void	ScavTrap::MeleeAttack(std::string const & target) {

	std::cout << "SC4V-TP " << this->getName() << " attacks " << target << " with a melee, swinging " << this->_MeleeAttackDamage << " points of damage !" << std::endl;
	return;
}

void    ScavTrap::Damage(unsigned int amount) {

	int		hit_points;

	if (this->_HitPoints == 0) {
		std::cout << "SC4V-TP " << this->getName() << " can't take any more damage !" << std::endl;
	} else if ((int)amount <= this->_ArmorDamageReduction) {
		std::cout << "SC4V-TP " << this->getName() << " didn't feel fokol !" << std::endl;
	} else {
		if ((hit_points = this->_HitPoints + this->_ArmorDamageReduction - amount) < 0)
			hit_points = 0;
		std::cout << "SC4V-TP " << this->getName() << " take " << amount << " with a beating" << hit_points << " hit points." << std::endl;
		this->_HitPoints = hit_points;
	}
	return;
}

void	ScavTrap::Health(unsigned int amount) {

	int		hit_points;

	if (this->_HitPoints == this->_MaxHitPoints) {
		std::cout << "SC4V-TP "<< this->getName() << " is woke up !" <<  std::endl;
	} else {
		if ((hit_points = this->_HitPoints + amount) > 100)
			hit_points = 100;
		std::cout << "SC4V-TP " << this->getName() << " is healed " << amount << " points, and has now " << hit_points << " hit points." << std::endl;
		this->_HitPoints = hit_points;
	}
	return;
}

void	ScavTrap::ChallengeNewcomer() {

	std::string		specialChallenge[] = {"nuts chop", "back drop", "fstab that bitch", "shoots that bitch", "say Fuck you"};

	if (this->_EnergyPoints > 0) {
		this->_EnergyPoints -= 25;
		std::cout << "SC4V-TP " << this->_Name << " tries to " << specialChallenge[(rand() % 5)] << " and gets knocked dizzy like a motherfucker " << this->_EnergyPoints << " energy points left !" << std::endl;
	} else {
		std::cout << "SC4V-TP " << this->_Name << " to beat !" << std::endl;
	}
}
