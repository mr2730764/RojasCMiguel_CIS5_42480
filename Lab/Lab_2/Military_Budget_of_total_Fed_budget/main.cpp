/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on February 25, 2018, 2:30 PM
 * Purpose:  Calculate Military budget as a Percent of the Federal budget
 *           
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const float TRLLN=1.0e12f;//One Trillion
const float BLLN=1.0e09f; //One Billion
const int   PERCNT=100;    //Percent conversion

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float miltBgt,fedBgt,pcntMil;
    //Initial Variables
    miltBgt=639*BLLN;
    fedBgt=4.1*TRLLN;
    //Map/Process Inputs to Outputs
    pcntMil=miltBgt/fedBgt*PERCNT;
    //Display Outputs
    cout<<"Military Budget = $"<<miltBgt/BLLN<<" Billion"<<endl;
    cout<<"Federal Budget = $"<<fedBgt/TRLLN<<" Trillion"<<endl;
    cout<<"Military Percentage = "<<pcntMil<<"%"<<endl;
    
    //Exit program!
    return 0;
}