#include<vector>

class Game {
private:
    Board board;
    Block curBlock;
    int blockProcessed;

    
    void display() const;
    void handleRotate();
    void handleBlock();
    void handleSkip();
    void genBlock();
};

class Board {
private:
    int row, col;
    std::vector<std::vector<char>> grid;
    void fillRandomBlock(int num);

public:
    Board(int r, int c);
    ~Board();

    void display() const;
    bool validPos(const std::vector<std::vector<char>>& block, int r, int c) const;
    void placeBlock(const std::vector<std::vector<char>>& block, int r, int c);
    void initBoard();
    int  getScore() const;

};

class Block {
private:
    std::vector<std::vector<std::vector<char>>> shapes;
    int curShape;
    void init();

public:
    Block();
    void rotate();
    void display() const;
    const std::vector<std::vector<std::vector<char>>> getShape() const;
};

class Ishape : public Block {
private:

public:
    
};

class Lshape : public Block {
private:

public:
    
};

class Jshape : public Block {
private:

public:
    
};

class Sshape : public Block {
private:

public:
    
};

class Zshape : public Block {
private:

public:
    
};

class Oshape : public Block {
private:

public:
    
};

class Tshape : public Block {
private:

public:
    
};