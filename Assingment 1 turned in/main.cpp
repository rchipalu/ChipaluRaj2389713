/* 
 * File:  main
 * Programmer: Raj Chipalu
 * Problem title: Calculating the final grade percentage of Professor Conrads class. 
 * Problem Definition: 
 * Date: September 19, 2017
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
    const float ASSIGNMENT_WEIGHT = 0.40, DISCUSSION_WEIGHT = 0.10, QUIZ_WEIGHT = 0.20;//declaring the constants for the weights
    const float FINAL_WEIGHT = 0.30;
    float  assignment_percentage, discussion_percentage, quiz_percentage;//declaring where entered percentages are stored
    float final_percentage, grade;
    
  
    //Process Values 
    cout <<"Please enter percentages without the % sign. Example: 56.75% would be entered as 56.75 "<<endl;
    cout<<"Enter your assignment percentage "<<endl;
    cin >> assignment_percentage;
    cout<<"Enter your discussion percentage "<<endl;
    cin >> discussion_percentage;
    cout<<"Enter your quiz percentage "<<endl;
    cin >> quiz_percentage;
    cout<<"Enter your final percentage "<<endl;
    cin >> final_percentage;
    
    grade = (assignment_percentage * ASSIGNMENT_WEIGHT);//calculating the final grade percentage 
    grade = grade + (discussion_percentage * DISCUSSION_WEIGHT);
    grade = grade + (quiz_percentage * QUIZ_WEIGHT);
    grade = grade + (final_percentage * FINAL_WEIGHT);

    
    
    //Display Output
    cout <<"Your final grade is ";
    cout << grade;
    cout <<"%";
    

                    
                     
            
    
    //Exit Program
    return 0; 
} 