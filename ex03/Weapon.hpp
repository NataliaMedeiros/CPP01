/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/08 13:44:58 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/12 09:54:41 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

# define RESET "\033[0m"
# define GREEN "\033[32m"

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(const std::string type);
		~Weapon();

		const std::string&	getType() const;
		void	setType(std::string weaponType);
};

#endif
