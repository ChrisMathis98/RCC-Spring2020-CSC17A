/* 
 * File: sorting.cpp
 * Author: Christopher Mathis
 * Created on March 9, 2020
 * Purpose: Sorting orders
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Library Scope

//Function Prototypes
void bSort(double [], int);
void sSort(double [], int);
void swap(double &, double &);

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    
    //Declare Variables - Known and Unknown, units, range, description
    const int SIZE=15;
    double array[SIZE];
    double brray[SIZE];
    
    //Prompt for user to input into array
    cout<<"Enter 15 values (of the double data type):\n";
    for(int i=0; i<SIZE; i++){
        cin>>array[i];
    }
    
    //Copies array values into brray
    for(int j=0; j<SIZE; j++){
        brray[j]=array[j];
    }
    
    //Display the arrays and sorts
    cout<<"First array before sort\n";
    for(int k=0; k<SIZE; k++){
        cout<<array[k]<<" ";
    }
    cout<<endl<<"First array being sorted\n";
    bSort(array, SIZE);
    
    cout<<"Second array before sort\n";
    for(int l=0; l<SIZE; l++){
        cout<<brray[l]<<" ";
    }
    cout<<endl<<"Second array being sorted\n";
    sSort(brray, SIZE);
    
    //Exit Stage Right!
    return 0;
}

//Function Implementations
void bSort(double a[], int size){ 
    for(int i=0; i<size; i++){
        int swaps=0;
        for(int j=0; j<size-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                swaps=1;
            }
            for(int i=0; i<size; i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        if(!swaps) break;
    }
    cout<<endl;
}

void sSort(double b[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(b[j]>b[i]){
                swap(b[j], b[i]);
            }
        }
        for(int k=0; k<size; k++){
            cout<<b[k]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void swap(double &a, double &b){
    double temp=a;
    a=b;
    b=temp;
}