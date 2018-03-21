/* 
 * File:   main.cpp
 * Author: Miguel Rojas Calderon
 * Created on March 20, 2018, 12:05 PM
 * Purpose:  Determines the area of the bigger Triangle.
 */ 

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>

using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int width1, width2,length1, area1, length2, area2;
    
    cout << "Enter the length of the first rectangle: " << endl;
    cin >> length1;
    cout << "Enter the width of the first rectangle: " << endl;
    cin >> width1;
    
    cout << "Enter the length of the second rectangle: " << endl;
    cin >> length2;
    cout << "Enter the width of the second rectangle: " << endl;
    cin >> width2;
    
    area1= length1 * width1;
    area2= length2 * width2;
    
    
    if(area1 > area2){
         cout << "The first triangle has a larger area of: " << area1 << endl;
    }
    else
    if(area1 < area2){
        cout << "The second triangle has a larger area of: " <<  area2 << endl;
    }
    else
    if ( area1 == area2){
        cout << "The area of both traingles are equal,the area of each triangle equals: " << area1 << endl;
    }

}