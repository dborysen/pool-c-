// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/21 19:48:05 by dborysen          #+#    #+#             //
//   Updated: 2018/05/21 19:48:06 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Human melee attacking " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
		std::cout << "Human ranged attacking " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
		std::cout << "Human intimidating Shouting " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	typedef void	(Human::*ptrArr)(std::string const &target);

	ptrArr ptr[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string names[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	for (int i = 0; i < 3; i++)
		if (action_name == names[i])
			(this->*(ptr[i]))(target);
}
