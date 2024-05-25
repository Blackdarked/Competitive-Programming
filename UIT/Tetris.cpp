#include<iostream>
#include<cstdlib>
#include<ctime>
#include<random>
#include<chrono>
#include"Tetris.hpp"

using namespace std;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int Rand(int l, int r) { return l + rd() % (r - l + 1); }

Board::Board(int r, int c) : row{ r }, col{ c }, grid{ r, vector<char>(c, '.') } {
    initBoard();
}

Board::~Board() {
    delete[] grid;
}

void Board::display() const {
    for (const auto& row : grid) {
        for (char c : row) {
            cout << c << ' ';
        }
        cout << '\n';
    }
}

bool Board::validPos(const std::vector<std::vector<char>>& block, int r, int c) const {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (block[i][j] == 'X') {
                int BRow = row + i;
                int BCol = col + j;
                if (BRow >= r or BCol >= c or grid[BRow][BCol] == 'X') return false;
            }
        }
    }
    return true;
}

void Board::placeBlock(const std::vector<std::vector<char>>& block, int r, int c) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (piece[i][j] == 'X') {
                grid[row + i][col + j] = 'X';
            }
        }
    }
}
void Board::initBoard() {
    int numBlocks = Rand(20, 35);
    fillRandomBlock(numBlocks);
}
int  Board::getScore() const {
    int score = 0, fullCols = 0;
    for (const auto& row : grid) {
        for (char c : row) {
            if (c == 'X') ++score;
        }
    }

    for (int c = 0; c < col; c++) {
        bool fullCol = 1;
        for (int r = 0; r < row; r++) {
            if (grid[r][c] == '.') {
                fullCol = 0;
                break;
            }
        }

        if (fullCol) ++fullCols;
    }

    return (score + 4 * fullCols);
}

Block::Block() : curShape{ 0 } {
    init();
}

void Block::init() {
    shapes = {
        //I shape
        {
            {'.', '.', '.', '.'},
            {'X', 'X', 'X', 'X'},
            {'.', '.', '.', '.'},
            {'.', '.', '.', '.'}
        },
        {
            {'.', '.', '.', '.'},
            {'.', '.', '.', '.'},
            {'X', 'X', 'X', 'X'},
            {'.', '.', '.', '.'}
        },
        {
            {'.', 'X', '.', '.'},
            {'.', 'X', '.', '.'},
            {'.', 'X', '.', '.'},
            {'.', 'X', '.', '.'}
        },
        {
            {'.', '.', 'X', '.'},
            {'.', '.', 'X', '.'},
            {'.', '.', 'X', '.'},
            {'.', '.', 'X', '.'}
        },
        //L shape
        {
            {'.', 'X', '.', '.'},
            {'.', 'X', '.', '.'},
            {'.', 'X', 'X', '.'},
            {'.', '.', '.', '.'}
        },
        {
            {'.', '.', '.', '.'},
            {'X', 'X', 'X', '.'},
            {'X', '.', '.', '.'},
            {'.', '.', '.', '.'}
        },
        {
            {'.', '.', '.', 'X'},
            {'.', 'X', 'X', 'X'},
            {'.', '.', '.', '.'},
            {'.', '.', '.', '.'}
        },
        {
            {'.', '.', '.', '.'},
            {'.', 'X', 'X', '.'},
            {'.', '.', 'X', '.'},
            {'.', '.', 'X', '.'}
        },
        //J shape
        {
            {'.', '.', 'X', '.'},
            {'.', '.', 'X', '.'},
            {'.', 'X', 'X', '.'},
            {'.', '.', '.', '.'}
        },
        {
            {'.', '.', '.', '.'},
            {'.', 'X', '.', '.'},
            {'.', 'X', 'X', 'X'},
            {'.', '.', '.', '.'}
        },
        {
            {'.', '.', '.', '.'},
            {'.', 'X', 'X', '.'},
            {'.', 'X', '.', '.'},
            {'.', 'X', '.', '.'}
        },
        {
            {'.', '.', '.', '.'},
            {'X', 'X', 'X', '.'},
            {'.', '.', 'X', '.'},
            {'.', '.', '.', '.'}
        },
        //S shape
        {
            {'.', 'X', 'X', '.'},
            {'X', 'X', '.', '.'},
            {'.', '.', '.', '.'},
            {'.', '.', '.', '.'}
        },
        {
            {'X', '.', '.', '.'},
            {'X', 'X', '.', '.'},
            {'.', 'X', '.', '.'},
            {'.', '.', '.', '.'}
        },
        {
            {'.', '.', '.', '.'},
            {'X', 'X', '.', '.'},
            {'.', 'X', 'X', '.'},
            {'.', '.', '.', '.'}
        },
        {
            {'.', '.', 'X', '.'},
            {'.', 'X', 'X', '.'},
            {'.', 'X', '.', '.'},
            {'.', '.', '.', '.'}
        },
        //Z shape 
        {
            {'.', '.', 'X', '.'},
            {'.', 'X', 'X', '.'},
            {'.', 'X', '.', '.'},
            {'.', '.', '.', '.'}
        },
        {
            {'.', 'X', 'X', '.'},
            {'.', '.', 'X', 'X'},
            {'.', '.', '.', '.'},
            {'.', '.', '.', '.'}
        },
    }
}

int main() {

}