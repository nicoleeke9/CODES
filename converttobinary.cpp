#include <iostream>
using namespace std;
   int hold[1000000];
int IntToReverseBinary(int intValue)
{


    int rev_num = 0;
    while (intValue > 0) {
        rev_num = rev_num * 10 + intValue % 10;
        intValue = intValue / 10;
    }
    return rev_num;
}

void StringReverse(int userString)
{

   int i=0;
   while(userString>0)
   {
      hold[i]=userString%2;
      userString/=2;
      i++;
      
   }
//int p=0;
   while(i>0)
   {
    cout<<hold[--i];
    // --i;
   }
   
}

/* Define your functions here */ 

int main() {
   /* Type your code here. 
      Your code must call IntToReverseBinary() to get
      the binary string of an integer in a reverse order.
      Then call StringReverse() to reverse the string 
      returned from IntToReverseBinary().*/
      int num;
      cin>>num;
    //   int you,yam;
     StringReverse(num);
    //   yam=IntToReverseBinary(you);
    //   cout<<yam<<endl;

   return 0;
}