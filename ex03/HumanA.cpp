/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/08 13:45:06 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/08 14:15:13 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->name << "attacks with their" << this->weapon.getType() << std::endl;
}
