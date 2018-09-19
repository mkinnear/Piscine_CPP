/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 15:42:27 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/05 17:30:21 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>

int		main(int argc, char **argv)
{
	int		i;
	int		l;

	std::string			str;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			std::stringstream	ss;
			l = 0;
			ss << argv[i];
			str = ss.str();
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			if (i < argc - 1)
				std::cout << str << std::flush;
			else
				std::cout << str << std::endl;
			i++;
		}
	}
	return(0);
}
