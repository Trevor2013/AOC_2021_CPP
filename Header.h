#pragma once
#include <vector>
#include <iostream>
#include <sstream>



class Submarine {
public:
	int horizontalPosition;
	int depthPosition;
	void position();
	int sweep(std::vector<int> arr);
};


