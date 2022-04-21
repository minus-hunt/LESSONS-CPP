#include <iostream>

int main () {
    // Ниже приведена структура приведения типов
    int characterCode = 10; // Переменная которую необходимо привести к типу char
    char newLine = static_cast<char>(characterCode); //  static_cast приводит заданное занчение в круглых сскобах к типу в <>

    std::cout << "Test" << newLine; // Ht
}