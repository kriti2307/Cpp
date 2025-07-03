#include <iostream>
using namespace std;

int main()
{
    int row, col, a[3][3], b[3][3], c[3][3], sn = 1, k;
    cout<<"Enter 9 Elements:";
    for (row = 0; row < 3; row++)
    for(col = 0; col<3; col++)
    {
        cout<<"\n Enter  "<<sn++<<" number";
        cin>> a[row][col];
    }
    for (row = 0; row < 3; row++)
    for(col = 0; col<3; col++)
    {
        cout<<"\n Enter  "<<sn++<<" number";
        cin>> b[row][col];
    }
    cout<<"Displaying Matrix A & B";
    for(row = 0; row < 3; row ++)
    {
        for(col = 0; col< 3; col++)
        cout<<" "<<a[row][col];
        cout<<"\n";
    }
    cout<<"\n";
    for(row = 0; row < 3; row ++)
    {
        for(col = 0; col< 3; col++)
        cout<<" "<<b[row][col];
        cout<<"\n";
    }
    for(row = 0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            c[row][col] = 0;
            for(k=0;k<3;k++)
            c[row][col] = c[row][col] + a[row][col] * b[row][col];
            cout<<" "<<c[row][col];
            cout<<"\n";
        }
    }
    return 0;

}