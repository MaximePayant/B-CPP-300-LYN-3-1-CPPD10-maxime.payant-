/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** RadScorpion.hpp
*/

#ifndef RAD_SCORPION_HPP
#define RAD_SCORPION_HPP

#include "AEnemy.hpp"

class RadScorpion :
    public AEnemy
{

    public:
        RadScorpion();
        ~RadScorpion();

        using AEnemy::getHP;
        using AEnemy::getType;
        using AEnemy::takeDamage;
};

#endif // RAD_SCORPION_HPP