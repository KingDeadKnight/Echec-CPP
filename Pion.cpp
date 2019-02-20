#include "Pion.hpp"

Pion::Pion(int x, int y) : Piece(x, y)
{
    this->premierCoup = true;
}

bool Pion::setDeplacement(int x, int y)
{
    if(!Piece::setDeplacement(x, y))
    {
        return false;
    }
    if(this->getX() - x != 0)
    {
        return false;
    }
    if(premierCoup && this->getY() - y == 2)
    {
        this->setPosition(x, y);
        this->premierCoup = false;
        return true;
    }
    if(this->getY() - y == 1)
    {
        this->setPosition(x, y);
        return true;
    }
    return false;
}