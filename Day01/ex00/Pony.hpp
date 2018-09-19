/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:07:32 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/06 18:07:36 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     PONY_HPP
# define    PONY_HPP

# include   <iostream>
# include   <string>

class       Pony
{
    private:
        std::string _color;
        std::string _sound;
    
    public:
        Pony(std::string color, std::string sound);
        ~Pony(void);
};

#endif