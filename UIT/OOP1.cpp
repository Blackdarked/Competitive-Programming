#include<iostream>
#include<vector>
#include<exception>
using namespace std;

class Matrix {
private:
    vector<vector<int>> matrix;
    int rows, cols;
public:
    Matrix(int rows, int cols) : rows(rows), cols(cols), matrix(rows, vector<int>(cols)) {}
    friend istream& operator>>(istream& is, Matrix& M) {
        is >> M.rows >> M.cols;
        for (int i = 0; i < M.rows; i++) {
            M.matrix[i].resize(M.cols);
            for (int j = 0; j < M.cols; j++) {
                is >> M.matrix[i][j];
            }
        }
        return is;
    }

    friend ostream& operator<<(ostream& os, const Matrix& M) {
        for (int i = 0; i < M.rows; i++) {
            for (int j = 0; j < M.cols; j++) {
                os << M.matrix[i][j] << ' ';
            }
            os << '\n';
        }
        return os;
    }

    int& operator()(int i, int j) {
        return matrix[i][j];
    }

    Matrix operator+(Matrix& M_o) {
        if (rows != M_o.rows or cols != M_o.cols) throw invalid_argument("Two matrices do not share the same size");
        Matrix res(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                res(i, j) = (*this)(i, j) + M_o(i, j);
            }
        }
        return res;
    }
};


int main() {

}