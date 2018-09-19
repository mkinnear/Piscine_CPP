/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 15:54:40 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/08 17:43:11 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>

class FragTrap {



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
    //constructors:
	FragTrap(void);
    FragTrap(std::string const name);
	FragTrap(FragTrap const & src);
    ~FragTrap(void);

    //assignation:
	FragTrap &	operator=(FragTrap const &);

    //membet funtions:
	void	RangedAttack(std::string const & target);
	void	MeleeAttack(std::string const & target);
	void	Damage(unsigned int amount);
	void	Health(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
	void	setName(std::string const name);
	std::string		getName(void) const;

};

#endif