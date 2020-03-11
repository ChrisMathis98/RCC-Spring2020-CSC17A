/* 
 * File: student.cpp
 * Author: Christopher Mathis
 * Created on March 8, 2020
 * Purpose: Student Line Up
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cstring>    //String Library
using namespace std;  //Library Scope

//Execution Starts Here
int main(int argc, char** argv){
    //Declare Variables - Known and Unknown, units, range, description
    int student=25;
    string first, last;
    string name[student];
    
    //Initialize Variables
    cout<<"Enter the number of students in the class\n";
    cin>>student;
    
    while(student<1 || student>25){
        cout<<"Invalid number of students, please reenter\n";
        cin>>student;
    }
    
    cout<<"Enter the names of your students (all lowercase).\n";
    for(int i=0; i<student; i++){
        cout<<"Enter the name of student "<<i+1<<endl;
        cin>>name[i];
        cout<<endl;
    }
    
    //Map inputs to outputs -> i.e. process the inputs
    first=last=name[0];
    for(int j=0; j<student; j++){
     if(name[j]<first) first=name[j];
     else if(name[j]>last) last=name[j];
    }
    
    //Display the outputs
    cout<<first<<" is at the front of the line.\n";
    cout<<last<<" is at the back of the line.\n";
    
    //Exit Stage Right!
    return 0;
}