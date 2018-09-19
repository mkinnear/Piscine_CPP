/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 18:13:51 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/17 18:26:26 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY_HPP
# define IMONITORDISPLAY_HPP

#include <curses.h>
#include <iostream>
#include <stdlib.h>
#include <sstream>

class IMonitorDisplay
{
    public:

    IMonitorDisplay(void);
    IMonitorDisplay(IMonitorDisplay const & src);
    ~IMonitorDisplay(void);

    IMonitorDisplay& operator=(IMonitorDisplay const &rhs);

    void    time(void);
    std::string CpuData(void);
};

#endif