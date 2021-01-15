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
        ~AssaultTerminator();

        ISpaceMarine *clone() const override;
        void battleCry() const override;
        void rangedAttack() const override;
        void meleeAttack() const override;

};

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back ..." << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
    AssaultTerminator *terminator = new AssaultTerminator();

    return (terminator);
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}



#endif // ASSAULT_TERMINATOR_HPP