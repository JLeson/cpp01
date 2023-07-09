/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joel <joel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:03:15 by joel              #+#    #+#             */
/*   Updated: 2023/07/09 12:33:07 by joel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(void);
	~Zombie(void);
	void	set_name(std::string name);
	void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);