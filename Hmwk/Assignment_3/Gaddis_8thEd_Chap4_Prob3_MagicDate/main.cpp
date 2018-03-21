/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 20, 2018, 12:05 PM
 * Purpose:  Determines if your date is magic
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
    int month, day, year, magic; // integers for each numeric value. 
    
    cout << "Enter a month in numeric form: " << endl;
    cin >> month; //gets the month
    
    cout << "Enter the day of that month: " << endl;
    cin >> day; // gets the date
    
    cout << "Enter the two digit year: " << endl;
    cin >> year; // gets the year
    
    magic = month * day;
    
    //magic must equal year to be a magic date
    if(magic == year){
         cout << "This date is MAGIC!!!" << endl;
    }
    else
    if(magic != year){
        cout << "This date is not magic...sorry!" << endl;
    }

}