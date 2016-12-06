#pragma once

#define MAX_MATRIX_WIDTH 1000
#define MAX_MATRIX_HEIGHT 1000
#define MATRIX_UNINITIALIZED_VALUE -100

#include <string>
using namespace std;


class Utility
{
public:
	static void ParseText(string &line, string fileName);
	static void ParseText(int (&matrix)[MAX_MATRIX_WIDTH][MAX_MATRIX_HEIGHT], string fileName);
};