/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Cure.hpp
*/

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure :
    public AMateria
{

    public:
        Cure();
        ~Cure() {};

        Cure *clone() const;
        void use(ICharacter &target) override;

};

#endif // CURE_HPP