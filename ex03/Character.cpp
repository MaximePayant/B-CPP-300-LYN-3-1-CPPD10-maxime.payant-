/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Character.cpp
*/

#include "Character.hpp"

Character::Character(const std::string& name) :
m_name(name)
{
    for (int ctr = 0; ctr < 4; ctr += 1)
        m_materiaList[ctr] = nullptr;
}

Character::Character(const Character& character)
{
    m_name = character.m_name;
    for (int ctr = 0; ctr < 4; ctr += 1)
        m_materiaList[ctr] = character.m_materiaList[ctr]->clone();
}

Character::~Character()
{
    for (int ctr = 0; ctr < 4; ctr += 1)
        delete (m_materiaList[ctr]);
}

void Character::equip(AMateria *materia)
{
    for (int ctr = 0; ctr < 4; ctr += 1)
        if (!m_materiaList[ctr]) {
            m_materiaList[ctr] = materia;
            materia = nullptr;
        }
}

void Character::unequip(int index)
{
    if (0 <= index && index < 4)
        m_materiaList[index] = nullptr;
}

void Character::use(int index, ICharacter &target)
{
    if (0 <= index && index < 4)
        if (m_materiaList[index]) {
            m_materiaList[index]->use(target);
            m_materiaList[index] = nullptr;
        }
}