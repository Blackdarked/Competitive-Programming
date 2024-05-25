#ifndef TETRIS_HPP
#define TETRIS_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Piece {
public:
    virtual void rotate() = 0;
    virtual bool canPlace(int x, int y, const vector<vector<char>>& board) = 0;
    virtual void place(int x, int y, vector<vector<char>>& board) = 0;
    virtual void display() = 0;
};

class Tetris {
private:
    vector<vector<char>> board;
    Piece* currentPiece;
    int score;
    int numPieces;

public:
    Tetris();
    void play();
    void displayBoard();
    void generatePiece();
    void handleUserInput();
    void endGame();
};

#endif // TETRIS_HPP