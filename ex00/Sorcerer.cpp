/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Sorcerer.cpp
*/

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string& name, const std::string& title) :
m_name(name),
m_title(title)
{
    std::cout
        << m_name
        << ", "
        << m_title
        << ", "
        << "is born!"
        << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout
        << m_name
        << ", "
        << m_title
        << ", is dead. Consequences will never be the same!"
        << std::endl;
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}