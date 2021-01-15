/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Victim.cpp
*/

#include "Victim.hpp"

Victim::Victim(const std::string& name) :
m_name(name)
{
    std::cout
        << "Some random victim called "
        << m_name
        << " just popped!"
        << std::endl;
}

Victim::~Victim()
{
    std::cout
        << "Victim "
        << m_name
        << " just died for no apparent reason!"
        << std::endl;
}

void Victim::getPolymorphed() const
{
    std::cout
        << m_name
        << " has been turned into a cute little sheep!"
        << std::endl;
}