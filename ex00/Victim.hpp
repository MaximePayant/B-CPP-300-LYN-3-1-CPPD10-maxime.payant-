/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Victim.hpp
*/

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{

    protected:
        std::string m_name;

    public:
        Victim(const std::string& name);
        ~Victim();

        const std::string& getName() const { return (m_name); };

        virtual void getPolymorphed() const;

};

inline std::ostream& operator<<(std::ostream& os, const Victim& victim)
{
    os << "I'm "
        << victim.getName()
        << " and I like otters!"
        << std::endl;
    return (os);
}

#endif // VICTIM_HPP