/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 12, 2018, 12:05 PM
 * Purpose:  HW Assignment 2 - Chp. 3 - 10. How Much Insurance
 * Find the minimum amount of insurance you should buy.
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

    double cost, insurance;
    
    //Amount to replace structure
    
    cout << " How much would it cost to replace structure in $ ? ";
    cin >> cost;
    
    insurance = cost * .8;
     
    //Minimum insurance
    cout << setprecision(2) << fixed;
    cout << " The minimum insurance you should buy for your structure is $" << insurance << endl;

    return 0;
}