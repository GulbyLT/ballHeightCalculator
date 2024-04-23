#include <iostream>

void printHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0)
	{
		std::cout << "At " << seconds << " seconds, the ball is at height " << ballHeight << " meters!" << std::endl;
	}
	else
	{
		std::cout << "At " << seconds << " seconds, the ball is on the floor!!" << std::endl;
	}
}


unsigned int inputHeight()
{
	start:
	std::cout << "Input the height of the tower:  \n";
	int height;
	std::cin >> height;
	if (height < 0) {
		std::cout << "Please input a positive number! \n";
		goto start;
	}
	else
		return static_cast<unsigned int>(height);
}


double ballHeight(double inputHeight, int seconds)
{
	const double gravity = 9.8;
	double fallDistance = gravity * (seconds * seconds) / 2.0;
	double ballHeight = inputHeight - fallDistance;
	printHeight(ballHeight, seconds);
	if (ballHeight < 0)
	{
		return 0;
	}
	else
	{
		return ballHeight;
		
	}
	
}



int main()
{
	unsigned int height = inputHeight();
	std::cout << "Your tower's height is " << height << " meters! \n";
	int seconds = 0;
	while (ballHeight(height, seconds) > 0.0 )
	{
		
		seconds++;


	}
	return 0;
}