/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 17:48:12 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/15 18:34:09 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>
# include <algorithm>

template <class T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack(void) : std::stack<T>() {}
        MutantStack(MutantStack const & assgn) : std::stack<T>(assgn) {}
        ~MutantStack(void) {}

        using std::stack<T>::operator=;

        typename std::stack<T>::container_type::iterator begin() {
            return std::stack<T>::c.begin();
        }

        typename std::stack<T>::container_type::iterator end() {
            return std::stack<T>::c.end();
        }
};

#endif
