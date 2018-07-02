// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/18 13:11:20 by dborysen          #+#    #+#             //
//   Updated: 2018/06/18 13:11:21 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(0)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : 
									_name(name), _grade(grade)
{
	if (this->getGrade() < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (this->getGrade() > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName())
{
	*this = other;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

void				Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return ;
}

void				Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

const std::string	&Bureaucrat::getName() const
{
	return (this->_name);
}

const int			&Bureaucrat::getGrade() const
{
	return (this->_grade);
}

const char 	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char 	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &other)
{
	this->_grade = other.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream & os, const Bureaucrat &other)
{  
	os << other.getName() << ", bureaucrat grade " << other.getGrade();
    return (os);  
}
