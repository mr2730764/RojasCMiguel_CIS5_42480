/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 12, 2018, 12:05 PM
 * Purpose:  HW Assignment 2 - Chp. 3 - 1. Miles Per Gallon
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
    double num1, num2, perGallon;
    cout << "How much many gallons of gas can you car hold? ";
    cin >> num1;
    
    cout << "How many miles can your car drive on a full tank? ";
    cin >> num2;
    
    perGallon = num2 / num1;
    
    cout << "Your car gets " << perGallon << " miles per gallon." << endl;
    return 0;
}