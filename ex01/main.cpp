/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makacem <makacem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:07:05 by makacem           #+#    #+#             */
/*   Updated: 2023/06/13 18:05:52 by makacem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void    print(T const &a)
{
    std::cout << a << std::endl;
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4};
    
    iter(arr, 5, print);

    char arr2[] = {'a', 'b', 'c', 'd', 'e'};

    iter(arr2, 5, print);

    char arr3[] = "qwerty";

    iter(arr3, 5, print);
}
