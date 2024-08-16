/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:34:16 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/27 19:22:27 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

//Virtual added for handling the ambiguous problem
class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap &FlagT);
        FragTrap(void);
        ~FragTrap(void);
        FragTrap &operator=(const FragTrap &other);

        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif