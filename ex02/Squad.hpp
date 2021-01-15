/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Squad.hpp
*/

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>
#include <deque>

#include "ISquad.hpp"

class Squad :
    public ISquad
{

    private:
        std::deque<ISpaceMarine*> m_marineList;

    public:
        Squad();
        Squad(const Squad& squad);
        ~Squad();

        int getCount() const override;
        ISpaceMarine* getUnit(int index) override;
        int push(ISpaceMarine* marine) override;
        Squad& operator=(const Squad& squad);

};

#endif // SQUAD_HPP