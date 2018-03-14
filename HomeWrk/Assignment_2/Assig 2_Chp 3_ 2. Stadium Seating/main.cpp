/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 12, 2018, 12:05 PM
 * Purpose:  HW Assignment 2 - Chp. 3 - 2. Stadium Seats
 * Find the total income generated from ticket sales.
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
    double classA, classB, classC, total;
    
    //Get Sales of each Type of Ticket.
    cout << "How many Class A tickets sold? ";
    cin >> classA;

    cout << "How many Class B tickets sold? ";
    cin >> classB;
    
    cout << "How many Class C tickets sold? ";
    cin >> classC;
    
    //Calculate total sales
    total = classA * 15 + classB * 12 + classC * 9;
    
    //Display the Sales figures
    cout << "\nSales Figures\n";
    cout << "-------------\n";
    cout << setprecision(2) << fixed;
    cout << "total Income Generated $" << setw(5) << total <<endl;
    return 0;
}