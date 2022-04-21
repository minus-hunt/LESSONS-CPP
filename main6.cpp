#include <iostream>

using namespace std;

main (){

    // Определение констант
    const char SUM = '+';
    const char SUB = '-';
    const char MUL = '*';
    const char DIV = '/';

    double firstNumber;
    double secondNumber;
    double result;
    char symbol;
    char tryAgain = 'n';

    // Логика цикла do while в том чтобы делать что то пока
    do {

        cout << "Ennter first number: ";
        cin >> firstNumber;
        cout << "Enter symbol. Avalible operation (+, -, *, /): ";
        cin >> symbol;
        cout << "Enter second number: ";
        cin >> secondNumber;

        if (SUM == symbol){
            result = firstNumber + secondNumber;
        } else if (SUB == symbol){
            result = firstNumber + secondNumber;
        } else if (MUL == symbol){
            result = firstNumber * secondNumber;
        } else if (DIV == symbol){
            result = firstNumber / secondNumber;
        } else {
            cout << "Sorry, i don't know what you mean. Let's repeat...";
        }

        cout << "The result is... " << result << endl;
        cout << "Do you wanna try it again? (Y/N)";
        cin >> tryAgain;

    } while (tryAgain == 'y');

    
}