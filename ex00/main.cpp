/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/04 14:48:18 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/04 18:26:30 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie*		heapZombie;

	randomChump("Chump");
	heapZombie = newZombie("heap");
	heapZombie->Announce();
	delete	heapZombie;
	return (0);
}
