#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;
    cin >> n;
    if (n >= 11 && n<= 100)
    {
      while (n % 11 != 0)
      {
        cout << n << " ";
        n--;
      }

      cout << n << " ";
    }
   else 
   {
      cout<<"Input must be 11-100";
   }

   cout << endl;
   
   return 0;
}
