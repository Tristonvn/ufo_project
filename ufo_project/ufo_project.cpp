#include <iostream>
#include "ufo_functions.h"

int main() {

	std::string codeword = "mothership";
	std::string answer = "_________";
	int misses = 0;

	greet();

	while (codeword != answer || misses < 7) {
		misses++;
	}

}
