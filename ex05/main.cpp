/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/12 14:42:35 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/12 15:11:46 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;

	std::cout << "-----DEBUG test-----" << std::endl;
	harl.complain("DEBUG");
	std::cout << "-----INFO test-----" << std::endl;
	harl.complain("INFO");
	std::cout << "-----WARNING test-----" << std::endl;
	harl.complain("WARNING");
	std::cout << "-----ERROR test-----" << std::endl;
	harl.complain("ERROR");
	return (0);
}
