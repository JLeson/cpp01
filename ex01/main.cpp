/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:08:05 by joel              #+#    #+#             */
/*   Updated: 2023/09/07 16:32:58 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int		horde_size;

	horde_size = 4;
	horde = zombieHorde(horde_size, "Zombros");
	for (int i = 0; i < horde_size; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
