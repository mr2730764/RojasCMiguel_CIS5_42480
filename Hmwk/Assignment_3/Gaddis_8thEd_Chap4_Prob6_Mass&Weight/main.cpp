/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 12, 2018, 12:05 PM
 * Purpose:  Calculates a person's Body Mass Index
 */ 

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int weight, mass;
    
    cout << "Enter an object's mass to calculate it's weight in newtons " << endl;
    cin >> mass;
    
    weight = mass * 9.8;
    
    if(weight > 1000){
         cout << "object is too heavy." << endl;
    }
    else
    if(weight < 10){
        cout << "object is too light." << endl;
    }  
    else
    cout << "The object weighs " << weight << " newtons" << endl;
    return 0;
}