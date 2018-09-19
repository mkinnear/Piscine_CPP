/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 15:35:38 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/15 18:21:41 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>


int		main(){
	std::list<int>	lst;

	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	lst.push_back(5);

	int	n = 2;
	std::cout << "\n****Posetive testing****" << std::endl;
	
	try
	{
		if (easyfind(lst, n) == n)
			std::cout << "Success" << std::endl;
		else
			throw std::exception();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "value is invalid" << std::endl;
	}

	n = 7;
	std::cout << "\n****Negetive testing****" << std::endl;
	try
	{
		if (easyfind(lst, n) == n)
			std::cout << "Success" << std::endl;
		else
			throw std::exception();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "value is invalid" << std::endl;
	}
	
	return (0);

}
