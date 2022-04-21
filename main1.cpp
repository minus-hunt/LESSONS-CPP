#include <iostream>

int main () {
    unsigned int x = 23;
    unsigned int y = 43;
    unsigned int z = 34;

    std::cout << x + y + z << std::endl;

    int yearsOfAge;   // Cammel case
    int years_of_age; // Snake case

    // Виды инициализации переменных
    int bullet = 30; // Copy initialization
    int mana(100);   // Direct initialization. The same of: int mana = 100;
    int heal{};      // heal = 0;
    int helas{100};  // heal = 100;
}