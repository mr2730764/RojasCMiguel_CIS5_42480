/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 12, 2018, 12:05 PM
 * Purpose:  HW Assignment 2 - Chp. 3 - 3. Test Average
 * Find the average of 5 test scores
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
    double test1, test2, test3, test4, test5, total;
    
    //Get test scores
    cout << "What was the score on test 1? ";
    cin >> test1;

    cout << "What was the score on test 2? ";
    cin >> test2;
    
    cout << "What was the score on test 3? ";
    cin >> test3;
    
    cout << "What was the score on test 4? ";
    cin >> test4;
        
    cout << "What was the score on test 5? ";
    cin >> test5;
    
    //Calculate total scores
    total = (test1 + test2 + test3 + test4 + test5) /5;
    
    //Display the average score

    cout << setprecision(2) << fixed;
    cout << "The Average Test Score is " << total <<endl;
    return 0;
}