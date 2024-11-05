/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/04 14:25:49 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/04 18:22:05 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie();

		std::string	GetName();
		std::string	SetName(std::string newName);
		void		Announce(void);
};

Zombie*		newZombie(std::string name);
void		randomChump( std::string name );

#endif
