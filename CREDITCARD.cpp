#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int i=0;
int sum=0, val[16];
string cardnum;
getline(cin,cardnum);
int c=0;
istringstream num(cardnum);
for(;i<16;i++)
{
  num>>val[i];
}
if(i%2==0)
{
    val[i]=2*val[i];
    i--;
}
if(i>9){
    val[i]=val[i]-9;
}
while(i>0)
{
    sum+=i%10;
    i/=10;
}
if(sum%10==0)
cout<<"Valid";
else
cout<<"invalid";






    return 0;
}