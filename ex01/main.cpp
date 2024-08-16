/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:20:05 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/29 12:41:38 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap S0("S0");
    ScavTrap S1("S1");
    
    S0.attack("S1");
    S1.takeDamage(5);
    S0.beRepaired(10);
    std::cout << std::endl;
    S1.attack("S0");
    S0.takeDamage(5);
    S1.beRepaired(10);
    S1.guardGate();
}
