#include <iostream>
using namespace std;
// Change values of M and N to change the
// dimensions of the input matrix.
const int N,M;

void spiralMatrixPrint(int rows, int cols, int arr[N][M])  {
  
  // Defining the boundaries of the matrix.
  int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
  
  // Defining the direction in which the array is to be traversed.
  int dir = 1;
 
  while (top <= bottom && left <= right) {

    if (dir == 1) {    // moving left->right
      for (int i = left; i <= right; ++i) {
        cout<<arr[top][i]  << " ";
      }
      // Since we have traversed the whole first
      // row, move down to the next row.
      ++top;
      dir = 2;
    } 
    else if (dir == 2) {     // moving top->bottom
      for (int i = top; i <= bottom; ++i) {
          cout<<arr[i][right]  << " ";
      }
      // Since we have traversed the whole last
      // column, move left to the previous column.
      --right;
      dir = 3;
    } 
    else if (dir == 3) {     // moving right->left
      for (int i = right; i >= left; --i) {
          cout<<arr[bottom][i] << " ";
      }
      // Since we have traversed the whole last
      // row, move up to the previous row.
      --bottom;
      dir = 4;
    } 
    else if (dir == 4) {     // moving bottom->up
      for (int i = bottom; i >= top; --i) {
          cout<< arr[i][left] << " ";
      }
      // Since we have traversed the whole first
      // col, move right to the next column.
      ++left;
      dir = 1;
    }
  }
}

int main() {
  // Driver code
  
  cin>>N>>M;
  int mat[N][M] = { { 1, 2, 3, 4 }, 
                  { 12, 13, 14, 5 }, 
                  { 11, 16, 15, 6 }, 
                  { 10, 9, 8, 7 } };
  
  spiralMatrixPrint(N, M, mat); 
  return 0; 
}
