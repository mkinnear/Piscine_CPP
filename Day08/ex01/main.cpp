/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 13:48:56 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/15 18:21:38 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include "span.hpp"

int     main(void)
{
    int         size = 6;
    Span    lst(size);
    std::vector<int> v1(7);

    std::vector<int>::iterator vIter = v1.begin();
    std::vector<int>::iterator vIter2 = v1.end();
    lst.addNumber(vIter, vIter2);
    for (;vIter != vIter2; vIter++){
        std::cout << "num: " << *vIter<< std::endl;
	}

    std::cout << "\n********Testing own class*********" << std::endl;
    int i = 0;
   while (i < size){
        std::cout << "num: " << lst.getNumber(i) << std::endl;
        i++;
	}
    // lst.addNumber(4);
    // lst.addNumber(5);
    // lst.addNumber(8);
    // lst.addNumber(10);
    // lst.addNumber(10);
    std::cout << "longspan: " << lst.longestSpan() << std::endl;
    std::cout << "shortspan: " << lst.shortestSpan() << std::endl;

    return (0);
}