/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/04 14:40:01 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/04 18:44:19 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "Zombie";
	std::cout << name << " had been constructed" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " has been destructed" << std::endl;
}

std::string	Zombie::GetName()
{
	return(this->name);
}

std::string	Zombie::SetName(std::string newName)
{
	return(this->name = newName);
}

void	Zombie::Announce(void)
{
	std::cout << GetName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
