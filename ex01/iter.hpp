/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:07:07 by makacem           #+#    #+#             */
/*   Updated: 2023/06/13 17:57:27 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H

#define ITER_H
#include <iostream>

template <typename T>
void    iter(T *array, int len, void (*func)(T const &elem))
{
    for(int i =0; i < len; i++)
        func(array[i]);
    
}


#endif