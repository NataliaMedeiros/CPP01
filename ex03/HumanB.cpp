/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/08 13:44:54 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/12 10:02:25 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
	std::cout << "HumanB (" << name << ") constructed" << std::endl;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacked with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon"  << std::endl;
}

void	HumanB::setWeapon(Weapon& weaponType)
{
	weapon = &weaponType;
	std::cout << name << "'s weapon set to: " << this->weapon->getType() << std::endl;
}
