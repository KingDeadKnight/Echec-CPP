#pragma once
#include <iostream>
#include <cmath>

class Piece
{
protected:
    int x, y;
public:
    Piece(int x, int y);
    int getX();
    int getY();
    void setX(int value);
    void setY(int value);
    void setPosition(int x, int y);
    virtual bool setDeplacement(int x, int y);
};