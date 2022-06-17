// Sudoku Solver using Backtracking
#include <stdio.h>
#include <stdbool.h>
#define N 9

bool isSafe(int board[N][N], int row, int col, int num)
{
    // for row checking
    for (int i = 0; i <= (N - 1); i++)
    {
        if (board[row][i] == num)
        {
            return false;
        }
    }
    // for column checking
    for (int j = 0; j <= (N - 1); j++)
    {
        if (board[j][col] == num)
        {
            return false;
        }
    }
    // for grid checking(3*3 Matrix)

    // start index of every grid
    int sr = (row / 3) * 3;
    int sc = (col / 3) * 3;
    for (int i = sr; i < sr + 3; i++)
    {
        for (int j = sc; j < sc + 3; j++)
        {
            if (board[i][j] == num)
            {
                return false;
            }
        }
    }
    // if none of the above conflicts happens then the num is valid for the cell
    return true;
}
int solveBoard(int board[N][N], int row, int col)
{
    // base condition
    if (row == N)
    {
        return true;
    }
    int new_row = 0;
    int new_col = 0;
    if (col == N - 1)
    {
        /*if column reaches the last cell,then visit the next row
        starting from the first column*/
        new_row = row + 1;
        new_col = 0;
    }
    else
    {
        // or otherwise check every column of that row one by one
        new_row = row;
        new_col = col + 1;
    }
    if (board[row][col] != 0)
    {
        if (solveBoard(board, new_row, new_col))
        {
            return true;
        }
    }
    else
    {
        // fill the place
        for (int i = 1; i <= 9; i++)
        {

            if (isSafe(board, row, col, i))
            {
                board[row][col] = i;
                if (solveBoard(board, row,col))
                {
                    return true;
                }
                else
                {
                    board[row][col] = 0;
                }
            }
        }
    }
    return false;
}
void printBoard(int sudoku[N][N])
{
    printf("\nThe Final Solved Sudoku Board will be like this-->\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", sudoku[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int Sudoku[N][N];
    printf("Enter the inputs for Sudoku Board(put 0 for empty places)--->\n");
    for (int i = 0; i <= (N - 1); i++)
    {
        for (int j = 0; j <= (N - 1); j++)
        {
            scanf("%d", &Sudoku[i][j]);
        }
    }
    if (solveBoard(Sudoku, 0, 0))
    {
        printBoard(Sudoku);
    }
    else
    {
        printf("No solution exist!!");
    }
    return 0;
}