// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/24 15:12:39 by dborysen          #+#    #+#             //
//   Updated: 2018/05/24 15:12:40 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>

class FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);
		~FragTrap(void);

		FragTrap &operator=(const FragTrap &other);

		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
	private:
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int 	_energyPoints;
		unsigned int	_maxEnergyPoints;
		int				_level;
		int				_maleeAttackDamage;
		int				_rangedAttackDamage;
		int				_armorDamageReduction;
		int				_hitByChickenDamage;
		int				_peeOnItDamage;
		int				_cussOutItDamage;
		std::string 	_name;

		void	meleeAttack(std::string const & target);
		void	rangedAttack(std::string const & target);
		void	hitByChicken(std::string const & target);
		void	peeOnIt(std::string const & target);
		void	cussOutIt(std::string const & target);

};

#endif