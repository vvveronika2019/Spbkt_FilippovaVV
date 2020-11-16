
#include "inputlib.h"
#include <ctime>
#include <fstream>

void fillfile()
{
	srand(time(0));
	std::ofstream file1("file.txt");
	for (int i = 0; i < 100; i++)
	{
		int g = rand() % 10;
		file1 << g << " ";
	}
	file1.close();
}
