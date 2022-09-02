#include <iostream>

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
			if (i == SIZE - 1) //if it's at the end of array, add a new line
			{
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