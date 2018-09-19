/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:41:51 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/07 18:36:18 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.class.hpp"

int	const	Fixed::fraBits = 8;

Fixed::Fixed( void ) : fixPoi(0){
    this->fixPoi = 0;
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed( Fixed const & src ){
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::Fixed(int i)
{
	this->fixPoi = i << this->fraBits;
	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(float y)
{
	this->fixPoi = (int)roundf(y * (1 << this->fraBits));
	std::cout << "Float Constructor called" << std::endl;
}

Fixed::~Fixed( void ){
    std::cout << "Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits( void )const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixPoi;
}

void			Fixed::setRawBits(int const raw)
{
	this->fixPoi = raw;
}

Fixed&      Fixed::operator=( Fixed const & rhs ){
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
		this->fixPoi = rhs.fixPoi;
	return *this;
}

int				Fixed::toInt(void) const
{
	return (this->fixPoi >> this->fraBits);
}

float			Fixed::toFloat(void) const
{
	return (((float)this->fixPoi) / (1 << this->fraBits));
}

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs ){
    o << rhs.toFloat();
    return o;
}