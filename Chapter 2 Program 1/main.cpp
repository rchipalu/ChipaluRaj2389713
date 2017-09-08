/* 
 * File:  main
 * Programmer: Raj Chipalu
 * Problem title: 
 * Problem Definition: 
 * Date: 
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

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
    
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
   // declare variables as integers 
    int var1,  var2,  sum,  dif,  prod;
    
    var1 = 2350000;
    var2 = 5000000;
    
    //Input values
    
    
  
    //Process Values 
    sum = var1 + var2;//equation for the sum
    dif = var2 - var1;//equation for the difference
    prod = var1 * var2;//equation for the product
    
    
    
    //Display Output
    cout <<"The sum of the two variables is ";
    cout <<sum<<endl;
    cout <<"The difference of the two variables is ";
    cout <<dif<<endl;
    cout <<"The product of the two variables is ";
    cout <<prod<<endl;
    
     
    
    //Exit Program
    return 0; 
}