#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main(){
double num,avg,total;
total=0;
string file;
int ct=0;
int ct2=0;
double ct3=0;
cout<<"Enter the input file name: "<<endl;
cin>>file;
ifstream myfile;
myfile.open(file);
ofstream outputFile;
outputFile.open("badvalues.txt");
if(myfile)
{
    while(myfile>>num)
    {
        ct++;
      if(num>150 || num<1)
      {
        outputFile<<showpoint<<fixed<<setprecision(3)<<num<<endl;
        ct2++;
      }
      else 
      {
       ct3++;
       total+=num;
     avg=total/ct3;
      }


    }
    
    cout<<fixed<<setprecision(2);
cout<<"Total number of values read: "<<ct<<endl;
cout<<"Valid values read: "<<(int)ct3<<endl;
cout<<"Invalid values read: "<<ct2<<endl;
if(ct3==0)
    {
        cout<<"The file did not contain any valid values."<<endl;
    }
    else{
cout<<"The average of the valid numbers read = "<<avg<<endl;
    }
}
else{
    cout<<"The file "<<'"'<<file<<'"'<<" could not be opened."<<endl;
}

    return 0;
}