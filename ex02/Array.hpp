/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:22:57 by makacem           #+#    #+#             */
/*   Updated: 2023/06/14 19:12:15 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    unsigned int n;
    T   *array;
public:
    Array(void)
    {
        n = 0;
        array = new T [n];
        std::cout << "Array default constructor called\n";
    }
    Array<T>(unsigned int n)
    {
        this->n = n;
        array = new T [n];
        std::cout << "Array constructor called\n";
    }
    unsigned int size(void){
        return this->n;
    }
    Array<T>(Array const &other)
    {
        *this = other;
        std::cout << "Array copy constructor called\n";
    }
    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            if (other.n != 0)
            {
                this->n = other.n;
                this->array = new T [other.n];
                for (unsigned int i = 0; i < other.n; i++)
                    this->array[i] = other.array[i];
            }
            else
            {
                this->n = 0;
                this->array = new T [0];
            }
        }
        std::cout << "Array copy assignment constructor called\n";
        return *this;
    }
    ~Array<T>()
    {
        delete[] array;
        std::cout << "Array destructor called\n";
    }
    T &operator[](unsigned int index)
    {
        if (index < 0 || index >= n) {
            throw std::out_of_range("Index out of bounds");
        }
        return array[index];
    }
};



#endif