/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:58:43 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/28 14:03:28 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(ScavTrap &ScavT)
{
    std::cout<< "ScavTrap : copy constructor called" << std::endl;
    *this = ScavT;
}

//member initializer lists
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout<< "ScavTrap : constructor With parameters called" << std::endl;
    this->name = name;
    hit_p = 100;
    energy_p = 50;
    Attack_p = 20;
}

ScavTrap::ScavTrap(void)
{
    std::cout<< "ScavTrap : Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout<< "ScavTrap : Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout<< "ScavTrap : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->energy_p = other.energy_p;
        this->hit_p = other.hit_p;
        this->Attack_p = other.Attack_p;
        this->name = other.name;
    }
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    //ClapTrap can’t do anything if it has no hit points or energy points left.
    if (hit_p > 0 && energy_p > 0)
    {
        energy_p--;
        std::cout << "ScavTrap " << this->name << " attacks " \
        << target <<", causing " << Attack_p << " points of damage! " << std::endl; 
    }
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
