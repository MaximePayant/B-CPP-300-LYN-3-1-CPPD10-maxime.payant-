/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** AMateria.hpp
*/

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

#include <iostream>

class AMateria
{

    protected:
        std::string m_type;
        int m_xp;

    public:
        AMateria(const std::string& type);
        virtual ~AMateria() {};

        const std::string &getType() const { return (m_type); };
        unsigned int getXP() const { return (m_xp); };

        virtual AMateria *clone() const;
        virtual void use(ICharacter &target);

};

#endif // AMATERIA_HPP