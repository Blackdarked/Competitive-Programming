#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Board {
private:
    int row, col;
    vector<vector<char>> grid;
    void fillRandomBlock(int num) {
        for (int i = 0; i < num; i++) {
            int r = rand() % row;
            int c = rand() % col;
            grid[r][c] = '*';
        }
    }

public:
    Board(int r, int c) : row(r), col(c) {
        grid.resize(r, vector<char>(c, '.'));
        initBoard();
    }
    ~Board() {}

    void display() const {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }

    bool validPos(const vector<vector<char>>& block, int r, int c) const {
        for (int i = 0; i < block.size(); i++) {
            for (int j = 0; j < block[i].size(); j++) {
                if (block[i][j] == '*' && (r + i < 0 || r + i >= row || c + j < 0 || c + j >= col || grid[r + i][c + j] == '*'))
                    return false;
            }
        }
        return true;
    }

    void placeBlock(const vector<vector<char>>& block, int r, int c) {
        for (int i = 0; i < block.size(); i++) {
            for (int j = 0; j < block[i].size(); j++) {
                if (block[i][j] == '*')
                    grid[r + i][c + j] = '*';
            }
        }
    }

    void initBoard() {
        fillRandomBlock(row * col / 10);
    }

    int getScore() const {
        int score = 0;
        for (int i = 0; i < row; i++) {
            bool full = true;
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == '.')
                    full = false;
            }
            if (full) {
                score++;
                for (int j = i; j > 0; j--) {
                    grid[j] = grid[j - 1];
                }
                grid[0].assign(col, '.');
            }
        }
        return score;
    }
};

class Block {
private:
    vector<vector<vector<char>>> shapes;
    int curShape;
    void init() {
        shapes = { {{'*', '*', '*', '*'}}, // I shape
                  {{'*', '*'}, {'*', '*'}}, // O shape
                  {{'*', '*', '*'}, {'*', '.'}}, // J shape
                  {{'*', '*', '*'}, {'.', '*'}}, // L shape
                  {{'.', '*', '*'}, {'*', '*', '.'}}, // S shape
                  {{'*', '*', '.'}, {'.', '*', '*'}}, // Z shape
                  {{'.', '*', '*'}, {'*', '*', '*'}} }; // T shape
        curShape = rand() % shapes.size();
    }

public:
    Block() {
        init();
    }

    void rotate() {
        vector<vector<char>> temp = shapes[curShape];
        int n = temp.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(temp[i][j], temp[j][i]);
            }
        }
        for (int i = 0; i < n; i++) {
            reverse(temp[i].begin(), temp[i].end());
        }
        shapes[curShape] = temp;
    }

    void display() const {
        for (int i = 0; i < shapes[curShape].size(); i++) {
            for (int j = 0; j < shapes[curShape][i].size(); j++) {
                cout << shapes[curShape][i][j] << " ";
            }
            cout << endl;
        }
    }

    const vector<vector<vector<char>>> getShape() const {
        return shapes;
    }
};

class Ishape : public Block {
public:
    Ishape() : Block() {}
};

class Lshape : public Block {
public:
    Lshape() : Block() {}
};

class Jshape : public Block {
public:
    Jshape() : Block() {}
};

class Sshape : public Block {
public:
    Sshape() : Block() {}
};

class Zshape : public Block {
public:
    Zshape() : Block() {}
};

class Oshape : public Block {
public:
    Oshape() : Block() {}
};

class Tshape : public Block {
public:
    Tshape() : Block() {}
};

class Game {
private:
    Board board;
    Block curBlock;
    int blockProcessed;

    void display() const {
        cout << "Score: " << board.getScore() << endl;
        curBlock.display();
        board.display();
    }

    void handleRotate() {
        if (board.validPos(curBlock.getShape(), 0, 0)) {
            curBlock.rotate();
        }
    }

    void handleBlock() {
        if (board.validPos(curBlock.getShape(), 0, 0)) {
            board.placeBlock(curBlock.getShape(), 0, 0);
            blockProcessed++;
            curBlock.init();
        }
    }

    void handleSkip() {
        blockProcessed++;
        curBlock.init();
    }

    void genBlock() {
        if (blockProcessed % 5 == 0) {
            curBlock.init();
        }
    }

public:
    Game(int row, int col) : board(row, col), blockProcessed(0) {
        genBlock();
    }

    void play() {
        while (true) {
            display();
            int input;
            cin >> input;
            switch (input) {
            case 1:
                handleRotate();
                break;
            case 2:
                handleBlock();
                genBlock();
                break;
            case 3:
                handleSkip();
                break;
            default:
                cout << "Invalid input" << endl;
            }
        }
    }
};