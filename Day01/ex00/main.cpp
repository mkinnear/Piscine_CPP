/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:08:09 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/06 18:08:12 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Pony.hpp"

void     ponyOnTheHeap(std::string color, std::string sound)
{
    std::string co = color;
    std::string so = sound;
    Pony    *Heap = new Pony(co, so);
    std::cout << "The PONY then finds the STACK" << std::endl;
    delete Heap;
}

void    ponyOnTheStack(std::string color, std::string sound)
{
     std::string co = color;
    std::string so = sound;
    Pony    Heap = Pony(co, so);
    std::cout << "The PONY then finds the HEAP" << std::endl;

    return ;
}

int     main(void)
{
    std::cout << std::endl;
    ponyOnTheHeap("Black", "jumps");
    std::cout << std::endl;
    ponyOnTheStack("White", "runs");
    std::cout << std::endl;

    return (0);
}