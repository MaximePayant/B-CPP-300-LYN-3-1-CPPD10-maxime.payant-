/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** AWeapon.cpp
*/

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string& name, int apcost, int damage) :
m_name(name),
m_apCost(apcost),
m_damage(damage)
{}