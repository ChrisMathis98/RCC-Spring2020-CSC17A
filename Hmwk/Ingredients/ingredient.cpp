/* 
 * File: ingredient.cpp
 * Author: Christopher Mathis
 * Created on February 25, 2020
 * Purpose: Displays amount of ingredients to make cookies
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
    float sugar, butter, flour;
    int nCookie;
    
    //Input or initialize values Here
    cout<<"How many cookies do you want to make?\n";
    cin>>nCookie;
    
    //Process/Calculations Here
    sugar = 1.5/48;
    butter = 1.0/48;
    flour = 2.75/48;
    
    //Output Located Here
    cout<<"Ingredients\tCups\n";
    cout<<"Sugar"<<fixed<<setw(15)<<setprecision(3)<<showpoint<<sugar*nCookie<<endl;
    cout<<"Butter"<<fixed<<setw(14)<<setprecision(3)<<showpoint<<butter*nCookie<<endl;
    cout<<"Flour"<<fixed<<setw(15)<<setprecision(3)<<showpoint<<flour*nCookie<<endl;
    
    //Exit
    return 0;
}