/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 15th, 2018, 11:55 AM
 * Purpose:  Sales Tax on Item One
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std; //namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float   itemOne,    //price of Purchase in $'s
            countyTax,  //County Tax
            stateTax,   //State tax
            totalTax;   //Total tax on item

    //Initial Variables
    itemOne = 95; //Sale price
    countyTax = 0.02; //County tax in %
    stateTax = 0.04; //Sate Tax in %

    //Map/Process Inputs to Outputs
    totalTax = (itemOne * countyTax) + (itemOne * stateTax);

    cout << "total Tax on item One = $" << totalTax << endl;
    cout << "Total amount paid after tax $" << totalTax + itemOne << endl;

    //Exit program!
    return 0;
}