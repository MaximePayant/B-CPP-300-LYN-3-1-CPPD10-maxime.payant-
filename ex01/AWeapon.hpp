/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** AWeapon.hpp
*/

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{

    private:
        std::string m_name;
        int m_apCost;
        int m_damage;

    public:
        AWeapon(const std::string& name, int apcost, int damage);

        const std::string& getName() const { return(m_name);   };
        int getAPCost() const              { return(m_apCost); };
        int getDamage() const              { return(m_damage); };

        virtual void attack() const = 0;

};

#endif // AWEAPON_HPP