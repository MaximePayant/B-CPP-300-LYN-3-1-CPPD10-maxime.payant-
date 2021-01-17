/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Character.hpp
*/

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <array>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character :
    public ICharacter
{

    private:
        std::string m_name;
        std::array<AMateria *, 4> m_materiaList;

    public:
        Character(const std::string& name);
        Character(const Character& character);
        ~Character();

        const std::string& getName() const { return (m_name); };
        void equip(AMateria *materia);
        void unequip(int index);
        void use(int index, ICharacter &target);

        Character& operator=(const Character& character);

};

inline Character& Character::operator=(const Character& character)
{
    for (auto &m : m_materiaList)
        delete (m);
    for (int ctr = 0; ctr < 4; ctr += 1)
        m_materiaList[ctr] = character.m_materiaList[ctr]->clone();
    return (*this);
}

#endif // CHARACTER_HPP