/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 11:53:01 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/07 16:45:42 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int   Fixed::_bits = 8;

Fixed::Fixed(): integers(0)
{
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(Fixed const &n)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = n;
}

Fixed::~Fixed()
{
    std::cout << "The Destructor Is Being Called" << std::endl;
}

Fixed   &Fixed::operator=(Fixed const &n)
{
    this->integers = n.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits numbr Function Called" << std::endl;
    return (this->integers);
}

void    Fixed::setRawBits(int const Raw)
{
    std::cout << "setRawBits numbr Function Called" << std::endl;
    this->integers = Raw;
}