#include "Bureaucrat.hpp"

int main() {
	try
	{
		Bureaucrat max("Max", 10);
		max.increaseGrade();
		max.increaseGrade();
		std::cout << max << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error!" << std::endl;
	}
	
}