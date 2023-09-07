/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:10:13 by joel              #+#    #+#             */
/*   Updated: 2023/09/07 16:33:39 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string type);
	~Weapon(void);
	const std::string	&getType(void);
	void				setType(std::string type);
};
