/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/05 17:34:38 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/12 16:00:04 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* strPTR = &str;
	std::string& strREF = str;

	std::cout << "The memory address of the string variable is: " << &str << std::endl;
	std::cout << "The memory address held by stringPTR is: " << strPTR << std::endl;
	std::cout << "The memory address held by stringREF is: " << &strREF << std::endl;
	std::cout << "The value of the string variable is: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *strPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << strREF << std::endl;

	return (0);
}
