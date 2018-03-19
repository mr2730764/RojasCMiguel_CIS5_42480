/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 12, 2018, 12:05 PM
 * Purpose:  HW Assignment 2 - Chp. 3 - 11. Automobile cost
 * Find the cost to maintain an automobile
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

    double loan, oil, insur, gas, tire, maint, month, year;
    
    //individual expenses
    cout << " How much is your monthly loan? ";
    cin >> loan;

    cout << " How much do you spend a month on gas? ";
    cin >> gas;
    
    cout << " How much is your monthly oil change? ";
    cin >> oil;
    
    cout << " How much is your monthly insurance cost? ";
    cin >> insur;
    
    cout << " How much is your monthly tire change? ";
    cin >> tire;
    
    cout << " How much is your monthly maintenance? ";
    cin >> maint;
    
    //Total expenses
    month = loan + gas + oil + insur + tire + maint;
    year = month * 12;

    cout << "Total monthly automobile expenses $" << month << endl;
    cout << "Total yearly automobile expenses $" << year << endl;


    return 0;
}