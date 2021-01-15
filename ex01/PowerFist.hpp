/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** PowerFist.hpp
*/

#ifndef POWER_FIST_HPP
#define POWER_FIST_HPP

#include "AWeapon.hpp"

class PowerFist :
    public AWeapon
{

    public:
        PowerFist();

        void attack() const override;

};

#endif // POWER_FIST_HPP