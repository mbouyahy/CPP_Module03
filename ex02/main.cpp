/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:20:05 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/29 12:38:43 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap Clap01("T01");
    ScavTrap Clap02("T02");
    
    Clap01.attack("T02");
    Clap02.takeDamage(4);
    Clap01.beRepaired(10);
    Clap01.highFivesGuys();
    std::cout << std::endl;
    Clap02.attack("T01");
    Clap01.takeDamage(5);
    Clap02.beRepaired(10);
    Clap02.guardGate();
}
