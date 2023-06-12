/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:07:49 by makacem           #+#    #+#             */
/*   Updated: 2023/06/12 18:19:47 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP

#define WHATEVER_HPP

#include <iostream>

template <typename T>
void    swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T   max(T &x, T &y)
{
    if (x > y)
        return x;
    else
        return y;
}

template <typename T>
T   min(T &x, T &y)
{
    if (x < y)
        return x;
    else
        return y;
}
#endif