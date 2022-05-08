#include "Header.h"
#include <iostream>

std::vector<int> depths{ 50, 60, 70, 40, 30, 50, 80, 100, 120, 110 };

int main()
{
	int c = sweep(depths);
	std::cout << c;

}