/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Character.hpp
*/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character
{

    private:
        std::string m_name;
        std::size_t m_ap;
        AWeapon *m_weapon;

    public:
        Character(const std::string &name);

        const std::string& getName() const { return (m_name);    };
        const std::size_t& getAp() const   { return (m_ap);      };
        const AWeapon* getWeapon() const   { return (m_weapon); };

        void recoverAP();
        void equip(AWeapon *weapon);
        void attack(AEnemy *enemy);

};

inline std::ostream& operator<<(std::ostream& os, const Character& character)
{
    os << character.getName()
        << " has "
        << character.getAp()
        << " AP and "
        << (character.getWeapon() ? "wields a " + character.getWeapon()->getName() : "is unarmed")
        << std::endl;
    return (os);
}

#endif // CHARACTER_HPP