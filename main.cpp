#include "Header.h"
#include <iostream>

std::vector<int> depths{ 50, 60, 70, 40, 30, 50, 80, 100, 120, 110 };

int main()
{
	Submarine sub;
	sub.horizontalPosition = 0;
	sub.depthPosition = 0;
	int c = sub.sweep(depths);

    sub.position();

	std::cout << "Current horizontal position is: " << std::to_string(sub.horizontalPosition) << std::endl;
	std::cout << "Current depth is: " << std::to_string(sub.depthPosition) << std::endl;

}