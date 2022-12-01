/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 02:29:18 by mraspors          #+#    #+#             */
/*   Updated: 2022/11/30 23:21:26 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>


class Zombie {
private:
	std::string		name;

public:
	Zombie();
    Zombie(std::string name);
	~Zombie();

    std::string getName();
	void setName(std::string name);
	void announce( void );
};

Zombie* newZombie( std::string name );

void randomChump( std::string name );

#endif