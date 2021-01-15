/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** RadScorpion.cpp
*/

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() :
AEnemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}