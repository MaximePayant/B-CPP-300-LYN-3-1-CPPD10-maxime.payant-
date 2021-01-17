/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** MateriaSource.cpp
*/

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int ctr = 0; ctr < 4; ctr += 1)
        m_materiaList[ctr] = nullptr;
}

MateriaSource::~MateriaSource()
{
    for (int ctr = 0; ctr < 4; ctr += 1)
        delete (m_materiaList[ctr]);
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
    for (int ctr = 0; ctr < 4; ctr += 1)
        if (m_materiaList[ctr] && m_materiaList[ctr]->getType() == type)
            return (m_materiaList[ctr]->clone());
    return (nullptr);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    for (int ctr = 0; ctr < 4; ctr += 1)
        if (!m_materiaList[ctr]) {
            m_materiaList[ctr] = materia;
            break;
        }
}