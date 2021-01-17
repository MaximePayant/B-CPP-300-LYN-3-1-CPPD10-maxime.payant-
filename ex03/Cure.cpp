/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Cure.cpp
*/

#include "Cure.hpp"

Cure::Cure() :
AMateria("cure")
{}

Cure* Cure::clone() const
{
    Cure *cure = new Cure();

    return (cure);
}

void Cure::use(ICharacter &target)
{
    std::cout
        << "* heals "
        << target.getName()
        << "'s wounds *"
        << std::endl;
    m_xp += 10;
}