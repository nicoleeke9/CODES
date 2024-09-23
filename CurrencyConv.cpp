#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double dollarAmount, totalPesos, totalEuros, totalYen;
cout<<"Enter an amount in dollars:";
cin>>dollarAmount;
totalPesos=dollarAmount*20.06;
totalEuros=dollarAmount*0.99;
totalYen=dollarAmount*143.08;
cout<<setw(10)<<"Dollars"<<"\t";
cout<<setw(10)<<"Pesos"<<"\t";
cout<<setw(10)<<"Euros"<<"\t";
cout<<setw(10)<<"Yen"<<endl;

cout<<setprecision(2)<<fixed;

cout<<setw(10)<<dollarAmount<<"\t";
cout<<setw(10)<<totalPesos<<"\t";
cout<<setw(10)<<totalEuros<<"\t";
cout<<setw(10)<<totalYen<<endl;

return 0;
}