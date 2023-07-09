/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joel <joel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:08:05 by joel              #+#    #+#             */
/*   Updated: 2023/07/09 12:28:39 by joel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *heap_zombie;

	heap_zombie = newZombie("ZOMBRO");
	heap_zombie->announce();
	delete heap_zombie;

	randomChump("BRAINY");
	return (0);
}