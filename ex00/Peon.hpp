/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Peon.hpp
*/

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon :
    public Victim
{

    public:
        Peon(const std::string& name);
        ~Peon();

        void getPolymorphed() const override;

};

#endif // PEON_HPP