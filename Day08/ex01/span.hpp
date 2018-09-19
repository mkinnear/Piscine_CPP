/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 13:48:48 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/15 18:22:22 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H
# include <vector>
# include <algorithm>
# include <iostream>
class Span{
private:
    unsigned int    _n;
    std::vector<int>  _lst;
    int             _count;

public:
    Span(void);
    Span(unsigned int n);
    ~Span(void);
    Span(Span const &src);
    Span &operator=(Span const &rhs);

    void    addNumber(int number);
    int     shortestSpan();
    int     longestSpan();
    void    addNumber(std::vector<int>::iterator beg, std::vector<int>::iterator end);
    int     getNumber(int n);

};

#endif