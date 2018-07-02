// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/25 17:41:57 by dborysen          #+#    #+#             //
//   Updated: 2018/05/25 17:41:58 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &other);
		~NinjaTrap();
	
		NinjaTrap &operator=(const NinjaTrap &other);

		void	ninjaShoebox(FragTrap &obj, const std::string & target);
		void	ninjaShoebox(ScavTrap &obj, const std::string & target);
		void	ninjaShoebox(NinjaTrap &obj, const std::string & target);
		void	ninjaAttack(const std::string target);
};

#endif