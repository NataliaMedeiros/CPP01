/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/08 13:45:09 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/12 10:03:22 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	std::cout << GREEN << "-----Test HumanA-----" << RESET << std::endl;
	Weapon club = Weapon("crude spiked club");

	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	std::cout << std::endl;

	std::cout << GREEN << "-----Test HumanB-----" << RESET << std::endl;
	Weapon newClub = Weapon("crude spiked club");

	HumanB jim("Jim");
	jim.setWeapon(newClub);
	jim.attack();
	newClub.setType("some other type of club");
	jim.attack();
	return 0;
}
