#include<bits/stdc++.h>
#define N 4;
#define M 30;
using namespace std;

int ld[M] = {0}; //indicate row - col + N - 1 (to store negative indices)
int rd[M] = {0}; //indicate row + col (queen can be placed on the right diagonal ?)
int cl[M] = {0}; //queen can be placed in that row ?

void printBoard(int board[N][N])
{
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf(" %d ", board[i][j]);
        }
        printf("\n");
    }
}
/* Without optimization
bool check(int board[N][N], int row, int col) {
    int i, j;
    
    //Check row on the left side
    for (int i = 0; i < col; ++i) {
        if (board[row][i])
            return false;
    }

    //Check upper diagonal on left side
    for (int i = row &&j = col; i >= 0 && j >= 0; --i && --j) {
        if (board[i][j])
            return false;
    }

    //Check lower diagonal on the left side
    for (int i = 0 && j = 0; i >= 0 && j >= 0; ++i && --j) {
        if (board[i][j])
            return false;
    }
    return true;
}
*/
bool solveNQUtil(int board[N][N], int col) {
    if (col >= N)
        return true;
    for (int i = 0; i < N;)
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    return 0;
}