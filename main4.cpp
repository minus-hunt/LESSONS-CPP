#include <iostream>

// Чтобы не указывать перед ф-ми std мы просто... 
// ...говорим что будем использовать пространство имен
using namespace std;

int main () {
    int age;
    cout << "Введите ваш возраст:";
    cin >> age;

    // > < == != <= >= - операторы сравнения
    bool isAdult = age >= 18;

    if (isAdult) {
        cout << "У вас есть доступ" << endl;
    }
    else if {
        int value{}
    }
    else {
        cout << "У вас нет доступа" << endl;
    }
}