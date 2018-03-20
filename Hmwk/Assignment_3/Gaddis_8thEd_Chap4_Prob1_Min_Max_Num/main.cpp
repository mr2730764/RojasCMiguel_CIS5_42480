/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 12, 2018, 12:05 PM
 * Purpose:  Find Which number is larger
 * Gaddis_8thEd_Chap4_Prob1_Min_Max_Num
 */ 

//System Libraries
#include <iostream> //I/O Library -> cout,endl

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int a, b;
    
    cout << "Enter two Numbers " << endl;
    
    cout <<"Enter first Number ";
    cin >> a;
    
        cout <<"Enter second Number ";
    cin >> b;

    if ( a < b){
        cout << a << " is smaller." << endl;
    }
    if ( b < a ){
        cout << b << " is smaller." << endl;
    }
    
        if ( a > b ){
        cout << a << " is larger." << endl;
    }
    if ( b > a ){
        cout << b << " is larger." << endl;
    }
    return 0;
}