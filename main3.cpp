#include <iostream>

int main () {
    // Инициализация переменных равных 0
    int first_value;
    int second_value;

    std::cout << "Введите значение первой переменной: " << std::endl;
    std::cin >> first_value; // Опреатор cin вместе с >> позволяет ввести информацию с консоли...

    std::cout << "Введите значение второй переменной: " << std::endl;
    std::cin >> second_value; // ... и присвоить значения переменным

    std::cout << "Сумма чисел равна " << first_value + second_value << std::endl;
}