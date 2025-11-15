/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edurance <edurance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:04:15 by edurance          #+#    #+#             */
/*   Updated: 2025/11/09 15:28:30 by edurance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replace_line(std::string& line, std::string s1, std::string s2)
{
	size_t	occ_pos = line.find(s1);
	
	while (occ_pos != std::string::npos)
	{
		line.erase(occ_pos, s1.length());
		line.insert(occ_pos, s2);
		occ_pos = line.find(s1);
	}
}

int	copy_replace(std::string infile, std::string s1, std::string s2)
{
	std::ifstream	file;
	std::ofstream	result;
	std::string		line;
	std::string		outfile(infile);
	outfile += ".result";

	file.open(infile.c_str(), std::fstream::in);
	result.open(outfile.c_str(), std::fstream::out);

	if (!file.is_open() || !result.is_open())
	{
		std::cout << "Error: can't open files" << std::endl;
		return (1);
	}

	while (std::getline(file, line))
	{
		replace_line(line, s1, s2);
		result << line << std::endl;
	}

	if (file.fail() && !file.eof())
		std::cout << "Error: can't read a line" << std::endl;
	if (file.bad())
		std::cout << "An error have happened"  << std::endl;

	file.close();
	result.close();

	return (0);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./prog filename s1 s2" << std::endl;
		return (0);
	}
	if (copy_replace(av[1], av[2], av[3]))
		return (1);
	return (0);
}
