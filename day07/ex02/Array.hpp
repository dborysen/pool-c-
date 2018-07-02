// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/27 16:16:26 by dborysen          #+#    #+#             //
//   Updated: 2018/06/27 16:16:26 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
	public:
		class ElementOutOfLimitException : public std::exception
		{
			public:
				virtual const char 	*what(void) const throw();
		};
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();

		Array	&operator=(const Array &other);
		T		operator[](unsigned int n);

		int	size() const;

	private:
		T				*_array;
		unsigned int	_size;
};

template <typename T>
Array<T>::Array() : _size(0)
{
	// this->_array = new T[this->_size];
	this->_array = nullptr;
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < n; i++)
		this->_array[i] = 0;
	return ;
}

template <typename T>
Array<T>::Array(const Array &other)
{
	(*this) = other;
	return ;
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_array;
	return ;
}

template <typename T>
const char	*Array<T>::ElementOutOfLimitException::what() const throw()
{
	return ("ERROR: Element out of limit");
}

template <typename T>
int	Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
T	Array<T>::operator[](unsigned int n)
{
	if (n > this->_size || this->_array == nullptr)
		throw Array<T>::ElementOutOfLimitException();
	return (this->_array[n]);
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this->_array != nullptr)
		delete [] this->_array;
	this->_array = new T[other.size()];
	this->_size = other.size();
	return (*this);
}

#endif