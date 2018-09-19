/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bullet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <ssibiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 17:12:56 by ssibiya           #+#    #+#             */
/*   Updated: 2018/06/10 17:15:09 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include "../includes/player.hpp"
#include "../includes/bullet.hpp"
#include <unistd.h>

bullet::bullet()
{
    this->_pos_x = 0;
    this->_pos_y = 0;
    this->_bullet = '*';
}

bullet::bullet(int x, int y, char bullet)
{
    this->_pos_x = x;
    this->_pos_y = y;
    this->_bullet = bullet;
    mvaddch(y, x, _bullet);
}

bullet::~bullet()
{
    
}

bullet &bullet::operator=( bullet const &blt)
{
    this->_bullet = blt.getBullet();
    this->_pos_x = blt.getPos_x();
    this->_pos_y = blt.getPos_y();
    return (*this);
}

void    bullet::update()
{
    this->_pos_x += 1;
    mvaddch(this->_pos_y, this->_pos_x, _bullet);
    mvaddch(this->_pos_y, this->_pos_x - 1, ' ');
}

unsigned int bullet::getPos_x() const
{
    return (this->_pos_x);
}

unsigned int bullet::getPos_y() const
{
    return (this->_pos_y);
}

char bullet::getBullet() const
{
    return (this->_bullet);
}