/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Squad.cpp
*/

#include "Squad.hpp"

Squad::Squad()
{}

Squad::Squad(const Squad& squad)
{
    for (int ctr = 0; ctr < squad.getCount(); ctr += 1)
        m_marineList.push_back(squad.m_marineList[ctr]->clone());
}

Squad::~Squad()
{
    for (auto &marine : m_marineList)
        delete (marine);
}

Squad& Squad::operator=(const Squad& squad)
{
    for (auto &marine : m_marineList)
        delete (marine);
    for (int ctr = 0; ctr < squad.getCount(); ctr += 1)
        m_marineList.push_back(squad.m_marineList[ctr]->clone());
    return (*this);
}

int Squad::push(ISpaceMarine* marine)
{
    if (marine)
        m_marineList.push_back(marine);
    return (m_marineList.size());
}

ISpaceMarine* Squad::getUnit(int index)
{
    if (index < 0 || index > getCount() - 1)
        return (nullptr);
    return (m_marineList[index]);
}

int Squad::getCount() const
{
    return (m_marineList.size());
}