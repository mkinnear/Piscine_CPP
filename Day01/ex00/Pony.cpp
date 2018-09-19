/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:08:59 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/06 18:09:06 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string color, std::string sound): _color(color), _sound(sound)
{
    std::cout << "the " << this->_color << " Pony that " << this->_sound << " is bought" << std::endl;
    return ;
}

Pony::~Pony(void)
{
    std::cout << "And the " << this->_color << " Pony that " << this->_sound << " is sold" << std::endl;
    return ;
}