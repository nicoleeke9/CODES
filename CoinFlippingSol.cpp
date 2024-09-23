#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {

unsigned int seed;
// seed = time(0);
cin >> seed;

srand(seed);

int flip, headCount = 0, tailCount = 0;
char choice;

flip = rand() % 2 + 1;

if(flip == 1){
    cout << "Flip = Heads";
    headCount++;
}
else{
    cout << "Flip = Tails";
    tailCount++;
}

do{
cout << "\nDo you want to flip again? (Y or N) Y for Yes N for No" << endl;
cin >> choice;
if(choice == 'y' ||  choice == 'Y'){
    flip = rand() % 2 + 1;

if(flip == 1){
    cout << "Flip = Heads";
    headCount++;
}
else{
    cout << "Flip = Tails";
    tailCount++;
}
}
}while(choice == 'y'  || choice == 'Y');
{
    if (choice != 'y' || choice != 'Y'||  choice != 'n' || choice != 'N'){
    cout << "Not valid" << endl;
}
}

int totalFlip = headCount + tailCount;


if(choice == 'n' || choice == 'N'){
cout << headCount << " of the " << totalFlip << " flips were Heads or " << fixed << setprecision(1)  << ((headCount*100))/(double)(totalFlip) << "% were Heads." << endl;
cout << tailCount << " of the " << totalFlip << " flips were Tails or " << ((tailCount*100))/(double)(totalFlip) << "% were Tails." << endl;
}

    return 0;

}