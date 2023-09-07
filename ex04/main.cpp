/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsarkoh <fsarkoh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 13:50:22 by joel              #+#    #+#             */
/*   Updated: 2023/09/07 16:33:50 by fsarkoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static	std::string	replace(std::string content, std::string from, std::string to)
{
	size_t	idx;

	if (content.empty())
		return (content);
	idx = content.find(from);
    while(idx != std::string::npos)
    {
        content.erase(idx, from.length());
        content.insert(idx, to);
        idx = content.find(from);
    }
    return (content);
}

int	main(int argc, char **argv)
{
	std::string	file_name;
	std::string	file_content;
	std::string	replaced_content;

	if (argc != 4)
	{
		std::cerr << "Error: Wrong amount of arguments" << std::endl;
		return (1);
	}
	file_name = *(argv + 1);
	std::ifstream infstream(*(argv + 1));
    if (!infstream.is_open())
    {
        std::cerr << "Error: Unable to open input file" << std::endl;
        return (1);
    }
	getline(infstream, file_content, '\0');
	replaced_content = replace(file_content, *(argv + 2), *(argv + 3));
	std::ofstream outfstream((file_name + ".replace").c_str());
    if (!outfstream.is_open())
    {
        std::cerr << "Error: Unable to open output file" << std::endl;
        return (1);
    }
	outfstream << replaced_content;
	outfstream.close();
	return (0);
}
