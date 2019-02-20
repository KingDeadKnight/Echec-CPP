#include "Tour.hpp"

Tour::Tour(int x, int y) : Piece(x, y){};

bool Tour::setDeplacement(int x, int y)
{
    if(!Piece::setDeplacement(x, y))
    {
        return false;
    }
    if(this->getX() - x != 0 && this->getY() - y != 0)
    {
        return false;
    }
    this->setDeplacement(x, y);
    return true;
}