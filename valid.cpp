#include <iostream>
#include <cmath>
/*
  Author: Jianhua Deng
  Course: CSCI-135
  Instructor: Mike Zamansky
  Assignment: Lab Task B
  Description: This program asks user to input values within a given range of 0 < input < 100.
  If user's input suffice such condition, it would print the input squared, otherwise, it would asks user for inputs again
 */

//Start of main
int main()
{
    //declaring variable
    int input;

    //Starts of while loop
    while(std::cin >> input){
        if(input > 0 && input < 100){
            std::cout << "Number squared is: " << pow(input,2) << std::endl; //Gives the result of its input squared
        }else{
            std::cout << "Please re_enter:";
        }//end else

    }//end while loop

    
    return 0;
}//end main