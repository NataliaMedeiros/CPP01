/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/12 10:09:32 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/12 14:40:32 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	fileName = argv[1];
		std::string	s1 = argv[2];
		std::string	s2 = argv[3];

		if (fileName.empty() || s1.empty() || s2.empty())
		{
			std::cout << ORANGE << "Filename and Strings s1 and s2 cannot be empty" << RESET << std::endl;
			return (1);
		}
		if (!isStringReplaced(fileName, s1, s2))
			return (1);
	}
	else
	{
		std::cout << ORANGE << "**Please check the arguments**" << RESET << std::endl;
		return (1);
	}
	return (0);
}

