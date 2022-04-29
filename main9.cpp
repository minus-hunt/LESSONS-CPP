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
    Player a{10, 20, 100, 10, 10};
    info(a);
    move(a, 'w');
    move(a, 'w');
    move(a, 'w');
    move(a, 'w');
    move(a, 'w');
    move(a, 'w');
    move(a, 'w');
    move(a, 'w');
    move(a, 'w');
    move(a, 'w');
    info(a);
    cout << "Add;ress of a in main func:\t" << &a << endl;

    // int number = 10;
    // const int& ref = number;

    // ref = 20;

    // cout << ref << endl;

    // cout << "Address of number:\t" << &number << endl;
    // cout << "Address of ref:\t\t" << &ref << endl;


    return 0;
}