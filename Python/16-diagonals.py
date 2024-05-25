size = 5
board = [['.'] * size for i in range(size)]

def canPlace(p, i, j, board):
    if p == 0:
        if (j>0 and board[i][j-1] == 1 ) or (i>0 and board[i-1][j] == 1) or (i>0 and j>0 and board[i-1][j-1] == 0):
            return False
    if p == 1:
        if (j>0 and board[i][j-1] == 0) or (i>0 and board[i-1][j] == 0) or (i>0 and j+1<size and board[i-1][j+1] == 1):
            return False
    return True



def dfs(x, count):
    if (size*size - x + 1) + count < 16:
        return
    if x == size*size:
        if count == 16:
            print(board)
        return

    i = x // size
    j = x % size
    if canPlace(0, i, j, board):
        board[i][j] = 0
        dfs(x+1, count+1)
        board[i][j] = '.'
    if canPlace(1, i, j, board):
        board[i][j] = 1
        dfs(x+1, count+1)
        board[i][j] = '.'
    dfs(x+1, count)

dfs(0,0)