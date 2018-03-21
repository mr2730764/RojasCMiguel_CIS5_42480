/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 20, 2018, 12:05 PM
 * Purpose: The coin game - add coins to equal one dollar.
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
    int nickel, dime, quarter, pennies;
    double dollar, nicV, dimeV, quartV, penV, total;
    
    // Get coins from use        
    cout << "Enter the number of pennies: ";
    cin >> pennies;
    
    cout << "Enter the number of nickels: ";
    cin >> nickel;
    
    cout << "Enter the number of dimes: ";
    cin >> dime;
    
    cout << "Enter the number of quarters: ";
    cin >> quarter;
    
    //assign value to each coin
    dollar = 100;
    nicV = 5 * nickel;
    dimeV = 10 * dime;
    quartV = 25 * quarter;
    penV = 1 * pennies;
    
    //sum of all coins
    total = nicV + dimeV + quartV + penV;
    
    if (total > dollar){
        cout << "You lose!!! The amount you entered was more than one dollar." << endl;
    }
    else
    if (total < dollar){
        cout << "You lose!!! The amount you entered was less than one dollar." << endl;
    }
    else
    if (total == dollar){
        cout << "Congratulations!!! you win the dollar game!" << endl;
    }
        
       
    return 0;
}