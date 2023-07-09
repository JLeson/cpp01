/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joel <joel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:51:54 by joel              #+#    #+#             */
/*   Updated: 2023/07/09 14:58:06 by joel             ###   ########.fr       */
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

