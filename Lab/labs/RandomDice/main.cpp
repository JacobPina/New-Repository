/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
   //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    unsigned char die1,die2,sum;
    
    //Input or initialize values Here
    die1=rand()%6+1;//[1,6]
    die2=rand()%6+1;//[1,6]
    
    //Process/Calculations Here
    sum=die1+die2;
    
    //Output Located Here
    cout<<"Die 1 ="<<static_cast<int>(die1)<<endl;
    cout<<"Die 2 ="<<static_cast<int>(die2)<<endl;
    cout<<"sum ="<<static_cast<int>(sum)<<endl;
    

    //Exit
    return 0;
}

