/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 12, 2018, 12:05 PM
 * Purpose:  HW Assignment 2 - Chp. 3 - 5. Male and Female Avgerage
 * Find the class male and female avg
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    double male, female,total;
    
    //Find out how many males and females
    cout << "How many males in class? ";
    cin >> male;
    
    cout << "How many females in class? ";
    cin >> female;
    
    //Calculate total students
    total = male + female;
    
    cout << setprecision(2) << fixed;
    cout << "Percentage of Males " << male / total *100 <<"%" <<endl;
    cout << "Percentage of Females " << female / total *100 <<"%" <<endl;
    return 0;
}