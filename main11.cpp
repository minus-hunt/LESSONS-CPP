#include <iostream>
using namespace std;

struct Player {
    int x;
    int y;
    float health;
    int armor;
    int damage;
};

void info(const Player& player){
    cout << "Address of a in info func:\t" << &player << endl; // & - оператор (амперсанд) взятия адреса.
    cout << "******* Info *******" << endl;
    cout << "Position x:\t" << player.x << endl;
    cout << "Position y:\t" << player.y << endl;
    cout << "Health:\t\t" << player.health << endl;
    cout << "Armor:\t\t" << player.armor << endl;
    cout << "Damage:\t\t" << player.damage << endl;
    cout << "\n" << endl;
}

void move(Player& player, char keyPressed){ // - амперсанд в параметрах функции чтобы не создавать разные объекты
    if (keyPressed == 'w'){
        player.x++;
    } else if (keyPressed == 's') {
        player.x--;
    } else if (keyPressed == 'd'){
        player.y++;
    } else if (keyPressed == 'a') {
        player.y--;
    }
}

int main () {
    // int numbers[5]; // примитивный массив данных со след. структурой [тип, имя, размерность]
    // numbers[0] = 10; // обращение к элементу массива по индексу

    // int numbers[5] = {10, 20, 30, 40, 50}; // альтернативная инициализация массива, с перечислением списком значений
    // int numbers[] = {10, 20, 30, 40, 50}; // ...ну или так. компилятор сам считает елементы массива и указывает их кол-во

    // for (int number : numbers){               // цикл foreach добавлен в С++ c 11 версии
    //     cout << "Number:\t" << number << endl;
    // }

    int numbers[3][5]; // объявление двумерного массива
    char symbols[10][15] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
    };

    for (int i = 0; i < 10; i++){
        for (int j = 0; j <15; j++){
            cout << symbols[i][j];
        }
        cout << endl;
    }

    return 0;
}