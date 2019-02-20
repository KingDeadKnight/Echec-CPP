#include "Fou.hpp"

Fou::Fou(int x, int y) : Piece(x, y){}

bool Fou::setDeplacement(int x, int y)
{
    if((x < 8 && x > 0) || (y < 8 && y > 0))
    {
        return false;
    }
    if(std::abs(this->getY() - y) == 2){
        if(std::abs(this->getX() - x) == 1)
        {
            this->setPosition(x, y);
            return true;
        }
        return false;
    }
    if(std::abs(this->getX() - x) == 2){
        if(std::abs(this->getY() - y) == 1)
        {
            this->setPosition(x, y);
            return true;
        }
        return false;
    }
    return false;
}