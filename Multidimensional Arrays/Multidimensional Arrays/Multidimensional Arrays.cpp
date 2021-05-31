// Multidimensional Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> grade = {
        {1,2,3},
        {4,5,6},
        {7,8,9} 
    };

    for ( int i =0; i<3; i++)
    {
        for (int j=0;j<3;j++)
        {
            cout << grade[i][j] << " ";


        }
        cout << "\n";
    }
    return 0;
}

