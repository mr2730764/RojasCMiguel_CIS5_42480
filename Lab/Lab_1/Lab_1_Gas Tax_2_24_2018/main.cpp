/* 
 * File:Oil Company Profit main.cpp
 * Author: Miguel Rojas Calderon
 * Created on February 24, 2018, 9:00 PM
 * Purpose:  Gas Tax 
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const float PRCENT=100;//Calculate Percents

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float
    
            pmpPrc,//Pump Price in USD $'s
            bsePrce,//Base Price in USD $'s
            fedTax,//Federal Tax in USD $'s/gallon
            stateTx,// State Tax in USD $'s/gallon
            saleTax,// Sales Tax in % of Base Price
            totalTx,// Total tax paid/gallon
            prcntTx;// Total percent of taxes paid/gallon
            
         
    
   

    //Initial Variables
    pmpPrc = 3.19f;//$3.19/gallon
    fedTax = .184f;//18.4 cent/gallon .1874 $'s/gallon
    stateTx = .417f;//41.7 cents/gallon .417 $'s/gallon
    saleTax = .0225;//2.25% sale tax from base price
            
    
    //Map/Process Inputs to Outputs
    bsePrce =(pmpPrc-fedTax-stateTx)/(1+saleTax);
    totalTx = pmpPrc-bsePrce;
    prcntTx = totalTx/bsePrce*PRCENT;
            
    //Display Outputs
    cout<<"Pump Price = $"<<pmpPrc<<"/gallon"<<endl;
    cout<<"Federal Tax = $"<<fedTax<<"/gallon"<<endl;
    cout<<"State Tax = $"<<stateTx<<"/gallon"<<endl;
    cout<<"Sales Tax ="<<saleTax*PRCENT<<"%"<<endl;
    cout<<"Base Price = $"<<bsePrce<<"/gallon"<<endl;
    cout<<"Total Taxes Applied = $"<<totalTx<<"/gallon"<<endl;
    cout<<"Percentage Tax = "<<prcntTx<<"%"<<endl;
            
    //Exit program!
    return 0;
}