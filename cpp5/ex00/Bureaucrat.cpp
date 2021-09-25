#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("None"), _grade(150) {
	checkGrade();
}

Bureaucrat::Bureaucrat(const std::string & name, int grade) : _name(name), _grade(grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const & other) : _name(other.getName()), _grade(other.getGrade()) {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & other) {
	_grade = other.getGrade();
	return (*this);
}

void Bureaucrat::increaseGrade() {
	_grade--;
	checkGrade();
}

void Bureaucrat::decreaseGrade() {
	_grade++;
	checkGrade();
}

void Bureaucrat::checkGrade() {
	if (_grade > 150)
		throw GradeTooLowException();
	else if (_grade < 1)
		throw GradeTooHighException();
}

const std::string	Bureaucrat::getName() const {
	return(_name);
}

int	Bureaucrat::getGrade() const {
	return(_grade);
}

std::ostream & operator<<(std::ostream & os, Bureaucrat const & bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}
