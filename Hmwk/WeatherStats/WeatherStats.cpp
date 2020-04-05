/* 
 * Author: Christopher Mathis
 * Created on April 4, 2020
 * Purpose: Weather Stats Structure
 */

//System Level Libraries
#include <iostream>   //I/O Library
using namespace std;  //Library Scope

//Structures
 struct WeatherStats{
        double Total_Rainfall;
        double Total_Snowfall;
        double High_Temperature;
        double Low_Temperature;
        double Average_Temperature;
    };
    
//Function Prototypes
double highestTemperature(WeatherStats []);
double lowestTemperature(WeatherStats []);
void highOccurence(WeatherStats [], string [], double);
void lowOccurence(WeatherStats [], string [], double);

//Execution Starts Here
int main(int argc, char** argv){
    //Declare Variables - Known and Unknown, units, range, description
    WeatherStats month[12];
    string m[]={"January", "February", "March", "April", "May", "June",
                "July", "August", "September", "October", "November", "December"};
    double averageRainfall, totalRainfall=0, averageSnowfall, totalSnowfall=0,
           averageTemperature=0;
    
    //Initialize Variables
    for(int i=0; i<12; i++){
        cout<<"Enter total rainfall for "<<m[i]<<":\n";
        cin>>month[i].Total_Rainfall;
        while(month[i].Total_Rainfall<0){
            cout<<"Invalid, please reenter:\n";
            cin>>month[i].Total_Rainfall;
        }
        cout<<"Enter total snowfall for "<<m[i]<<":\n";
        cin>>month[i].Total_Snowfall;
        while(month[i].Total_Snowfall<0){
            cout<<"Invalid, please reenter:\n";
            cin>>month[i].Total_Snowfall;
        }
        cout<<"Enter high temperature for "<<m[i]<<":\n";
        cin>>month[i].High_Temperature;
        while(month[i].High_Temperature<-150 || month[i].High_Temperature>150){
            cout<<"Invalid, please reenter:\n";
            cin>>month[i].High_Temperature;
        }
        cout<<"Enter low temperature for "<<m[i]<< ":\n";
        cin>>month[i].Low_Temperature;
        while(month[i].Low_Temperature<-150 || month[i].Low_Temperature>150){
            cout<<"Invalid, please reenter:\n";
            cin>>month[i].Low_Temperature;
        }
    }
    
    //Calculations
    for(int j=0; j<12; j++){
        totalRainfall+=month[j].Total_Rainfall;
        totalSnowfall+=month[j].Total_Snowfall;
        month[j].Average_Temperature=(month[j].High_Temperature+month[j].Low_Temperature)/2.0;
        averageTemperature+=month[j].Average_Temperature;
    }
    averageRainfall=totalRainfall/12.0;
    averageSnowfall=totalSnowfall/12.0;
    averageTemperature/=12.0;
    
    //Display Values
    cout<<"The average monthly rainfall: "<<averageRainfall<<" inches"<<endl;
    cout<<"The total monthly rainfall: "<<totalRainfall<<" inches"<<endl;
    cout<<"The average monthly snowfall: "<<averageSnowfall<<" inches"<<endl;
    cout<<"The total monthly snowfall: "<<totalSnowfall<<" inches"<<endl;
    cout<<"The highest temperature of the year: "<<highestTemperature(month)<<" Fahrenheit"<<endl;
    cout<<"The months it occured: ";
    highOccurence(month, m, highestTemperature(month));
    cout<<endl;
    cout<<"The lowest temperature of the year: "<<lowestTemperature(month)<<" Fahrenheit"<<endl;
    cout<<"The months it occured: ";
    lowOccurence(month, m, lowestTemperature(month));
    cout<<endl;
    cout<<"The average of the monthly temperatures: "<<averageTemperature<<" Fahrenheit"<<endl;
    
    return 0;
}

//Functions
double highestTemperature(WeatherStats a[]){
    double max=-150;
    for(int i=0; i<12; i++){
        if(a[i].High_Temperature>max) max=a[i].High_Temperature;
    }
    return max;
}

double lowestTemperature(WeatherStats a[]){
    double min=150;
    for(int i=0; i<12; i++){
        if(a[i].Low_Temperature<min) min=a[i].Low_Temperature;
    }
    return min;
}

void highOccurence(WeatherStats a[], string b[], double c){
    for(int i=0; i<12; i++){
        if(a[i].High_Temperature==c) cout<<b[i]<<" ";
    }
}

void lowOccurence(WeatherStats a[], string b[], double c){
     for(int i=0; i<12; i++){
        if(a[i].Low_Temperature==c) cout<<b[i]<<" ";
    }
}