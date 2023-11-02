/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shilal <shilal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:02:31 by shilal            #+#    #+#             */
/*   Updated: 2023/11/02 18:26:14 by shilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

// class IMateriaSource;

class MateriaSource : public IMateriaSource
{
    AMateria *tmp[4];

    public :
        MateriaSource();
        MateriaSource(MateriaSource const& a);
        MateriaSource& operator=(MateriaSource const& a);
        ~MateriaSource();

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif