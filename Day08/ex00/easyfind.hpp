/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 15:27:58 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/15 18:22:10 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

int	easyfind(T const &container, int num)
{
	typename T ::const_iterator itBeg = container.begin();
	typename T ::const_iterator itEnd = container.end();

	for (;itBeg != container.end(); itBeg++){
		if (*itBeg == num){
			std::cout << "Number found: " << *itBeg << std::endl;
			return (*itBeg);
		}
	}
	return (*itEnd);
}
