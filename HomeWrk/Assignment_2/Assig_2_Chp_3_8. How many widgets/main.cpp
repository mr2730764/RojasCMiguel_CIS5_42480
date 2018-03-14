/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 12, 2018, 12:05 PM
 * Purpose:  HW Assignment 2 - Chp. 3 - 8. How many widgets
 * Find the amount of widgets per pallet
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

    double pallet, widget,fullPall, pckWidget;
    
    cout << "How much does the pallet on it's own weigh? ";
    cin >> pallet;
    
    cout << " How much does the pallet with the widgets weigh? ";
    cin >> fullPall;
    
    //widget weight
    widget = 12.5;
    
    //Widget weight on pallet
    pckWidget =(fullPall - pallet) * widget;
    
    cout<< "Total wieght of widget per pallet = " << pckWidget << endl;
            

    return 0;
}