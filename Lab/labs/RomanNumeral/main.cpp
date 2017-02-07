/* 
 * File:   main.cpp
 * Author: Jacob N. Piña
 * Created on Jan 24, 2017, 10:53 AM
 * Purpose:  Enter Year and change to Roman numeral
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
       
    const int X=10;
    const int C=100;
    const int M=1000;
    
//Function Prototypes Here
string convert(unsigned short);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short year;
    
    //Input or initialize values Here
    cout<<"This program will change any year between 1000 and 3000 and "
            "change it to a Roman numeral"<<endl;
    cout<<"Input a year between 1000CE and 3000CE"<<endl<<endl;
    cin>>year;
    
    //Output Roman numeral
    
    cout<<year<<" = "<<convert(year)<<endl;
    
    
    
    //Output Located Here
    

    //Exit
    return 0;
}

//000000000011111111111111112222222222222333333333444444444455555555556666667778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//***********************Roman Numeral Conversion*******************************
//
//Input year
//Output Roman year
string convert(unsigned short year) {
    
     //Declare variables
    char n1000,n100,n10,n1;//The number of powers of 10
    string roman="";
    
    //Parcing the year information 
    n1000=(year-year%M)/M;   //Determines how many thousands
    year=(year-n1000*M);        //Year without thousands
    n100=(year-year%C)/C;     //Determines how many Hundreds
    year=(year-n100*C);         //Year without hundreds
    n10=(year-year%X)/X;       //Determines how many Tens
    n1=(year-n10*X);         //Year without Tens
    
    //Fill string with M's
    switch(n1000){
        case 3:roman+='M';
        case 2:roman+='M';
        case 1:roman+='M';break;
        default:cout<<"Bad Year"<<endl;
    }
    //Fill string with C's
    switch(n100){
        case 9:roman+="CM";break;
        case 8:roman+="DCCC";break;
        case 7:roman+="DCC";break;
        case 6:roman+="DC";break;
        case 5:roman+="D";break;
        case 4:roman+="CD";break;
        case 3:roman+='C';
        case 2:roman+='C';
        case 1:roman+='C';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
    //Fill string with X's
    switch(n10){
        case 9:roman+="XC";break;
        case 8:roman+="LXXX";break;
        case 7:roman+="LXX";break;
        case 6:roman+="LX";break;
        case 5:roman+="L";break;
        case 4:roman+="XL";break;
        case 3:roman+='X';
        case 2:roman+='X';
        case 1:roman+='X';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
    //Fill string with I's
    switch(n1){
        case 9:roman+="IX";break;
        case 8:roman+="VIII";break;
        case 7:roman+="VII";break;
        case 6:roman+="VI";break;
        case 5:roman+="V";break;
        case 4:roman+="IV";break;
        case 3:roman+='I';
        case 2:roman+='I';
        case 1:roman+='I';break;
        case 0:break;
        default:cout<<"Bad Year"<<endl;
    }
    //Dummy string
    return roman;
}
