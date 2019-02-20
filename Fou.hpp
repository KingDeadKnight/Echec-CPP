#pragma once
#include "Piece.cpp"

class Fou : public Piece
{
public:
    Fou(int x, int y);
    bool setDeplacement(int x, int y);
};