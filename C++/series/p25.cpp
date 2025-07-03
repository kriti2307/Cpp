#include <iostream>
using namespace std;

int main()
{
    int r, i, sum = 1;
    cout<<"\n Enter the Range:";
    cin>>r;
    for(i=0;i<=r;i++)
    sum = sum + i;
    cout<<"The sum of Natural Numbers:"<<sum;
    return 0;

}