/* 
 * File: days.cpp
 * Author: Christopher Mathis
 * Created on February 25, 2020
 * Purpose: Display amount of days in a month
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int month, year;
    bool leap=false;
    
    //Input or initialize values Here
    cout<<"Enter a Month (1-12)\n";
    cin>>month;
    
    if(month<1 || month>12){
        cout<<"Entered an Invalid Month, Exiting Program.\n";
        return 0;
    }
    
    cout<<"Enter a Year\n";
    cin>>year;
    
    //Process/Calculations Here
    if(year%4==0){
        leap=true;
        if(year%100==0){
            leap=false;
            if(year%400==0){
                leap=true;
            }
        }
    }
    
    //Output Located Here
    if(leap==false){
        switch(month){
            case 1: cout<<"31 days\n";break;
            case 2: cout<<"28 days\n";break;
            case 3: cout<<"31 days\n";break;
            case 4: cout<<"30 days\n";break;
            case 5: cout<<"31 days\n";break;
            case 6: cout<<"30 days\n";break;
            case 7: cout<<"31 days\n";break;
            case 8: cout<<"31 days\n";break;
            case 9: cout<<"30 days\n";break;
            case 10: cout<<"31 days\n";break;
            case 11: cout<<"30 days\n";break;
            case 12: cout<<"31 days\n";break;
        }
    }
    
    else if(leap==true){
        switch(month){
            case 1: cout<<"31 days\n";break;
            case 2: cout<<"29 days\n";break;
            case 3: cout<<"31 days\n";break;
            case 4: cout<<"30 days\n";break;
            case 5: cout<<"31 days\n";break;
            case 6: cout<<"30 days\n";break;
            case 7: cout<<"31 days\n";break;
            case 8: cout<<"31 days\n";break;
            case 9: cout<<"30 days\n";break;
            case 10: cout<<"31 days\n";break;
            case 11: cout<<"30 days\n";break;
            case 12: cout<<"31 days\n";break;
        }
    }
    
    //Exit
    return 0;
}