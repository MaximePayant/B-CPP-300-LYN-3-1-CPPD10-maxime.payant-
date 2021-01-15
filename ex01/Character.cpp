/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Character.cpp
*/

#include "Character.hpp"

Character::Character(const std::string &name) :
m_name(name),
m_ap(40),
m_weapon(nullptr)
{}

void Character::attack(AEnemy *enemy)
{
    std::cout
        << m_name
        << " attacks "
        << enemy->getType()
        << " with a "
        << (m_weapon ? m_weapon->getName() : "unarmed")
        << std::endl;
    if (!m_weapon)
        return;
    if (m_weapon->getAPCost() <= (int)m_ap) {
        m_ap -= m_weapon->getAPCost();
        m_weapon->attack();
        enemy->takeDamage(m_weapon->getDamage());
        if (enemy->getHP() <= 0)
            delete (enemy);
    }
}

void Character::equip(AWeapon *weapon)
{
    m_weapon = weapon;
}

void Character::recoverAP()
{
    m_ap = (m_ap + 10 > 40 ? 40 : m_ap + 10);
}