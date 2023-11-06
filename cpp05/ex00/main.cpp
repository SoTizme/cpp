/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:10:37 by shilal            #+#    #+#             */
/*   Updated: 2023/11/06 19:40:37 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat a("hilal", 1);
        std::cout << a << std::endl;
        std::cout << "Increment The bureaucrat Grade of >> "<< a.getName() << std::endl;
        a.decrement();
        std::cout << a << std::endl;
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}