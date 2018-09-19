/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <ssibiya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 17:08:11 by ssibiya           #+#    #+#             */
/*   Updated: 2018/06/10 18:00:00 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_HPP
# define BULLET_HPP

#include <ncurses.h>

class bullet
{
    private:
        unsigned int        _pos_x;
        unsigned int        _pos_y;
        char                _bullet;
    
    public:
        bullet();
        bullet(int x, int y, char bullet);
        ~bullet();

        bullet              &operator=( bullet const &blt );
        bullet              &operator!=( bullet const &blt );
        void                update();
        char                getBullet() const;
        unsigned int        getPos_x() const;
        unsigned int        getPos_y() const;
};

#endif
