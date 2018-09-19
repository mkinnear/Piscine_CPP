/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:57:07 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/08 18:06:02 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>

class ScavTrap {
private:

	int		_HitPoints;
	int		_MaxHitPoints;
	int		_EnergyPoints;
	int		_MaxEnergyPoints;
	int		_Level;
	int		_MeleeAttackDamage;
	int		_RangedAttackDamage;
	int		_ArmorDamageReduction;
	std::string	_Name;

public:

	ScavTrap(void);
    ScavTrap(std::string const name);
	ScavTrap(ScavTrap const & src);
    ~ScavTrap(void);

	ScavTrap &	operator=(ScavTrap const &);
	void	RangedAttack(std::string const & target);
	void	MeleeAttack(std::string const & target);
	void	Damage(unsigned int amount);
	void	Health(unsigned int amount);
	void	ChallengeNewcomer();
	void	setName(std::string const name);
	std::string		getName(void) const;


};

#endif
