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

void		Bureaucrat::signForm(const bool &status, std::string signedFormName,
									std::string reasonNotSignedForm) const
{
	if (status == true)
	{
		std::cout << this->_name << " signs " << signedFormName << " form."
		<< std::endl;
	}
	else
	{
		std::cout << this->_name << " cannot sign " << signedFormName
		<< " form, because " << reasonNotSignedForm << std::endl;
	}
	return ;
}

// void		Bureaucrat::signForm(const Form &frm) const
// {
// 	if (frm.getSignedStatus() == true)
// 		std::cout << this->_name << " signs " << frm.getName() << " form."
// 			<< std::endl;
// 	else
// 		std::cout << this->_name << " cannot sign " << frm.getName()
// 		<< " form, because "  << std::endl;
// 	return ;
// }

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &other)
{
	this->_grade = other._grade;
	return (*this);
}

std::ostream &operator<<(std::ostream & os, const Bureaucrat &other)
{  
	os << other.getName() << ", bureaucrat grade " << other.getGrade();
    return os;  
}
