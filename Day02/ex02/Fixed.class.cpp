/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:41:51 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/07 18:34:51 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.class.hpp"

int	const	Fixed::fraBits = 8;

Fixed::Fixed( void ) : fixPoi(0){
    this->fixPoi = 0;
    // std::cout << "Default constructor called" << std::endl;
    return;
}

// Fixed::Fixed( int const n) : fixPoi(n){
//     return;
// }

Fixed::Fixed( Fixed const & src ){
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::Fixed(int i)
{
	this->fixPoi = i << this->fraBits;
	// std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(float y)
{
	this->fixPoi = (int)roundf(y * (1 << this->fraBits));
	// std::cout << "Float Constructor called" << std::endl;
}

Fixed::~Fixed( void ){
    // std::cout << "Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits( void )const{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->fixPoi;
}

void			Fixed::setRawBits(int const raw)
{
	this->fixPoi = raw;
}

Fixed &     Fixed::operator=( Fixed const & rhs ){
    // std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
		this->fixPoi = rhs.fixPoi;
	return *this;
    // this->fixPoi = rhs.getRawBits();
	// return *this;
}

Fixed    &Fixed::operator+( Fixed const & rhs )const{
    //return Fixed( this->fixPoi + rhs.getRawBits() );
    Fixed		*sum = new Fixed();
    sum->fixPoi = this->fixPoi + rhs.fixPoi;
	return (*sum);
}

Fixed &   Fixed::operator-( Fixed const & rhs )const{
    // return Fixed( this->fixPoi - rhs.getRawBits() );
    Fixed		*diff = new Fixed();
    diff->fixPoi = this->fixPoi + rhs.fixPoi;
	return (*diff);
}

Fixed &   Fixed::operator*( Fixed const & rhs )const{
    // return Fixed( this->fixPoi * rhs.getRawBits() );
    return (*new Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed &   Fixed::operator/( Fixed const & rhs )const{
    // return Fixed( this->fixPoi / rhs.getRawBits() );
    return (*new Fixed(this->toFloat() / rhs.toFloat()));
}

bool    Fixed::operator>( Fixed const & rhs )const{
    if( this->fixPoi > rhs.fixPoi )
    {
        return true;
    }
    return false;
}

bool    Fixed::operator<( Fixed const & rhs )const{
    if(this->fixPoi < rhs.fixPoi )
    {
        return true;
    }
    return false;
}

bool    Fixed::operator>=( Fixed const & rhs )const{
    if( this->fixPoi >= rhs.fixPoi )
    {
        return true;
    }
    return false;
}

bool    Fixed::operator<=( Fixed const & rhs )const{
    if( this->fixPoi <= rhs.fixPoi )
    {
        return true;
    }
    return false;
}

bool    Fixed::operator==( Fixed const & rhs )const{
    if( this->fixPoi == rhs.fixPoi )
    {
        return true;
    }
    return false;
}

bool    Fixed::operator!=( Fixed const & rhs )const{
    if( this->fixPoi != rhs.fixPoi )
    {
        return true;
    }
    return false;
}

Fixed	&Fixed::operator++(void){
    this->fixPoi++;
    return( *this );
}

Fixed	Fixed::operator++(int){
    // return operator++();
    Fixed		*cpy = new Fixed(*this);
	operator++();
	return (*cpy);
}

Fixed	Fixed::operator--(void){
    return this->fixPoi--;
}

Fixed	Fixed::operator--(int){
    return operator--();
}

int		Fixed::toInt(void) const
{
	return (this->fixPoi >> this->fraBits);
}

float	Fixed::toFloat(void) const
{
	return (((float)this->fixPoi) / (1 << this->fraBits));
}

Fixed 			&Fixed::min(Fixed &n1, Fixed &n2)
{
	return ((n1.fixPoi < n2.fixPoi) ? n1 : n2);
}

Fixed 			&Fixed::max(Fixed &n1, Fixed &n2)
{
	return ((n1.fixPoi > n2.fixPoi) ? n1 : n2);
}

Fixed const		&Fixed::min(Fixed const &n1, Fixed const &n2)
{
	return ((n1.fixPoi < n2.fixPoi) ? n1 : n2);
}

Fixed const		&Fixed::max(Fixed const &n1, Fixed const &n2)
{
	return ((n1.fixPoi > n2.fixPoi) ? n1 : n2);
}

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs ){
    o << rhs.toFloat();
    return o;
}



 // <-- This line may be missing depending of your implementation

// Default constructor called
// Assignation operator called
// getRawBits member function called
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// getRawBits member function called
// Destructor called
// Destructor called
// Destructor called