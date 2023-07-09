/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joel <joel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:08:05 by joel              #+#    #+#             */
/*   Updated: 2023/07/09 12:41:40 by joel             ###   ########.fr       */
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