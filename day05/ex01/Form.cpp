// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 16:19:29 by dborysen          #+#    #+#             //
//   Updated: 2018/06/19 16:19:30 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"

Form::Form() : _isSigned(false), _name(""), _gradeToSign(0), _gradeToExecute(0)
{
	return ;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
			_isSigned(false), _name(name), _gradeToSign(gradeToSign),
			_gradeToExecute(gradeToExecute)
{
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw Form::GradeTooHighException();
	else if (_gradeToExecute > 150 || _gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other) :
			_name(other.getName()), _gradeToSign(other.getGradeToSign()),
			_gradeToExecute(other.getGradeToExecute())
{
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw Form::GradeTooHighException();
	else if (_gradeToExecute > 150 || _gradeToExecute > 150)
		throw Form::GradeTooLowException();
	*this = other;
	return ;
}

Form::~Form()
{
	return ;
}

const int	&Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

const int	&Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

const std::string 	&Form::getName(void) const
{
	return (this->_name);
}

const bool			&Form::getSignedStatus(void) const
{
	return (this->_isSigned);
}

void				Form::beSigned(Bureaucrat &burcrt)
{
	if (burcrt.getGrade() <= this->_gradeToSign)
	{
		this->_isSigned = true;
		burcrt.signForm(true, this->_name, "");
	}
	else
	{
		burcrt.signForm(false, this->_name, "grade is too low.");
		throw Form::GradeTooLowException();	
	}
}

const char 			*Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char 			*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const Form 			&Form::operator= (const Form &other)
{
	this->_isSigned = other._isSigned;
	return (*this);
}

std::ostream 		&operator<<(std::ostream & os, const Form &other)
{  
	os << "Form "<< other.getName() << ": grade to sign is " <<
	other.getGradeToSign() << ", grade to execute is " <<
	other.getGradeToExecute();
	if (other.getSignedStatus() == true)
		os << ", form is signed.";
	else
		os << ", form is unsigned.";
    return os;  
}