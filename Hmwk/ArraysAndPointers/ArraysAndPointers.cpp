/* 
 * Author: Christopher Mathis
 * Created on April 4, 2020
 * Purpose: Arrays and Pointers
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Library Scope

//Function Prototypes
double *array_shifter(const double *, int);
double *array_reverser(const double *, int);
void display_array(const double [], int);

//Execution Starts Here
int main(int argc, char** argv){
    int SIZE;
    cout<<"Enter the size of the array:\n";
    cin>>SIZE;
    
    double array[SIZE];
    cout<<"Enter the values of the array:\n";
    for(int i=0;i<SIZE;i++){
        cin>>array[i];
    }
    
    double *shift=nullptr;
    double *reverse=nullptr;
    
    shift=array_shifter(array, SIZE);
    reverse=array_reverser(array, SIZE);
    
    //Display the outputs
    cout<<"The original array: ";
    display_array(array, SIZE);
    cout<<endl;
    
    cout<<"The shifted array: ";
    display_array(shift, SIZE+1);
    cout<<endl;
    
    cout<<"The reversed array: ";
    display_array(reverse, SIZE);
    cout<<endl;
    
    delete[] shift;
    delete[] reverse;
    
    return 0;
}

//Function Implementations
double *array_shifter(const double *a, int s){
    double *sh=nullptr;
    sh=new double[s+1];
    sh[0]=0;
    
    for(int i=0; i<s; i++){
        sh[i+1]=a[i];
    }
    return sh;
}

double *array_reverser(const double *a, int s){
    double *re=nullptr;
    re=new double[s];
    
    int i=0;
    for(int j=s-1; j>-1; j--){
        re[i++]=a[j];
    }
    return re;
}

void display_array(const double a[], int s){
    for(int i=0; i<s; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}