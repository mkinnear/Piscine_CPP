/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printw.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 14:19:08 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/16 15:37:38 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <curses.h>

int     main(void)
{
    initscr();
    noecho();
    int ch;
    mvprintw(0,0,"Enter a Key (ESC to escape): ");

    while ((ch = getch()) != 27)
    {
        move(10, 0);
        printw("The key value is: %d The key code is: %c", ch, ch);
        //mvprintw(0,0,"Enter a Key (ESC to escape)");
        refresh();
    }
    
    endwin();
    return (0);
}