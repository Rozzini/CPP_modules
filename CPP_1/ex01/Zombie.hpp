/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:13:57 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 02:36:19 by mraspors         ###   ########.fr       */
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

Zombie* zombieHorde( int N, std::string name );

#endif