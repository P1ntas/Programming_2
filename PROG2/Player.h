#pragma once
#include "Movement.h";

class Player {
public:
    Player(int row, int col, char symbol);
    int getRow() const;
    int getCol() const;
    char getSymbol() const;
    bool isAlive() const;
    void setAsDead();
    bool move(Movement delta);
private:
    int row, col;
    bool alive;
    char symbol;
};


