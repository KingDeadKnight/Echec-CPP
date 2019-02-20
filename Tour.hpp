#pragma once
#include "Piece.cpp"

class Tour : public Piece
{
public:
    Tour(int x, int y);
    bool setDeplacement(int x, int y);
};