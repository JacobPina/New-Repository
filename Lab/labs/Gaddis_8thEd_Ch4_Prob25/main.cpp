/* 
  File:   main.cpp
  Author: Jacob N. Piña
  Created on January 3, 2017, 12:15 PM
  Purpose:  Given 3 Phone packages the program asks which you bought and
 * tells you your total bill 
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
    float pkgA,pkgB,pkgC,hours,total;
    char pkgBot;
    
    //Input values
    pkgA=16.75;
    pkgB=23.75;
    pkgC=29.95;
    
    cout<<"Package A cost $16.75/month w/ 5 hours of access and every"
            " additional hour is $0.75 up to 20 hours and all after that"
            " are $1.00 each"<<endl;
    cout<<"Package B cost $23.75/month w/ 15 hours of access and every"
            " additional hour is $0.55 up to 25 hours and all after that"
            " are $0.70 each"<<endl;
    cout<<"Package C cost $29.95/month w/ unlimited hours of access"<<endl;
    cout<<"If you enter which package you bought by entering A,B,or C and then "
            "enter how many minutes you used this program will display "
            "your total bill"<<endl<<endl;
    cout<<"Which Package did you buy"<<endl;
    cin>>pkgBot;
    cout<<"How many minutes did you use?"<<endl;
    cin>>hours;
    
    
    //Process by mapping inputs to outputs
    
    //Calculate possible outcomes for package A
    if (pkgBot==65&&hours<5){
        total=pkgA;
        cout<<"Your total is equal to $"<<total<<endl;
    }
    else if (pkgBot==65&&hours>5&&hours<25){
        total=pkgA+(.75*(hours-5));
        cout<<"Your total is equal to $"<<total<<endl;
    }
    else if (pkgBot==65&&hours>25){
        total=pkgA+(.75*20)+(1*(hours-25));
        cout<<"Your total is equal to $"<<total<<endl;
    }
    
    //Calculate possible outcomes for package B
    if (pkgBot==66&&hours<15){
        total=pkgB;
        cout<<"Your total is equal to $"<<total<<endl;
    }
    else if (pkgBot==66&&hours>15&&hours<50){
        total=pkgB+(.55*(hours-15));
        cout<<"Your total is equal to $"<<total<<endl;
    }
    else if (pkgBot==66&&hours>50){
        total=pkgB+(.55*25)+(.70*(hours-50));
        cout<<"Your total is equal to $"<<total<<endl;
    }
    //Calculate possible outcomes for package C
    if (pkgBot==67&&hours>=0){
        total=pkgC;
        cout<<"Your total is equal to $"<<total<<endl;
    }
    
    //Compare costs
    if (total>pkgC)
        cout<<"You should consider Package C because you would have only paid $"
                <<pkgC<<endl;
    
    
    else if (hours>50&&total>(pkgB+(.55*25)+(.70*(hours-50)))+.1)
        cout<<"You should consider Package B because you would have only paid $"
                <<pkgB+(.55*25)+(.70*(hours-50))<<endl;
    else if (hours>15&&hours<=50&&total>(pkgB+(.55*(hours-15)))+.1)
        cout<<"You should consider Package B because you would have only paid $"
                <<pkgB+(.55*(hours-15))<<endl;
    else if (hours<=15&&total>pkgB)
        cout<<"You should consider Package B because you would have only paid $"
                <<pkgB<<endl;
    
    
    else if (hours>25&&total>(pkgA+(.75*20)+(1*(hours-25)))+.1)
        cout<<"You should consider Package A because you would have only paid $"
                <<pkgA+(.75*20)+(1*(hours-25))<<endl;
    else if (hours>5&&hours<=25&&total>(pkgA+(.75*(hours-5)))+.1)
        cout<<"You should consider Package A because you would have only paid $"
                <<pkgA+(.75*(hours-5))<<endl;
    else if (hours<=5&&total>pkgA)
        cout<<"You should consider Package A because you would have only paid $"
                <<pkgA<<endl;
    
    
    //Exit stage right!
    return 0;
}