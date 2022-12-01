/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 04:01:51 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 06:03:22 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.h"

void	args_error(int argc)
{
	if (argc != 4)
	{
		std::cout << "invalid argument count" << std::endl;
		exit(0);
	}	
}

int main(int argc, char **argv)
{
	args_error(argc);

	std::fstream	file;
	std::fstream	replace;
	std::string		filename(argv[1]);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	std::string		line;
	size_t			pos;
	int				s1_l = s1.length();

	file.open(filename);
	if (!file)
	{
		std::cout << "file doesnt exist" << std::endl;
		return 0;
	}

	replace.open(filename.append(".replace"), std::ios::out);
	if (!replace) 
	{
		std::cout << "File not created!";
		file.close();
		return 0;
	}
		
	while (std::getline(file, line))
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1_l);
			line.insert(pos, s2);
			pos++;
			pos = line.find(s1, pos);
		}
		replace << line << std::endl;
	}
	replace.close();
	file.close();
	return (0);
}