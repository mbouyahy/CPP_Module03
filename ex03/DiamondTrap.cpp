/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:28:32 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/28 20:14:49 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(DiamondTrap &DiamondT)
{
    std::cout<< "DiamondTrap : copy constructor called" << std::endl;
    *this = DiamondT;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    std::cout<< "DiamondTrap : constructor With parameters called" << std::endl;
    this->name = name;
    this->hit_p = 100;
    this->energy_p = 50;
    this->Attack_p = 30;
    ClapTrap::name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(void)
{
    std::cout<< "DiamondTrap : Default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout<< "DiamondTrap : Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout<< "DiamondTrap : Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->energy_p = other.energy_p;
        this->hit_p = other.hit_p;
        this->Attack_p = other.Attack_p;
        this->name = other.name;
    }
    return (*this);
}

void DiamondTrap::attack()
{
    ScavTrap::attack(name);
}

void DiamondTrap::whoAmI()
{
    std::cout << this->name << " " << ClapTrap::name << std::endl;
}