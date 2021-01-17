/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** MateriaSource.hpp
*/

#ifndef MATERIAL_SOURCE_HPP
#define MATERIAL_SOURCE_HPP

#include <iostream>
#include <array>

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource :
    public IMateriaSource
{

    private:
        std::array<AMateria*, 4> m_materiaList;

    public:
        MateriaSource();
        ~MateriaSource();

        void learnMateria(AMateria *materia);
        AMateria *createMateria(const std::string& type);

};

#endif // MATERIAL_SOURCE_HPP