/* 
 * File:  main
 * Programmer: Raj Chipalu
 * Problem title: Amount in a savings after interest
 * Problem Definition: 
 * Date: September 28, 2017
 * System - Hardware: Intel Core i5 4 GB memory
 * Software: Mac, C++ IDE
 * Input Devices: None
 * Output Devices: Terminal Screen
 * Program Assumptions: None 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
    
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float principal, rate, times_compounded, interest, amount;//Declare floating point variables 
    
    cout<<"When entering percentages enter in decimal form. Example 10% would be "
            "entered as .10"<<endl;//Instruct user how to enter percentages
    cout<<""<<endl;
    cout<<"When entering dollar amounts do not include the dollar sign. Example $50.60 would"
            "be entered as 50.60"<<endl;//Instruct user how to enter dollar amounts
    cout<<""<<endl;
    cout<<"Please enter the principal amount"<<endl;
    cin >> principal;
    cout<<"Please enter the rate percentage"<<endl;
    cin >> rate;
    cout<<"Please enter the number of times interest is compounded"<<endl;
    cin >> times_compounded;
    
           
            
     //Process Values 
     //equation to find the amount in a saving account after interest
    amount = (principal) * pow((1 + (rate/times_compounded)),( times_compounded));
     //equation to find the total interest
     interest = (amount - principal); 
     //converting user entered rate into percentage
     rate = rate * 100;
     
     
    //Display Output
    
     cout<<"Interest Rate:    ";
     cout<< setw(7) << rate << "%"<<endl;
     cout<<"Times compounded: ";  
     cout<< setw(7) <<times_compounded<<endl; 
     cout<<"Principal Value: $";  
     cout<<setprecision(2)<<fixed<<principal<<endl;
     cout<<"Total Interest:  $";  
     cout<<setprecision(2)<<fixed<<setw(7)<<interest<<endl; 
     cout<<"Total Amount:    $";  
     cout<<setprecision(2)<<fixed<<amount<<endl;
    
                    
                     
            
    
    //Exit Program
    return 0; 
}

