/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** AEnemy.hpp
*/

#ifndef AENNEMY_HPP
#define AENNEMY_HPP

#include <iostream>

class AEnemy
{

    protected:
        std::size_t m_hp;
        std::string m_type;

    public:
        AEnemy(int hp, const std::string &type);

        const std::string& getType() const { return (m_type); };
        int getHP() const                  { return (m_hp);   };

        virtual void takeDamage(int damage);
};

#endif // AENNEMY_HPP