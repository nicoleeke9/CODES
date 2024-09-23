#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   // Add more variables as needed
   
   getline(cin, userText);  // Gets entire line, including spaces. 



int charCount =0;
for(int i=0;i<userText.length();++i)
{
   if((userText.at(i)!=' ')&& (userText.at(i)!='.')&&(userText.at(i)!=',')&&(userText.at(i)!='!'))
   {
      charCount+=1;
   }
}
cout<<charCount<<endl;
   return 0;
}
