// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/24 15:12:39 by dborysen          #+#    #+#             //
//   Updated: 2018/05/24 15:12:40 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>

class ScavTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);
		~ScavTrap(void);

		ScavTrap &operator=(const ScavTrap &other);

		void	challengeNewcomer(std::string const & target);
	private:
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

		void	pickAchair(std::string const & target);
		void	dontBreatheTenMin(std::string const & target);
		void	eatABug(std::string const & target);
		void	hitYourSelf(std::string const & target);
		void	tellANotFunnyJoke(std::string const & target);
};

#endif