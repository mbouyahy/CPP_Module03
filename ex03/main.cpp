/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:20:05 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/29 13:04:04 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap Diamond01("Diamond01");
    DiamondTrap Diamond02("Diamond02");

    Diamond01.attack();
    Diamond02.takeDamage(5);
    Diamond01.beRepaired(10);
    Diamond01.whoAmI();
    std::cout << std::endl;
    Diamond02.attack();
    Diamond01.takeDamage(5);
    Diamond02.beRepaired(10);
    Diamond02.whoAmI();
}
