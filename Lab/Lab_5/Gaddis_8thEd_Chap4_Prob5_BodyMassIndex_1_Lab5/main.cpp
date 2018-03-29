/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 28, 2018, 10:00 PM
 * Lab Assignment: 5
 * Purpose:  Calculates a person's Body Mass Index
 */ 

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>

using namespace std;//namespace I/O stream library created


int main() {
    //Integers for user's weight, height and BMI.
    int weight ,height, bmi;
    
    //Get user's weight
    cout << "Enter you weight in lbs: ";
    cin >> weight;
    //Get user's height
    cout << "Enter your height in inches: ";
    cin >> height;
    
    //Body Mass Index Calculation
    bmi = (weight * 703) / pow(height,2);
    
    //Determines if user is underweight, overweight or optimal weight.
    if (bmi < 18.5){
        cout << "According to the BMI index you are underweight." << endl;
    }
    else
    if (bmi > 25){
        cout << "According to the BMI index you are overweight." << endl;         
    }        
    else
    if (18.5 < bmi<25){
        cout << "According to the BMI index you are optimal weight." << endl;         
    } 
    else
    return 0;
}