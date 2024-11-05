/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/04 18:28:30 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/04 18:36:23 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		zombieHorde( int N, std::string name )
{
	Zombie*		horde = new Zombie[N];

	for(int i = 0; i < N; i++)
		horde[i].SetName(name);
	return (horde);
}
