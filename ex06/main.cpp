/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/12 14:42:35 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/12 15:24:54 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	if (argc != 2 || !isLevelValid(argv[1]))
	{
		std::cout << "Error: please provide one of the follow valid levels:" << std::endl;
		std::cout << "DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}