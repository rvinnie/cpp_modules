#include "Karen.hpp"

int main(int argc, char **argv) {
	Karen karen = Karen();

	if (argc != 2) {
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
	karen.complain(argv[1]);
	return (0);
}