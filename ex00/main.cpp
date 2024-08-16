/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:20:05 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/28 13:41:51 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Clap01("T01");
    ClapTrap Clap02("T02");
    
    Clap01.attack("T02");
    Clap02.takeDamage(4);
    Clap01.beRepaired(10);
    std::cout << std::endl;
    Clap02.attack("T01");
    Clap01.takeDamage(5);
    Clap02.beRepaired(10);
}
