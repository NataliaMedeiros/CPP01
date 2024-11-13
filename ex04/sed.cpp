/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/12 14:39:06 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/12 14:40:03 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

bool	isStringReplaced(std::string fileName, std::string s1, std::string s2)
{
	std::string	line;
	int	startPosition;
	int	position;

	std::ifstream inFile(fileName);
	if (!inFile.is_open())
	{
		std::cout << YELLOW << "Error to open: " << fileName;
		std::cout << " - please check if it is a valid file." << RESET << std::endl;
		return (false);
	}
	std::ofstream outFile(fileName + ".replace");
	if (!outFile.is_open())
	{
		std::cout << YELLOW << "Error to create: " << fileName << ".replace" << RESET << std::endl;
		return (false);
	}
	while (std::getline(inFile, line))
	{
		startPosition = 0;
		while ((position = line.find(s1, startPosition)) != std::string::npos)
		{
			line = line.substr(0, position) + s2 + line.substr(position + s1.length());
			startPosition = position + s2.length();
		}
		outFile << line << std::endl;
	}
	return (true);
}
