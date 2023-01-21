/*
 * C++ Program to Implement Floyd-Warshall Algorithm
 */
#include <iostream>
#include <conio.h>
using namespace std;
void floyds(int matriz[][9])
{
    int i, j, k;
    for (k = 0; k < 9; k++)
    {
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
            {
                if ((matriz[i][k] * matriz[k][j] != 0) && (i != j))
                {
                    if ((matriz[i][k] + matriz[k][j] < matriz[i][j]) || (matriz[i][j] == 0))
                    {
                        matriz[i][j] = matriz[i][k] + matriz[k][j];
                    }
                }
            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        cout<<"\nMinimum Cost With Respect to Node:"<<i<<endl;
        for (j = 0; j < 9; j++)
        {
            cout<<matriz[i][j]<<"\t";
        }
 
    }
}
int main()
{
    int matriz[9][9];
    cout<<"ENTER VALUES OF ADJACENCY MATRIX\n\n";
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin>>matriz[i][j];
        }
    }
    floyds(matriz);
    getch();
}
