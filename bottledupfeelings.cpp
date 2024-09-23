#include<iostream>
using namespace std;
int main() {
    int oil, big, sml, testVal = 0, bigQn, smlQn, sol = 0;
    cin >> oil; 
    cin >> big; 
    cin >> sml;
    while (testVal < oil) {
        testVal = testVal + big;
        if (((oil - testVal) % sml) == 0) {
            bigQn = testVal/big;
            smlQn = (oil - testVal)/sml;
            sol = 1; }}
    if (sol) {cout << bigQn << " " << smlQn << endl;}
    else {cout << "Impossible";}
    
    return 0;
    }