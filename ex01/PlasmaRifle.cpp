/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** PlasmaRifle.cpp
*/

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() :
AWeapon("Plasma Rifle", 5, 21)
{}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}