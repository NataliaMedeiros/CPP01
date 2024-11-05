/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/04 18:40:21 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/04 18:42:33 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.cpp"

int	main(void)
{
	int		size = 10;
	Zombie* horde = zombieHorde(size, "Horde");

	for(int i = 0; i < size; i++)
		horde[i].Announce();
	delete[] horde;
	return (0);
}
