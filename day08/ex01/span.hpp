// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/29 16:36:18 by dborysen          #+#    #+#             //
//   Updated: 2018/06/29 16:36:18 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <stdexcept>
# include <algorithm>

class Span
{
    public:
        Span();
        Span(unsigned int array_size);
        Span(const Span &other);
        ~Span();

        Span &operator=(const Span &other);

        int     			shortestSpan() const;
		int					longestSpan() const;
		void				addNumber(int new_num);

	private:
        std::vector<int>	_myVector;
		unsigned int		_array_size;
};

#endif