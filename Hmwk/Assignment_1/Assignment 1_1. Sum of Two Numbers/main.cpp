/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 4, 2018, 12:05 PM
 * Purpose:  Assignment 1
 * Tony Gaddis Chapter 2 - 1. Sum of Two numbers
 *           To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    double  cat = 50,  // variable one
            dog = 100, //variable two
            total; //to hold total
    //Initial Variables
    
    //Map/Process Inputs to Outputs
    total = dog + cat;
    //Display Outputs
    cout << "the sum of variable one and two is " << total << endl;
    //Exit program!
    return 0;
}