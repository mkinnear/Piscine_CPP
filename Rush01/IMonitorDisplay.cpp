/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 18:18:58 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/17 18:29:33 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorDisplay.hpp"
#include <stdlib.h>
#include <ctime.h>

IMonitorDisplay::IMonitorDisplay(void)
{

}

IMonitorDisplay::IMonitorDisplay(IMonitorDisplay const & src)
{

}

IMonitorDisplay::~IMonitorDisplay(void)
{

}

IMonitorDisplay& IMonitorDisplay::operator=(IMonitorDisplay const &rhs)
{
    *this=rhs;
    return (*this);
}

void    IMonitorDisplay::time(void)
{
   char key = ' ';
    WINDOW* top;

    top = newwin(5, COLS - 24, 11, 12);
    box(top, static_cast<int>(key), 0);
   
    time_t now = time(0);
    char* dt = ctime(&now);
    mvwprintw(top, 2, 3, "TIME & DATE: ");
    mvwprintw(top, 2,16, dt);

    
    wrefresh(top);
}