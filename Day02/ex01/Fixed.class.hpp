/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:41:30 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/07 18:35:22 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int fixPoi;
        static int const fraBits;
    
    public:
        Fixed( void );
        Fixed( Fixed const & src );
        Fixed( int i );
        Fixed( float y);
        Fixed &  operator=( Fixed const & rhs );
        ~Fixed( void );

        int getRawBits( void )const;
        void setRawBits( int const raw );
        float toFloat( void ) const; 
        int toInt( void ) const;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & rhs );

#endif