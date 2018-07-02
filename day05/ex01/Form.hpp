// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 16:19:34 by dborysen          #+#    #+#             //
//   Updated: 2018/06/19 16:19:35 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Form
{
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char 	*what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char 	*what(void) const throw();
		};

		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &other);
		~Form();

		const Form &operator= (const Form &other);

		const std::string 	&getName(void) const;
		const int			&getGradeToSign(void) const;
		const int			&getGradeToExecute(void) const;
		const bool			&getSignedStatus(void) const;
		void				beSigned(Bureaucrat &burcrt);

	private:
		bool				_isSigned;
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

std::ostream &operator<<(std::ostream & o, const Form &other);

#endif