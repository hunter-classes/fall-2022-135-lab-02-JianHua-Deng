#include <iostream>

//Start of main
int main()
{
    //declaring variable
    int input;

    //Starts of while loop
    while(std::cin >> input){
        if(input > 0 && input < 100){
            std::cout << "Number squared is: " << (input * input) << std::endl;
        }else{
            std::cout << "Please re_enter:";
        }//end else

    }//end while loop


    return 0;
}//end main