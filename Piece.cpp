#include "Piece.hpp"

Piece::Piece(int x, int y)
{
    this->setPosition(x, y);
}

int Piece::getX() { return this->x; }

int Piece::getY() { return this->y; }

void Piece::setX(int value) { this->x = value; }

void Piece::setY(int value) { this->y = value; }

void Piece::setPosition(int x, int y)
{
    this->setX(x);
    this->setY(y);
}

bool Piece::setDeplacement(int x, int y)
{
    if(x < 0 || y < 0 || x >= 8 || y >= 8)
    {
        return false;
    }
    if(x == this->getX() && y == this->getY())
    {
        return false;
    }
    return true;
}