/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Ice.hpp
*/

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice :
    public AMateria
{

    public:
        Ice();
        ~Ice() {};

        Ice *clone() const;
        void use(ICharacter &target) override;

};

#endif // ICE_HPP