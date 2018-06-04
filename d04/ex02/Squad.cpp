// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/30 11:28:39 by dborysen          #+#    #+#             //
//   Updated: 2018/05/30 11:28:40 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Squad.hpp"

Squad::Squad(void) : _units(nullptr), _unitNum(0)
{
	return ;
}

Squad::Squad(const Squad &other)
{
	*this = other;
	return ;
}

Squad::~Squad()
{
	t_list *tmp;

	while (this->_units != NULL)
	{
		tmp = this->_units->next;
		delete this->_units->instanse;
		delete this->_units;
		this->_units = tmp;
	}
	return ;
}

int		Squad::getCount() const
{
	t_list	*tmpUnits;
	int 	i;

	i = 0;
	tmpUnits = this->_units;
	if (tmpUnits != NULL)
		while (tmpUnits != NULL)
		{
			tmpUnits = tmpUnits->next;
			i++;
		}
	return (i);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	t_list	*tmpUnits;
	int		i;

	i = 0;
	tmpUnits = this->_units;
	while (tmpUnits != nullptr)
	{
		if (i == n)
			return (tmpUnits->instanse);
		tmpUnits = tmpUnits->next;
		i++;
	}
	return (nullptr);
}

int				Squad::push(ISpaceMarine *marine)
{
	t_list *newMarine;
	t_list *tmpUnits;

	tmpUnits = this->_units;
	newMarine = new t_list;
	newMarine->instanse = marine;
	newMarine->next = nullptr;
	if (tmpUnits == nullptr)
		this->_units = newMarine;
	else
	{
		while (tmpUnits->next != nullptr)
			tmpUnits = tmpUnits->next;
		tmpUnits->next = newMarine;
	}
	return (this->getCount());
}

Squad	&Squad::operator = (const Squad &other)
{
	t_list *tmpUnits;

	/* deleting all previous units */
	if (this->getCount() != 0)
		while (this->_units != NULL)
		{
			tmpUnits = this->_units->next;
			delete this->_units->instanse;
			delete this->_units;
			this->_units = tmpUnits;
		}
	/* copying units */
	tmpUnits = other._units;
	while (tmpUnits != nullptr)
	{
		this->push(tmpUnits->instanse->clone());
		tmpUnits = tmpUnits->next;
	}
	return (*this);
}