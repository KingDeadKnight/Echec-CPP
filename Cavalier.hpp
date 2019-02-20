#pragma once
#include "Piece.cpp"

class Cavalier : public Piece
{
public:
    Cavalier(int x, int y);
    bool setDeplacement(int x, int y);
};