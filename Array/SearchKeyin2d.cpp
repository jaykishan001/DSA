#include <bits/stdc++.h>
using namespace std;

bool searchKey(int arr[][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return 1;
            }
        }
    }
        return 0; 
}

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;
    int key;
    cout << "Enter key:" << endl;
    cin >> key;
    if (searchKey(arr, row, col, key))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
}