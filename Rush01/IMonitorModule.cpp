/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 15:51:51 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/17 18:31:23 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorModule.hpp"
#include <unistd.h>

#include <cstdlib>
#include <fstream>

IMonitorModule::IMonitorModule(void)
{

}

IMonitorModule::IMonitorModule(int KeyCode)
{

}

IMonitorModule::IMonitorModule(IMonitorModule const & src)
{

}

IMonitorModule::~IMonitorModule(void)
{

}

IMonitorModule&  IMonitorModule::operator=(IMonitorModule const &rhs)
{
 return *this;
}

std::string IMonitorModule::CpuData(void)
{
    //std::string     CpuInfo::getData(const std::string &src) {
   char buffer[256];
    FILE*    in;
    std::string ret;
    std::stringstream ss;
    
        in = popen("top -l 1 | head -n 10 | grep CPU", "r");
        while (fgets(buffer, sizeof(buffer), in) != NULL)
              ss << buffer;
          pclose(in);
        return ss.str();
    
    /*else
        return (" : No CPU information found. ");*/
}

#include <stdlib.h>

void    IMonitorModule::frame(void)
{
      char key = '*';
         int x, y;
         WINDOW* win;
         getmaxyx(stdscr, y, x);
         win = newwin(y - y/3, COLS - 20, 10, 10);
         box(win, 0, static_cast<int>(key));
        
    //     std::string d = this->CpuData();
    //     mvwprintw(win, 12, 17, d.c_str());
       
         wrefresh(win);

}

void    IMonitorModule::middle(void)
{
    char key = ' ';
    WINDOW* middle;

    middle = newwin(40, COLS - 24, 16, 12);
    box(middle, static_cast<int>(key), 0);
   
   
     std::string d = this->CpuData();
      mvwprintw(middle, 15, 17, d.c_str());
    //mvwprintw(middle, 2, 3, this->CpuDaya());
   
    
    wrefresh(middle);
}

void    IMonitorModule::top(void)
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
    //IMonitorDisplay::time();

}



void    IMonitorModule::print(void)
{
    int     esc;
    while (1){
        this->frame();
 
        this->top(); 

        this->middle();

        refresh();

        usleep(30000);

        if ((esc = getch()) == 27)
            break ;
    }
}
   
    

void    IMonitorModule::IMonitor(void)
{
    initscr();
    noecho();
    curs_set(0);
    nodelay(stdscr, TRUE);
    this->print();
 
    endwin();
}