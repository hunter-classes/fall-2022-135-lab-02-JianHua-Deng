#include <iostream>
#include "funcs.h"
/*
  Author: Jianhua Deng
  Course: CSCI-135
  Instructor: Mike Zamansky
  Assignment: Lab Task B
  Description: Asked to print interval using method based on parameter L and U
 */

void print_interval(int L, int U) {
	//start of for loop
	for (int i = L; i < U; i++) {
		std::cout << i << " ";
	}//end for loop

}//End print_interval method