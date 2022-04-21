#include <iostream>

using namespace std;

main () {
    float amount{};
    float precent{};
    float delta{};
    int years{};

    cout << "Enter the size of amount: ";
    cin >> amount;
    cout << "Enter the interest rate: ";
    cin >> precent;
    cout << "Enter the years: ";
    cin >> years;

    for (int i = 0; i < years; i++){
        delta = amount * precent / 100;
        amount += delta;
    }
    
    cout << "Amount is ... " << amount << endl;
}