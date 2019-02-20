#pragma once
#include "Piece.cpp"

class Pion : public Piece
{
    bool premierCoup;
public:
    Pion(int x, int y);
    bool setDeplacement(int x, int y);
};