/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 15:47:41 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/17 18:31:36 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

//#include "IMonitorDisplay.hpp"
#include <curses.h>
#include <iostream>
#include <stdlib.h>
#include <sstream>

class IMonitorModule//: public IMonitorDisplay
{
    public:
        IMonitorModule(void);
        IMonitorModule(int);
        IMonitorModule(IMonitorModule const & src);
        ~IMonitorModule(void);

        IMonitorModule& operator=(IMonitorModule const &rhs);

        //void    IMonitorModule2(void);
        std::string CpuData(void);
        void    frame(void);
        void    middle(void);
        void    top(void);
        void    print(void);
        void    IMonitor(void);
};

#endif