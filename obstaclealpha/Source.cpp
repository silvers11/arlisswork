//Alpha version of obstacle avoidance system for OSU ARLISS Project

#include <string>
#include <stdio.h>

#include <iostream>
#include <fstream>
const int Width = 25;
const int Height = 25;



void Analyze(int(Array)[][Height], int rows, int cols) {

	//prints the array
	for (int x = 0; x < rows; x++) {
		std::cout << std::endl;
		for (int y = 0; y < cols; y++) {

			std::cout << Array[x][y] << " ";
		}
	}



	return;
}

void main() {

	//open file
	
	std::ifstream infile;


	infile.open("test.txt");
	if (infile.is_open()) {
		std::cout << "file opened. \n";
			for (unsigned i = 0; i < Width; i++)
				for (unsigned j = 0; j < Height; j++)
					//read in from file, delimited by , and /n to [i][j]
					int k; // holder so it will compile
		infile.close();
	}
	else {
		std::cout << "file wasn't opened.\n";
	}




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
