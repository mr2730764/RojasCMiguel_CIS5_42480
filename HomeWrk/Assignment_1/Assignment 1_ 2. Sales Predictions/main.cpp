/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 13, 2018, 12:05 PM
 * Purpose:  Military Budget
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const float MLLN=1.0e06f; //Million
const int   PRCNT=100;    //Conversion for percent

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    
    double eastSale,totSale,prcntEast;

    //Initial Variables
    totSale=8.6*MLLN;
    prcntEast=.58*PRCNT;
    
    //Map/Process Inputs to Outputs
    eastSale=totSale*prcntEast;

    //Display Outputs
    
    cout << setprecision(1) << fixed;
    cout<<"Total East Sales = "<<eastSale<< endl;
    
    //Exit program!
    return 0;
}