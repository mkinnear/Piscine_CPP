/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 11:52:55 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/07 16:30:56 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class   Fixed
{
    private:
        int integers;
        static const int    _bits;

    public:
        Fixed();
        Fixed(Fixed const &n);
        ~Fixed();

        Fixed &operator=(Fixed const &n);
        int   getRawBits(void) const;
        void  setRawBits(int const Raw);
};

#endif