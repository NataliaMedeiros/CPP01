/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/12 14:41:57 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/12 15:03:37 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

# define RESET "\033[0m"
# define GREEN "\033[32m"
# define YELLOW "\033[93m"
# define ORANGE "\033[38;5;202m"
# define RED "\033[31m"

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl(/* args */);
		~Harl();
		void complain(std::string level);
};

#endif
