/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:28:29 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/27 20:53:31 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap &DiamondT);
        DiamondTrap(void);
        ~DiamondTrap(void);
        DiamondTrap &operator=(const DiamondTrap &other);

        void whoAmI();
        void attack();
};

#endif
