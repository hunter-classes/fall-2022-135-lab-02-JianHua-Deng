#include <iostream>
/*
  Author: Jianhua Deng
  Course: CSCI-135
  Instructor: Mike Zamansky
  Assignment: Lab Task D
  Description: This program adds number in the way of fibonacci
 */

int main() {
	//declaring variables
	const int SIZE = 60;
	int fibonacci[SIZE];
	
	fibonacci[0] = 0;
	fibonacci[1] = 1;

	//for loop
	for (int i = 0; i < SIZE; i++) {
		if (i < 2) {
			std::cout << fibonacci[i] << std::endl;
		}else {
			fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
			std::cout << fibonacci[i] << std::endl;
		}//end else
	}//end for loop

	return 0;
}//end main

//As the number gets larger, some of the number started to become negative. 
//I am actually not sure as to the reason why this is happening. Maybe because as the value gets larger, the computer would start recognizing it as a negative due to its perception on numbers?