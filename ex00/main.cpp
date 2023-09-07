/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:08:05 by joel              #+#    #+#             */
/*   Updated: 2023/09/07 16:32:32 by fsarkoh          ###   ########.fr       */
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
