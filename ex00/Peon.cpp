/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Peon.cpp
*/

#include "Peon.hpp"

Peon::Peon(const std::string& name) :
Victim(name)
{
    std::cout
        << "Zog Zog."
        << std::endl;
}

Peon::~Peon()
{
    std::cout
        << "Bleuark..."
        << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout
        << m_name
        << " has been turned into a pink pony!"
        << std::endl;
}