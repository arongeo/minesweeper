#include <iostream>
#include <string>
#include <cstdlib>
#include "config.h"

void print_help() {
	std::cout << "MINESWEEPER" << std::endl;
	std::cout << "Usage:" << std::endl << "minesweeper <mode> <custom width> <custom height>" << std::endl;
	std::cout << "Modes:" << std::endl;
	std::cout << "Beginner: 9x9 - 10 mines" << std::endl;
	std::cout << "Intermediate: 16x16 - 40 mines" << std::endl;
	std::cout << "Advanced: 30x16 - 99 mines" << std::endl;
	std::cout << "Custom: Specify the width and the height after setting the mode to custom. Mines will be calculated accordingly" << std::endl;
}

int main(int argc, char** argv) {
	int width, height;
	if (argc >= 2) {
		if (std::string(argv[1]) == "beginner") {
			height = BEGINNER_FIELD_HEIGHT;
			width = BEGINNER_FIELD_WIDTH;
		}
		if (std::string(argv[1]) == "intermediate") {
			height = INTERMEDIATE_FIELD_HEIGHT;
			width = INTERMEDIATE_FIELD_WIDTH;
		}
		if (std::string(argv[1]) == "advanced") {
			height = ADVANCED_FIELD_HEIGHT;
			width = ADVANCED_FIELD_WIDTH;
		}
		if (std::string(argv[1]) == "custom") {
			for (int i = 2; i<4; i++) {
				if (atoi(argv[i]) <= 0) {
					std::cerr << "ERROR: Number out of range \n";
				}
			}
			height = atoi(argv[3]);
			width = atoi(argv[2]);
		}
	} else {
		print_help();
	}
	std::cout << width << "x" << height << std::endl;
	return 0;
}
