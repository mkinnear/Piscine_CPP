/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 13:58:42 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/14 17:02:40 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void    iter(T *arr, size_t len, void (*function)(T &c))
{
    size_t      i;

    i = 0;
    while (i < len){
        (*function)(arr[i]);
        i++;
    }
}

template <typename T>
void    funct(T &c){
    std::cout << "Success : "<< c << std::endl;
}


int     main(void)
{
    int     arrInt[] = {1,2,3};
    std::cout << "Testing int" << std::endl;
    iter(arrInt, 3, funct<int>);

    char     arrChar[] = {'a','b','c'};
    std::cout << "Testing char *" << std::endl;
    iter(arrChar, 3, funct<char>);

    std::string  arrStr[] = {"Apple","Banana","Carrot"};
    std::cout << "Testing strings" << std::endl;
    iter(arrStr, 3, funct<std::string>);
    
    float     arrFlt[] = {3.1, 4.1, 5.1};
    std::cout << "Testing floats" << std::endl;
    iter(arrFlt, 3, funct<float>);

    return (0);
}