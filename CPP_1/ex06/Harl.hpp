/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraspors <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 06:07:27 by mraspors          #+#    #+#             */
/*   Updated: 2022/12/01 06:59:37 by mraspors         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl {

private:
	int	 max_lvl;
    void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	
public:
	Harl(std::string lvl);
	~Harl();

	void (Harl:: *ft_ptr) ();
	void complain( std::string level );
};

#endif