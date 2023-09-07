/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:12:44 by joel              #+#    #+#             */
/*   Updated: 2023/09/07 16:33:34 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)	
{
	this->type = type;
}

Weapon::~Weapon(void)	{}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
