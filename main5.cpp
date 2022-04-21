#include <iostream>

// Макрос - или директива препроцессора define
/*
Везде где будет встречаться строка our_super_type
будет подставляться тип double
*/
#define our_super_type double

using namespace std;

int main() {
    // Объявление переменных
    our_super_type first_value{};
    our_super_type second_value{};
    our_super_type result{};
    char symbol;

    // Ввод данных
    cout << "Введите значение первой переменной: ";
    cin >> first_value;
    cout << "Введите что необходимо сделать (+, -, *, /)";
    cin >> symbol;
    cout << "Введите второе число: ";
    cin >> second_value;

    if (symbol == '+'){
        result = first_value + second_value;
    }
    else if (symbol == '-'){
        result = first_value - second_value;
    }
    else if (symbol == '*'){
        result = first_value * second_value;
    }
    else if (symbol == '/'){
        result = first_value / second_value;
    }
    else {
        cout << "Вы ввели что то неизвестное..." << endl;
    }

    // метод precision позволяет задавать объекту cout...
    // ... определенное количество символов после запятой
    cout.precision(12);
    cout << "Результат равен " << result << endl;
}