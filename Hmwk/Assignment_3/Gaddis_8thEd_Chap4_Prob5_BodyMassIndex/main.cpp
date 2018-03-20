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
    int weight, height, bmi;
    
    cout << "Enter you weight in lbs ";
    cin >> weight;
    
    cout << "Enter your height in inches ";
    cin >> height;
    
    bmi = (weight * 703) / pow(height,2);
    
    if (bmi < 18.5){
        cout << "According to the BMI index you are underweight." << endl;
    }
    else
    if (bmi > 25){
        cout << "According to the BMI index you are overweight." << endl;         
    }        
    else
    if (18.5<bmi<25){
        cout << "According to the BMI index you are optimal weight." << endl;         
    } 
    else
    return 0;
}