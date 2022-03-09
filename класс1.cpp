#include <iostream>
#include <string>

using namespace std;

class boat_1 {
public:
    int x1;
    int y1;
};

class boat_2 {
public:
    int x1;
    int y1;
    int x2;
    int y2;
};

class boat_3 {
public:
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
};

class boat_4 {
public:
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
    int x4;
    int y4;
};

class sea_battle {
public:
    int My_field[10][10], Enemy_field[10][10];

    void MyAttack(int x1, int y1) {
    };
    void EnemyDamage(int x2, int y2) {
    };

    boat_1 first;
    boat_1 second;
    boat_1 third;
    boat_1 fourth;

    boat_2 first;
    boat_2 second;
    boat_2 third;

    boat_3 first;
    boat_3 second;

    boat_4 first;

    void Score() {
    };
    
};

int main() 
{
    sea_battle p1;
    return 0;
}