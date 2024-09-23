#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double chiliDog, cornDog, chips, softDrink, waterBottles, taxable, taxAmount, total;

    cout << "Enter number of chili dogs: ";
    cin >> chiliDog;
    cout << "Enter number of corn dogs: ";
    cin >> cornDog;
    cout << "Enter number of chips: ";
    cin >> chips;
    cout << "Enter number of soft drinks: ";
    cin >> softDrink;
    cout << "Enter number of water bottles: ";
    cin >> waterBottles;

    cout << fixed << setprecision(2);

    taxable = (chiliDog * 8.0 + cornDog * 6.0 + chips * 2.0 + softDrink * 5.0);
    taxAmount = 0.0825 * taxable;
    total = taxable + taxAmount + 4* waterBottles;

    cout << "Taxable:     $" << right << setw(8) << taxable << "\n";
    cout << "Tax amount:  $" << right << setw(8) << taxAmount << "\n";
    cout << "Non-taxable: $" << right << setw(8) << 4 * waterBottles << "\n";
    cout << "Total:       $" << right << setw(8) << total << endl;

    return 0;
}