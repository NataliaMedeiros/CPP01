/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sed.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/12 14:39:32 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/12 14:40:23 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <string.h>
#include <iostream>
#include <fstream>

# define RESET "\033[0m"
# define GREEN "\033[32m"
# define YELLOW "\033[93m"
# define ORANGE "\033[38;5;202m"
# define RED "\033[31m"

bool	isStringReplaced(std::string fileName, std::string s1, std::string s2);

#endif
