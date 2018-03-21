/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 20, 2018, 12:05 PM
 * Purpose: Calculates seconds in number of minutes, hours, and days
 */ 

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>
#include <iomanip>

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int seconds; // integers for each numeric value. 
    double minute, hour, day, minCalc, hourCalc, dayCalc;
    
    minute = 60;
    hour = 3600;
    day = 86400;
    
    cout << setprecision(5);//sets a precision of 2 decimals
    
    //Calculations
    cout << "Enter the amount of seconds you want calculated: " << endl;
    cin >> seconds; //gets the seconds from user
    
    minCalc =  seconds / minute;
    hourCalc = seconds / hour;
    dayCalc = seconds / day;
    
    //set precision
    cout << setprecision(2) << fixed;
    
    if(seconds < 3600){
         cout << "There are " << minCalc << " minutes in " << seconds << " seconds." << endl;
    }
    else
    if(seconds < 86400){
         cout << "There are " << hourCalc << " hours in " << seconds << " seconds." << endl;
    }
    else
    if(seconds >= 86400){
         cout << "There are " << dayCalc << " days in " << seconds << " seconds." << endl;
    }
    else       
    return 0;
}