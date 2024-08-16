/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:20:00 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/29 12:57:51 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(ClapTrap &ClapT)
{
    std::cout<< "copy constructor called" << std::endl;
    *this = ClapT;
}

//member initializer lists
ClapTrap::ClapTrap(std::string name): hit_p(10), energy_p(10), Attack_p(0) 
{
    std::cout<< "constructor With parameters called" << std::endl;
    this->name = name;
}

ClapTrap::ClapTrap(void)
{
    std::cout<< "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout<< "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout<< "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->energy_p = other.energy_p;
        this->hit_p = other.hit_p;
        this->Attack_p = other.Attack_p;
        this->name = other.name;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    //ClapTrap can’t do anything if it has no hit points or energy points left.
    if (hit_p > 0 && energy_p > 0)
    {
        energy_p--;
        std::cout << "ClapTrap " << this->name << " attacks " \
        << target <<", causing " << Attack_p << " points of damage! " << std::endl; 
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hit_p -= amount;
    std::cout << name << " takeDamage Function called >> hit points : " << hit_p << " amount : " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_p > 0 && energy_p > 0)
    {
        energy_p--;
        hit_p += amount;
        std::cout << name << " ClapTrap repairs itself" << " amount : " << amount << " hit points : " << hit_p << " enrgy points : " << energy_p << std::endl;
    }
}
