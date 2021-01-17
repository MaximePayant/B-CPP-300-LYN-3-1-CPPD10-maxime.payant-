/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Ice.cpp
*/

#include "Ice.hpp"

Ice::Ice() :
AMateria("ice")
{}

Ice* Ice::clone() const
{
    Ice *ice = new Ice();

    return (ice);
}

void Ice::use(ICharacter &target)
{
    std::cout
        << "* shoots an ice bolt at "
        << target.getName()
        << " *" << std::endl;
    m_xp += 10;
}