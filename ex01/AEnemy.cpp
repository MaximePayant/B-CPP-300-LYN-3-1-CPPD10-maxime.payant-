/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** AEnemy.cpp
*/

#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string &type) :
m_hp(hp),
m_type(type)
{}

void AEnemy::takeDamage(int damage)
{
    if (damage > 0)
        m_hp -= damage;
}