// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/05/22 16:36:23 by dborysen          #+#    #+#             //
//   Updated: 2018/05/22 16:36:24 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBitsNum;

	public:
		std::string *str;

		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		~Fixed(void);

		Fixed	&operator = (const Fixed &rhs);
		void	operator << (const Fixed &rhs);
		bool	operator > (const Fixed &rhs);
		bool	operator < (const Fixed &rhs);
		bool	operator >= (const Fixed &rhs);
		bool	operator <= (const Fixed &rhs);
		bool	operator == (const Fixed &rhs);
		bool	operator != (const Fixed &rhs);
		Fixed	operator + (const Fixed &rhs);
		Fixed	operator - (const Fixed &rhs);
		Fixed	operator * (const Fixed &rhs);
		Fixed	operator / (const Fixed &rhs);
		Fixed	operator ++();
		Fixed	operator ++(int);
		Fixed	operator --();
		Fixed	operator --(int);
		
		float				getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
