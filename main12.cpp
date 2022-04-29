#include <iostream>
using namespace std;

const int x = 10;
const int y = 15;

char map[x][y] = {
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

struct Player {
    int x;
    int y;
    float health;
    int armor;
    int damage;
};

void info(const Player& player){
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

void draw(Player player){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j <15; j++){
            cout << map[i][j];
        }
        cout << endl;
    }
}

int main () {
    draw();

    return 0;
}