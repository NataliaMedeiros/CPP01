/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/08 13:45:11 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/12 09:57:09 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type)
{
	this->type = type;
	std::cout << "Weapon type: '" << type << "' constructed" << std::endl;
}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(std::string weaponType)
{
	type = weaponType;
	std::cout << "Set type to: " << type << std::endl;
}
