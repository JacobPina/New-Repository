/* 
  File:   main.cpp
  Author: Jacob N. Piña
  Created on January 11, 2017, 12:15 PM
  Purpose:  Paycheck
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
int main(int argc, char** argv) 
{
    //Declare Variables
    float hours,rate,payChk;//Hours worked, rate of pay in $/hr and paycheck
    
    //Input values
    
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"How many hours did you work this week?"<<endl;
    cin>>hours;
    cout<<"How much do you get paid per hour?"<<endl;
    cin>>rate;
    if (hours<=40)
    {     
        payChk=hours*rate;//Paycheck in $s
        cout<<"Your pay is $ "<<payChk<<" before taxes"<<endl;
    }
    else
    {       
        payChk=(40*rate)+((hours-40)*rate*2);//Paycheck in $s
    cout<<"Congrats you worked "<<hours-40<<" hours of overtime!"<<endl;
    cout<<"Your pay is $ "<<payChk<<" before taxes"<<endl;
    }   
    
    //Exit stage right!
    return 0;
}