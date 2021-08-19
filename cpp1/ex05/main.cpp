#include "Karen.hpp"

int main() {
	Karen karen = Karen();
	karen.complain("DEBUG");
	std::cout << "=-=-=-=-=-=-=-=-=" << std::endl;
	karen.complain("ERROR");
	std::cout << "=-=-=-=-=-=-=-=-=" << std::endl;
	karen.complain("LOL");
	return (0);
}