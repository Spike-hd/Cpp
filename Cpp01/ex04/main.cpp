/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spike <spike@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:31:32 by spike             #+#    #+#             */
/*   Updated: 2025/04/28 14:39:01 by spike            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void read_and_replace(std::ifstream &file1, const std::string &s1, const std::string &s2, const std::string &replace_file)
{
	std::string line;
	size_t pos;

	std::ofstream file2(replace_file.c_str(), std::ios::out);
	if (!file2)
	{
		std::cerr << "Can't open this file !" << std::endl;
		return ;
	}
	while (std::getline(file1, line))
	{
		pos = 0;
		while (1)
		{
			pos = line.find(s1, pos);
			if (pos == std::string::npos)
				break ;
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		file2 << line << std::endl;
	}
	file2.close();
}


int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Wrong nb of args" << std::endl;
		return (0);
	}

	std::string filename(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::string replace_file = filename + ".replace";


	std::ifstream file1(filename.c_str());
	if (!file1)
	{
		std::cerr << "Can't open " << filename << " for reading!" << std::endl;
		return (1);
	}
	read_and_replace(file1, s1, s2, replace_file);
	file1.close();

	return (0);
}
