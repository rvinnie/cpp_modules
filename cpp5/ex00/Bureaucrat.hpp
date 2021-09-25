#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat {

public:
	Bureaucrat();
	Bureaucrat(const std::string & name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const & other);
	Bureaucrat & operator=(Bureaucrat const & other);
	void increaseGrade();
	void decreaseGrade();
	const std::string	getName() const;
	int	getGrade() const;
	class GradeTooHighException : public std::exception {
		
		// protected:
		// 	GradeTooHighException();
		// 	putException();

		protected:
			std::string text;
	};
	class GradeTooLowException : public std::exception {
		
		// protected:
		// 	GradeTooHighException();
		// 	putException();

		protected:
			std::string text;
	};

private:
	const std::string	_name;
	int					_grade;
	void				checkGrade();

};

std::ostream & operator<<(std::ostream & os, Bureaucrat const & bureaucrat);

#endif
