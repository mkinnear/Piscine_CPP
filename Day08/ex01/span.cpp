/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 13:47:10 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/15 18:21:52 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void)
{
    return ;
}

Span::Span(unsigned int n)
{
    std::vector<int>_lst(n);
    _n = n;
    _count = 1;
}

Span::~Span(void)
{
    return ;
}

Span::Span(Span const &src)
{
    *this = src;
    return ;
}

Span & Span::operator=(Span const &rhs)
{
    this->_n = rhs._n;
    this->_count = rhs._count;
    this->_lst = rhs._lst;
    return (*this);
}

void    Span::addNumber(int number)
{
    if (_count <= _n)
    {
        _lst.push_back(number);
        _count++;
    }
    else if(_count > _n)
        std::cout <<"The vector is full" << std::endl;
}

void    Span::addNumber(std::vector<int>::iterator beg, std::vector<int>::iterator end)
{
	for (;beg != end; beg++){
        if (_count > _n){
            std::cout <<"The vector is full" << std::endl;
            break ;
        }
        *beg = random() % 1000;
        addNumber(*beg);

        
	}
}

int     Span::shortestSpan()
{
    sort(_lst.begin(), _lst.end());
    return (_lst.at(1) - _lst.at(0));
}

int     Span::getNumber(int n)
{
    return (_lst.at(n));
}


int           Span::longestSpan()
{
    std::vector<int>::iterator minnum = min_element(begin(_lst), end(_lst));
    std::vector<int>::iterator max = max_element(begin(_lst), end(_lst));
    return (*max - *minnum);
}
