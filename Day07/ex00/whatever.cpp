/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 10:36:13 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/14 13:55:24 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>



// template<typename T, typename U>
// class   Co
// {
//     public:

//         T   first;
//         U   second;

//         Co(void): first(f), second(s)
//         {

//         }

//         Co(T f, U s): first(f), second(s)
//         {

//         }

//         ~Co(void)
//         {

//         }
//         void    Swap(T &a, U &b)
//         {
//             T temp;

//             temp = a;
//             a = b;
//             b = temp;
//         }

//         T   Max(T &c, U &d)
//         {
//             return ((c > d) ? c : d);
//         }

//         T   Min(T &c, U &d)
//         {
//             return ((c < d) ? c : d);
//         }

//         void    getData(T &first, U &second)
//         {
//             Swap(first, second);
//             Min(first, second);
//             Max(first, second);
//         }
// };

template<typename T>
void   swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template<typename T>
T  min(T &c, T &d)
{
    return ((c < d) ? c : d);
}

template<typename T>
T   max(T &c, T &d)
{
    return ((c > d) ? c : d);
}

int     main( void )
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}