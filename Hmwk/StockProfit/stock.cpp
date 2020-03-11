/* 
 * File: stock.cpp
 * Author: Christopher Mathis
 * Created on March 8, 2020
 * Purpose: Stock Profit
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Library Scope

//Function Prototypes
void profit(int, int, int, int, int);

//Execution Starts Here
int main(int argc, char** argv){
    //Declare Variables - Known and Unknown, units, range, description
    int nShare,//number of shares
            sPrice,//sales price per share
            sComm,//sales commission paid
            pPrice,//purchase price per share
            pComm;//purchase commission paid
    
    //Initialize Variables
    cout<<"How many shares were bought?\n";
    cin>>nShare;
    cout<<"What is the sales price per share?\n";
    cin>>sPrice;
    cout<<"What is the sale commission paid?\n";
    cin>>sComm;
    cout<<"What is the purchase price paid per share?\n";
    cin>>pPrice;
    cout<<"What is the purchase commission paid?\n";
    cin>>pComm;
    
    //Display the outputs
    profit(nShare, sPrice, sComm, pPrice, pComm);
    
    //Exit Stage Right!
    return 0;
}

//Function Implementations
void profit(int ns, int sp, int sc, int pp, int pc){
    int x=((ns*sp)-sc)-((ns*pp)+pc);
    
    cout<<endl;
    if(x>0) cout<<"The profit from the sale of stock is: $"<<x;
    else cout<<"The loss from the sale of stock is: $"<<x;
    
    return;
}