/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 17:47:59 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/15 18:34:18 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>
int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::container_type::iterator it = mstack.begin();
MutantStack<int>::container_type::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
return (0);
}
/*
int     main() {
    std::cout << ">>>> Test Start\n" << std::endl;
    std::cout << ">>>> STACK instance creation" << std::endl;
    MutantStack<int> stack;
    std::cout << "\n >>>> STACK Push - three values ( 5 , 6 , 7 ) " << std::endl;
    stack.push(5);
    stack.push(6);
    stack.push(7);

    std::cout << "\n >>>> Displaying STACK Size" << std::endl;
    std::cout << stack.size() << std::endl;
    std::cout << "\n >>>> Displaying value of Top element on STACK" << std::endl;
    std::cout << stack.top() << std::endl;

    std::cout << "\n >>>> STACK Pop" << std::endl;
    stack.pop();
    std::cout << "\n >>>> Displaying STACK Size" << std::endl;
    std::cout << stack.size() << std::endl;

    std::cout << "\n >>>> STACK Push - three values ( 8 , 9 , 10 )" << std::endl;
    stack.push(8);
    stack.push(9);
    stack.push(10);
    std::cout << "\n >>>> Displaying value of Top element on STACK" << std::endl;
    std::cout << stack.top() << std::endl;
    std::cout << "\n >>>> Displaying STACK Size" << std::endl;
    std::cout << stack.size() << std::endl;

    MutantStack<int>::container_type::iterator it = std::find(stack.begin(), stack.end(), 8);
    std::cout << "\n >>>> Searching a value in the STACK" << std::endl;
    if (it == stack.end())
        std::cout << "Error: I cannot find the value you're searching for!" << std::endl;
    else
        std::cout << "Value found: " << *it << std::endl;

    MutantStack<int>::container_type::iterator itf = stack.begin();
    MutantStack<int>::container_type::iterator ite = stack.end();

    std::cout << "\n>>>> Displaying STACK Elements" << std::endl;
    int i = 0;
    while (itf != ite) {
        std::cout << "[ STACK Element [ " << i << " ] ] VALUE:= " << *itf << std::endl;
        ++itf;
        ++i;
    }

    std::stack<int> defaultStack(stack);
    std::cout << "\n>>>> Test End" << std::endl;
    return 0;
}
*/