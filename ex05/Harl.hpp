/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:51:54 by joel              #+#    #+#             */
/*   Updated: 2023/09/07 16:34:12 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Harl
{
private:
	void	debug(void);
    void	info(void);
    void	warning(void);
    void	error(void);
public:
	Harl(void);
	~Harl(void);
	void	complain(std::string level);
};

typedef void (Harl::*t_func) ( void );
