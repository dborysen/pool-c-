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

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBitsNum = 8;

	public:
		std::string *str;
		
		Fixed(void);
		Fixed(const Fixed &other);		
		~Fixed(void);

		Fixed	&operator = (const Fixed &other);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif