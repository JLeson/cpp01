/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:17:27 by joel              #+#    #+#             */
/*   Updated: 2023/09/07 16:33:24 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>
#include <Weapon.hpp>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA(void)	{}

void	HumanA::attack(void)
{
	std::cout << this->name << " attack with their " << this->weapon->getType() << std::endl;
}
