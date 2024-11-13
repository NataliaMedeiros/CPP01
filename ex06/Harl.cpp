/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/12 14:42:23 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/12 15:38:54 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << GREEN << "[DEBUG]: " << RESET;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << YELLOW << "[INFO]: " << RESET;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std:: cout << std::endl;
}
void	Harl::warning(void)
{
	std::cout << ORANGE << "[WARNING]: " << RESET;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.";
	std:: cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED << "[ERROR]: " << RESET;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std:: cout << std::endl;
}

void Harl::complain(std::string level)
{
	switch (level[0])
	{
		case 'D':
			this->debug();
		case 'I':
			this->info();
		case 'W':
			this->warning();
		case 'E':
			this->error();
		break ;
	}
}
