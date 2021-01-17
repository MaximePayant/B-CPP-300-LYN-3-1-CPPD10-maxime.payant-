/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** AssaultTerminator.hpp
*/

#ifndef ASSAULT_TERMINATOR_HPP
#define ASSAULT_TERMINATOR_HPP

#include <iostream>

#include "ISpaceMarine.hpp"

class AssaultTerminator :
    public ISpaceMarine
{

    public:
        AssaultTerminator();
        ~AssaultTerminator() override;

        ISpaceMarine *clone() const override;
        void battleCry() const override;
        void rangedAttack() const override;
        void meleeAttack() const override;

};

#endif // ASSAULT_TERMINATOR_HPP