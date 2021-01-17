/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** AMateria.cpp
*/

#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) :
m_type(type),
m_xp(0)
{}

AMateria* AMateria::clone() const
{
    AMateria *materia = new AMateria(m_type);

    return (materia);
}

void AMateria::use(ICharacter &target)
{
    (void)target;
    m_xp += 10;
}