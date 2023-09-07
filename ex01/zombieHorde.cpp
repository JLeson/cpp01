/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:33:19 by joel              #+#    #+#             */
/*   Updated: 2023/09/07 16:33:04 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombies;

	zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombies[i].set_name(name);
	return (zombies);
}
