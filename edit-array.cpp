#include <iostream>

/*
  Author: Jianhua Deng
  Course: CSCI-135
  Instructor: Mike Zamansky
  Assignment: Lab Task C
  Description: This program asks user for index and values, then changes value in the array based on their input of index and values.
  If user's index is out of bound, the program stops. However, it wouldn't stop otherwise.
 */

int main() 
{
	//declaring variables
	const int SIZE = 10;
	int myData[SIZE];
	int i, v; // i = index, v = value

	//Fill all index with 1 with a for loop
	for (int i = 0; i < SIZE; i++) {
		myData[i] = 1;
	}//end for loop


	//start of do condition
	do {
		//Print out contents of the array
		for (int i = 0; i < SIZE; i++) {
			std:: cout << myData[i] << " ";
			if (i == SIZE - 1){ //if it's at the end of array, add a new line
				std::cout << std::endl;
			}//end if condition
		}//end for loop

		//Getting index from user
		std::cout << "Input index: ";
		std::cin >> i;

		if (i < SIZE) {
			//Getting value from user
			std::cout << "Input value: ";
			std::cin >> v;
			//plugging values into the array
			myData[i] = v;
		}//end if condition

	} while (i < SIZE);

	
	return 0;
}//end main method