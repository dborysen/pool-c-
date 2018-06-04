// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/25 15:53:03 by dborysen          #+#    #+#             //
//   Updated: 2018/05/25 15:53:03 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		~ClapTrap(void);

		ClapTrap &operator=(const ClapTrap &other);
	
	protected:
		int			_hitPoints;
		int			_maxHitPoints;
		int 		_energyPoints;
		int			_maxEnergyPoints;
		int			_level;
		int			_maleeAttackDamage;
		int			_rangedAttackDamage;
		int			_armorDamageReduction;
		std::string _name;

		void	meleeAttack(std::string const & target);
		void	rangedAttack(std::string const & target);
};

#endif
