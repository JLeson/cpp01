/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joel <joel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:10:13 by joel              #+#    #+#             */
/*   Updated: 2023/07/09 13:32:54 by joel             ###   ########.fr       */
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
