/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 20, 2018, 12:05 PM
 * Purpose: Calculates seconds in number of minutes, hours, and days
 */ 

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>

using namespace std;//namespace I/O stream library created

//Execution Begins Here!
int main() {
    int secs;// integer for user's seconds
    float minute, //value for minutes
          hour, //value for hours
          day, //value for days
          minCalc,//Calculation for minutes
          hrCalc, //Calculation for hours
          dayCalc; //Calculation for days
    
    //60 seconds equal one minute.
    minute = 60;
    //3600 seconds equal one hour.
    hour = 3600;
    //86400 seconds equal one day.
    day = 86400;
    
    //Request number of seconds from User
    cout << "Enter the amount of seconds you want calculated: " <<endl;
    cin >> secs; //gets the seconds from user.
    
    //Calculations
    minCalc =  secs / minute;
    hrCalc = secs / hour;
    dayCalc = secs / day;
    
    //set precision of two decimals
    cout << setprecision(2) << fixed;
    //Inform user how many minutes, hours, or days are in given seconds.
    if(secs < 3600){
         cout << "There are " << minCalc << " minutes in " << secs << " seconds." << endl;
    }
    else
    if(secs < 86400){
         cout << "There are " << hrCalc << " hours in " << secs << " seconds." << endl;
    }
    else
    if(secs >= 86400){
         cout << "There are " << dayCalc << " days in " << secs << " seconds." << endl;
    }
    else       
    return 0;
}