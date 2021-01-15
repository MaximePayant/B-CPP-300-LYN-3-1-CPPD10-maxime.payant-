/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** PlasmaRifle.hpp
*/

#ifndef PLASMA_RIFLE_HPP
#define PLASMA_RIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle :
    public AWeapon
{

    public:
        PlasmaRifle();

        void attack() const override;

};

#endif // PLASMA_RIFLE_HPP