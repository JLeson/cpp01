/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:03:15 by joel              #+#    #+#             */
/*   Updated: 2023/09/07 16:32:38 by fsarkoh          ###   ########.fr       */
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

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
