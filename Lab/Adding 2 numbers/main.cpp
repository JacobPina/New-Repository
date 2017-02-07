/* 
  File:   main.cpp
  Author: Jacob N. Piña
  Created on January 3, 2017, 12:15 PM
  Purpose:  Template to be used in all programming
            projects!
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int v1,v2;
    int total;
   
    //Input values
    cout<<"This program will add any 2 numbers you write"<<endl;
    cout<<"Please enter one number"<<endl;
    cin>>v1;
    cout<<"Please enter another number"<<endl;
    cin>>v2;
    
    //Process by mapping inputs to outputs
    total=v1+v2;
    
    //Output values
    cout<<"the total when you add these two numbers is = "<<total<<endl;
    //Exit stage right!
    return 0;
}