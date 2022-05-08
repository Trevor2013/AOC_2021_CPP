#include "Header.h"

// Sweep depths ahead of submarine and determine how many times the depth increases from a previous measurement
int Submarine::sweep(std::vector<int> arr)
{
	int oldval = arr[0];
	std::cout << oldval << std::endl;
	int count = 0;
	for (int i = 1; i < arr.size(); i++)
	{
		std::cout << arr[i] << std::endl;
		if (arr[i] > oldval)
		{
			count += 1;
		}
		oldval = arr[i];
	}

	return count;
}

// Change position of submarine
//
// Use commands: "forward", "down", or "up" followed by a space and an integer magnitude.
void Submarine::position()
{
	std::string input;
	std::string direction;
	int pos = 0;
	std::cout << "Enter Positioning Instruction: ";
	std::getline(std::cin, input);
	std::cout << std::endl << "Input was: " << input << std::endl;
	std::stringstream ss(input);

	if (ss >> direction)
	{
		std::cout << "Direction input is: " << direction << std::endl;
	}
	else
	{
		std::cout << "Incorrect input format. Try again" << std::endl;
		position();
	}
	while (ss.peek() == ' ') ss.ignore();
	if (ss >> pos)
	{
		std::cout << "Magnitude input is: " << std::to_string(pos) << std::endl;
	}
	else
	{
		std::cout << "Magnitude must be a positive integer. Try again." << std::endl;
		position();
	}

	if (direction == "forward") horizontalPosition += pos;
	else if (direction == "down") depthPosition -= pos;
	else if (direction == "up")	depthPosition += pos;
	else
	{
		std::cout << "Direction entered is not valid. Try again." << std::endl;
		position();
	}
}