/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <ssibiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 14:34:23 by ssibiya           #+#    #+#             */
/*   Updated: 2018/06/10 17:15:03 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/player.hpp"
#include "../includes/enemy.hpp"

enemy::enemy()
{
    this->_x = COLS - 5;
    this->_y = getRandomY();
    this->_enemy = 'Z';
    mvaddch(this->get_x(), COLS, 'Z');
}

enemy::~enemy()
{
    mvaddch(this->get_y(), this->get_x(), 'Z');
}

int enemy::getRandomY()
{
    int top_bound;
    int bottom_bound;
    int x_loc;

    top_bound = LINES / 10;
    bottom_bound = LINES - (LINES / 10);
    x_loc = rand() % 70 + (LINES / 10);
    return (x_loc);
}

void    enemy::update()
{
    this->_x -= 1;
    mvaddch(this->_y, this->_x, _enemy);
    mvaddch(this->_y, this->_x + 1, ' ');
}

int enemy::getX() const
{
    return this->_x;
}