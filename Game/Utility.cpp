#include "Utility.h"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;



void Utility::ParseText(string & line, string fileName)
{
	ifstream myfile(fileName);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}
	else cout << "Unable to open file";
}

void Utility::ParseText(int (&matrix)[MAX_MATRIX_WIDTH][MAX_MATRIX_HEIGHT], string fileName)
{
	for (int i = 0;i < MAX_MATRIX_WIDTH; i++) {
		for (int j = 0;j < MAX_MATRIX_HEIGHT; j++) {
			matrix[MAX_MATRIX_WIDTH][MAX_MATRIX_HEIGHT] = MATRIX_UNINITIALIZED_VALUE;
		}
	}
}
