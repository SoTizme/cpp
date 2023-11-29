/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:08:31 by shilal            #+#    #+#             */
/*   Updated: 2023/11/29 18:04:06 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <vector>

int main(){
    int arr[4] = {0,55,8,80};
	std::vector <int> ptr;
	for (int i = 0; i < 4; i++) {
		ptr.push_back(arr[i]);
	}

	try
	{
		easyfind(ptr, 8);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}