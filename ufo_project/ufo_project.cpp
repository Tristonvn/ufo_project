#include <iostream>
#include <string>
#include "ufo_functions.h"

int main() {

	std::string codeword = "mothership";
	std::string answer = "__________";
	int misses = 0;
	std::vector<char> incorrect = {};
	bool guess = false;
	char letter;

	greet();

	while (answer != codeword && misses < 7) {

		display_misses(misses);
		displayStatus(incorrect, answer);
		std::cout << "\nPlease enter your guess: ";
		std::cin >> letter;
		for (unsigned int i = 0; i < codeword.length(); i++)
		{
			if (codeword[i] == letter) {
				answer[i] = letter;
				guess = true;
			}
		}

		if (guess)
		{
			std::cout << "Correct!\n";
		}
		else {
			incorrect.push_back(letter);
			std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
			misses++;
		}

	}

	end_game(answer, codeword);
}
