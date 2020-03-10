/* 
 * File: cyborg.cpp
 * Author: Christopher Mathis
 * Created on February 25, 2020
 * Purpose: Find out amount of memory datatypes use
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char a;
    unsigned short b;
    int c;
    long d;
    float e;
    double f;
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"Datatype\tNumber of Bytes\n";
    cout<<"Char"<<fixed<<setw(20)<<sizeof(a)<<endl;
    cout<<"Unsigned Int"<<fixed<<setw(12)<<sizeof(b)<<endl;
    cout<<"Int"<<fixed<<setw(21)<<sizeof(c)<<endl;
    cout<<"Long"<<fixed<<setw(20)<<sizeof(d)<<endl;
    cout<<"Float"<<fixed<<setw(19)<<sizeof(e)<<endl;
    cout<<"Double"<<fixed<<setw(18)<<sizeof(f)<<endl;
    
    //Exit
    return 0;
}