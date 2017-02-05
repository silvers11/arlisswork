//Alpha version of obstacle avoidance system for OSU ARLISS Project


#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>
const int Width = 25;
const int Height = 25;



void Analyze(int(Array)[][Height], int rows, int cols) {

	for (int x = 0; x < rows; x++) {
		std::cout << std::endl;
		for (int y = 0; y < cols; y++) {

			std::cout << Array[x][y] << " ";
		}
	}
			return;
		}

void main() {

	int Image_Array[Width][Height];

	for (int x = 0; x < Width; x++)

		for (int y = 0; y < Height; y++) {

			Image_Array[x][y] = x;
		}


	std::cout << "test\n";
	Analyze(Image_Array, Width, Height);


	std::cin.get();
	return;
}
