/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Sorcerer.hpp
*/

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>

#include "Victim.hpp"

class Sorcerer
{

    private:
        std::string m_name;
        std::string m_title;

    public:
        Sorcerer(const std::string& name, const std::string& title);
        ~Sorcerer();

        const std::string& getName() const { return (m_name); };
        const std::string& getTitle() const { return (m_title); };

        void polymorph(const Victim &victim) const;

};

inline std::ostream& operator<<(std::ostream& os, const Sorcerer& sorcerer)
{
    os << "I am "
        << sorcerer.getName()
        << ", "
        << sorcerer.getTitle()
        << ", and I like ponies!"
        << std::endl;
    return (os);
}

#endif // SORCERER_HPP