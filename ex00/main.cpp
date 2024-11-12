/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/04 14:48:18 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/12 15:48:52 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
Stack: Variables on the stack are limited to the scope of the function or block
in which they are declared. They get destroyed once they go out of scope.
Heap: Heap-allocated variables persist beyond the scope in which they are created,
which makes them suitable when you want objects to outlive the function in which
they were created or to be shared between functions, however they need to be explicitly
freed (in this case we are using delete).
*/
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
