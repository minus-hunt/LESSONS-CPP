#include <iostream>

using namespace std;

struct Player {
    int x;
    int y;
    float health;
    int damage;
    int armer;
    char gender;
};

void plinfo (Player pl){ // -- ответ на вопрос, как передать структуру в параметр функции
    cout << "Hello from info!" << endl;

    cout << "X is:\t\t" << sizeof(pl.x) << " byte." << endl; // - возвращает размер в байтах
    cout << "Y is:\t\t" << sizeof(pl.y) << " byte." << endl;
    cout << "HEALTH is:\t" << sizeof(pl.health) << " byte." << endl;
    cout << "DAMAGE is:\t" << sizeof(pl.damage) << " byte." << endl;
    cout << "ARMER is:\t" << sizeof(pl.armer) << " byte." << endl;
    cout << "GENDER is:\t" << sizeof(pl.gender) << " byte." << endl;
    cout << "\n" << "TOTAL BYTES:\t" << sizeof(pl) << endl;
    cout << "\n" << endl;

}


int main (){
    // Player pl;
    // pl.x = 10;       // Инициализация происходит способом...
    // pl.y = 10;       // когда обращаются непосредственно...
    // pl.health = 100; // к переменной инициализированной...
    // pl.damage = 50;  // посредством структуры
    // pl.armer = 30;
    // pl.gender = 'm';

    // Так же инициализация переменных структуры может выглядеть так
    Player pl_1 {10, 10, 100, 50, 30};
    Player pl_2 {8, 11, 103, 50, 25};

    plinfo(pl_1);
    plinfo(pl_2);
    
    return 0;
}