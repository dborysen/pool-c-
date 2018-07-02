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
	return ;
}

Fixed::Fixed(const int value)
{
	this->setRawBits((1 << this->_fractionalBitsNum) * value);
	return ;
}

Fixed::Fixed(const float value)
{
	this->_fixedPointValue = roundf((1 << this->_fractionalBitsNum) * value);
	return ;
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
	return ;
}

Fixed::~Fixed()
{
	return ;
}

float		Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue / (1 << this->_fractionalBitsNum));
}

int			Fixed::toInt(void) const
{
	return (int)this->_fixedPointValue / (1 << this->_fractionalBitsNum);
}

float		Fixed::getRawBits(void) const
{
	return (this->_fixedPointValue);
}

void		Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;;
	return ;
}

Fixed		&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed		&Fixed::operator = (const Fixed &rhs)
{
	this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

bool		Fixed::operator > (const Fixed &rhs)
{
	return ( this->_fixedPointValue > rhs._fixedPointValue);
}

bool		Fixed::operator < (const Fixed &rhs)
{
	return (this->_fixedPointValue < rhs._fixedPointValue);
}

bool		Fixed::operator >= (const Fixed &rhs)
{
	return (this->_fixedPointValue >= rhs._fixedPointValue);
}

bool		Fixed::operator <= (const Fixed &rhs)
{
	return (this->_fixedPointValue <= rhs._fixedPointValue);
}

bool		Fixed::operator == (const Fixed &rhs)
{
	return (this->_fixedPointValue == rhs._fixedPointValue);
}

bool		Fixed::operator != (const Fixed &rhs)
{
	return (this->_fixedPointValue != rhs._fixedPointValue);
}

Fixed		Fixed::operator + (const Fixed &rhs)
{
	this->_fixedPointValue += rhs._fixedPointValue;
	return (*this);
}

Fixed		Fixed::operator - (const Fixed &rhs)
{
	this->_fixedPointValue -= rhs._fixedPointValue;
	return (*this);
}

Fixed		Fixed::operator * (const Fixed &rhs)
{
	this->_fixedPointValue =  (this->_fixedPointValue * rhs._fixedPointValue)
										/  (1 << this->_fractionalBitsNum);
	return (*this);
}

Fixed		Fixed::operator / (const Fixed &rhs)
{
	this->_fixedPointValue = (this->_fixedPointValue * (1 << this->_fractionalBitsNum))
															/ rhs._fixedPointValue;
	return (*this);
}

Fixed		Fixed::operator++()
{
	++this->_fixedPointValue;
	return (*this);
}

Fixed		Fixed::operator++(int)
{
	Fixed tmp(*this);

	this->_fixedPointValue++;
	return (tmp);
}

Fixed		Fixed::operator--()
{
	--this->_fixedPointValue;
	return (*this);
}

Fixed		Fixed::operator--(int)
{
	this->_fixedPointValue--;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
