/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <ssibiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 14:36:05 by ssibiya           #+#    #+#             */
/*   Updated: 2018/06/10 17:59:52 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <ncurses.h>
#include <iostream>
#include "player.hpp"

class enemy: player
{
    private:
        int         _x;
        int         _y;
        int         _enemy;

    public:
        enemy();
        ~enemy();

        int         getRandomY();
        int         getY() const;
        int         getX() const;
        void        update();

};

#endif
