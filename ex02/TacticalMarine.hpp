/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** TacticalMarine.hpp
*/

#ifndef TACTICAL_MARINE_HPP
#define TACTICAL_MARINE_HPP

#include <iostream>

#include "ISpaceMarine.hpp"

class TacticalMarine :
    public ISpaceMarine
{

    public:
        TacticalMarine();
        ~TacticalMarine() override;

        ISpaceMarine *clone() const override;
        void battleCry() const override;
        void rangedAttack() const override;
        void meleeAttack() const override;

};

#endif // TACTICAL_MARINE_HPP