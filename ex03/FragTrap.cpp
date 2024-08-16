/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:34:28 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/28 20:16:06 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(FragTrap &FlagT)
{
    std::cout<< "FragTrap : copy constructor called" << std::endl;
    *this = FlagT;
}

//member initializer lists
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout<< "FragTrap : constructor With parameters called" << std::endl;
    this->name = name;
    hit_p = 100;
    energy_p = 100;
    Attack_p = 30;
}

FragTrap::FragTrap(void)
{
    std::cout<< "FragTrap : Default constructor called" << std::endl;
}
FragTrap::~FragTrap(void)
{
    std::cout<< "FragTrap : Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout<< "FragTrap : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->energy_p = other.energy_p;
        this->hit_p = other.hit_p;
        this->Attack_p = other.Attack_p;
        this->name = other.name;
    }
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    //ClapTrap can’t do anything if it has no hit points or energy points left.
    if (hit_p > 0 && energy_p > 0)
    {
        energy_p--;
        std::cout << "FragTrap " << this->name << " attacks " \
        << target <<", causing " << Attack_p << " points of damage! " << std::endl; 
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout<< "High Fives" << std::endl;
}