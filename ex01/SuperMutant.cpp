/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** SuperMutant.cpp
*/

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() :
AEnemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
    damage -= 3;
    if (damage > 0)
        m_hp -= damage;
}