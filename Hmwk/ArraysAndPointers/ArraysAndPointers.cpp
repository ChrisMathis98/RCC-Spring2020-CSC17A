/* 
 * Author: Christopher Mathis
 * Created on April 4, 2020
 * Purpose: Arrays and Pointers
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Library Scope

//Function Prototypes
double array_shifter(double [], int);
double array_reverser(double [], int);

//Execution Starts Here
int main(int argc, char** argv){
    //Declare Variables - Known and Unknown, units, range, description
    int SIZE;
    
    //Initialize Variables
    cout<<"Enter the size of the array:\n";
    cin>>SIZE;
    
    double array[SIZE];
    
    cout<<"Enter the values of the array:\n";
    for(int i=0;i<SIZE;i++){
        cin>>array[i];
    }
    cout<<endl;
    
    //Display the outputs
    cout<<"The first element of original array: "<<array[0]<<endl;
    cout<<"The last element of original array: "<<array[SIZE-1]<<endl;
    cout<<"The first element of shifted array: "<<array_shifter(array, SIZE)<<endl;
    cout<<"The first element of reversed array: "<<array_reverser(array, SIZE)<<endl;
    
    //Exit Stage Right!
    return 0;
}

//Function Implementations
double array_shifter(double a[], int s){
    double array[s+1]={0};
    for(int i=0;i<s;i++){
        array[i+1]=a[i];
    }
    double *ptr=array;
    return *ptr;
}

double array_reverser(double a[], int s){
    double array[s];
    int i=0;
    for(int j=s-1;j>-1;j--){
        array[i++]=a[j];
    }
    double *ptr=array;
    return *ptr;
}