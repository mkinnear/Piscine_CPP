/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 15:10:53 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/08 17:48:58 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib>
#include <iostream>

int		main() {

	std::cout << "---> Create 2 robots (default and copy):" << std::endl;
	FragTrap	robot1("Hilton");
	FragTrap	robot2(robot1);

	srand(time(NULL));
	robot2.setName("Keegan");

	std::cout << std::endl << "---> Fight with basic stuiwe rights:" << std::endl;
	robot1.RangedAttack("Keegan");
	robot2.Damage(20);
	robot1.MeleeAttack("Keegan");
	robot2.Damage(30);

	std::cout << std::endl << "---> slat one of the robots in his poes:" << std::endl;
	robot2.Damage(105);
	robot2.Damage(105);

	std::cout << std::endl << "---> chee the robot a sensu bean:" << std::endl;
	robot2.Health(100);
	robot2.Health(100);

	std::cout << std::endl << "---> Use random special streetfighting attacks:" << std::endl;
	robot2.vaulthunter_dot_exe("Hilton");
	robot2.vaulthunter_dot_exe("Hilton");
	robot2.vaulthunter_dot_exe("Hilton");
	robot2.vaulthunter_dot_exe("Hilton");
	robot2.vaulthunter_dot_exe("Hilton");
	robot1.Damage(1);

	std::cout << std::endl << "---> End of treatment." << std::endl;
	return 0;
}
