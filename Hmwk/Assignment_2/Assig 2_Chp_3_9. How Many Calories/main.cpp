/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 12, 2018, 12:05 PM
 * Purpose:  HW Assignment 2 - Chp. 3 - 9. How Many calories
 * Find how many calories of cookies you ate
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
    
    //Total Calories per bag 3000
    //Cookies per bag 30
    
    double cookies, calories;
    
    cout << " How many cookies out of the bag of 30 did you eat? ";
    cin >> cookies;
    
    
    calories = cookies * 100;
    
    cout << " The amount of calories consumed were " << calories <<endl;

    return 0;
}