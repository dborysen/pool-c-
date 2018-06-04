// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/22 15:41:18 by dborysen          #+#    #+#             //
//   Updated: 2018/05/22 15:41:19 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

const int	Fixed::_fractionalBitsNum = 8;

Fixed::Fixed(void) : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits((1 << this->_fractionalBitsNum) * value);
	return ;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf((1 << this->_fractionalBitsNum) * value);
	return ;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue / (1 << this->_fractionalBitsNum));
}

int		Fixed::toInt(void) const
{
	return (int)this->_fixedPointValue / (1 << this->_fractionalBitsNum);
}

float	Fixed::getRawBits(void) const
{
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;;
	return ;
}

Fixed	&Fixed::operator = (const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
