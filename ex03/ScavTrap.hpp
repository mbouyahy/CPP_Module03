/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:58:49 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/16 22:21:13 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

//Virtual added for handling the ambiguous problem
class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &ScavT);
        ScavTrap();
        ~ScavTrap();
        ScavTrap &operator=(const ScavTrap &other);

        void attack(const std::string& target);
        void guardGate();
};

#endif