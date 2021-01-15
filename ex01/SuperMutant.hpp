/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** SuperMutant.hpp
*/

#ifndef SUPER_MUTANT_HPP
#define SUPER_MUTANT_HPP

#include "AEnemy.hpp"

class SuperMutant :
    public AEnemy
{

    public:
        SuperMutant();
        ~SuperMutant();

        void takeDamage(int damage);
        using AEnemy::getHP;
        using AEnemy::getType;

};

#endif // SUPER_MUTANT_HPP