/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 15:10:53 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/08 18:14:11 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>
#include <iostream>

int		main() {

	std::cout << "/******************** FragTrap Class ********************\\" << std::endl << std::endl;
	std::cout << std::endl;
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


// the second class is about to be used here



	std::cout << std::endl << "/******************** ScavTrap Class ********************\\" << std::endl << std::endl << "---> Create 2 ScavTrap (default and copy):" << std::endl;
	ScavTrap	robot3("Geff");
	ScavTrap	robot4(robot3);

	srand(time(NULL));
	robot4.setName("Keegan");

	std::cout << std::endl << "---> Fight the boss:" << std::endl;
	robot3.RangedAttack("Keegan");
	robot4.Damage(15);
	robot3.MeleeAttack("Keegan");
	robot4.Damage(20);

	std::cout << std::endl << "---> Killled his ass:" << std::endl;
	robot4.Damage(103);
	robot4.Damage(103);

	std::cout << std::endl << "---> Healing potion:" << std::endl;
	robot4.Health(100);
	robot4.Health(100);

	std::cout << std::endl << "---> Special moves:" << std::endl;
	robot4.ChallengeNewcomer();
	robot4.ChallengeNewcomer();
	robot4.ChallengeNewcomer();

	std::cout << std::endl << "---> End of treatment." << std::endl;
	return 0;
}
