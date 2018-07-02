// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: dborysen <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/18 13:11:17 by dborysen          #+#    #+#             //
//   Updated: 2018/06/18 13:11:17 by dborysen         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
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

		Bureaucrat(void);
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();

		Bureaucrat &operator= (const Bureaucrat &other);

		const std::string	&getName() const;
		const int			&getGrade() const;
		void				incrementGrade();
		void				decrementGrade();

	private:
		const std::string	_name;
		int					_grade;
};

std::ostream &operator<<(std::ostream & o, const Bureaucrat &other);

#endif
