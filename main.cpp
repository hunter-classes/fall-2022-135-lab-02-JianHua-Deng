#include <iostream>
#include "funcs.h"

/*
  Author: Jianhua Deng
  Course: CSCI-135
  Instructor: Mike Zamansky
  Assignment: Lab Task B, asked to print interval using method based on parameter L and U
  Description: This is the main file that will execute method within funcs.cpp
  */

int main() 
{	
	
	print_interval(2, 9);
	std::cout << std::endl;

	print_interval(-10, 5);
	std::cout << std::endl;

	print_interval(90, 110);
	std::cout << std::endl;

	print_interval(40, 60);
	std::cout << std::endl;

	print_interval(-12, 0);
	std::cout << std::endl;

	return 0;
}//end main