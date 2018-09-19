/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <mkinnear@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 18:02:31 by mkinnear          #+#    #+#             */
/*   Updated: 2018/06/14 18:41:46 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#
#include <iostream>
#include <string>

template<typename T>
class   Array
{
    private:
        int Cap;
        int nrOfEl;
        T *arr

    public:
        Array();
        Array(unsigned int n);
        ~Array();

        int size();
        void add(const T &obj);
        T& get(int index);
};

template<typename T>
Array<T>::Array()
        {
            this->arr = NULL;
        }

template<typename T>
Array<T>::Array(unsigned int n)
        {
            this->Cap = n;
            if ( n == 0)
                this->arr = NULL;
            else
                this->arr = new T[n];
        }
template<typename T>
Array<T>::~Array()
    {
        delete[] this->arr;
    }

template<typename T>
int Array<T>::size()
    {
        return (this->nrOfEl);
    }
template<typename T>
void Array<T>::add(const T &obj)
{
    if (this->nrOfEl < this->Cap)
        this->arr[this->nrOfEl++] = obj;
    else
        std::cout << "the Array is full" << std::endl;
}

template<typename T>
T&  Array<T>::get(int index)
{
    if (index < 0 || index >= this->nrOfEl)
        throw("this is bad index");
    return (this->arr[index]);
}

int main()
{
    Array<int> mia;
    Array<std::string> msa;

    for (int i = 0; i < 5; i++)
    {}
        mia.add(10);
        msa.add("hello");
    }

    for (int i = 0; i < 5; i++)
    {}
        mia.set(10);
        msa.set("hello");
    }
    return (0);
}