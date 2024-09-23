#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
long long int seconds, mins, hours, days,Rsecs;
cout<<"Input number of seconds"<<endl;
cin>>seconds;
/*days=seconds/86400;
  hours=(seconds%86400)/3600;
mins=((seconds%86400)%3600)/60;
Rsecs=((seconds%86400)%3600)%60;
if(seconds<=0)
{
    cout<<"seconds must be greater than 0"<<endl;
}
if(days<=0 || mins<=0 || hours)*/

if(seconds>0)
{
days=seconds/86400;
hours=(seconds%86400)/3600;
mins=((seconds%86400)%3600)/60;
Rsecs=((seconds%86400)%3600)%60;
 
if(days > 0){
    cout<<"Day(s): "<<days<<endl;
}

if(hours>0)
{
    cout<<"Hour(s): "<< hours<<endl;
}
if(mins>0)
{
    cout<<"Minute(s): "<<mins<<endl;
}

if(Rsecs>0)
{
    cout<<"Remaining second(s): "<<Rsecs<<endl;
}
}
else if(seconds<=0)
{
    cout<<"seconds must be greater than zero"<<endl;
}

return 0;
}
