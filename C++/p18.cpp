#include <iostream>
using namespace std;

int main(){
    char ch;
    float a, b, c;

    cout<<"Enter an integer a: ";
    cin>>a;

    cout<<"Enter an integer b: ";
    cin>>b;

    cout<<"\nChoose Any One: ";
    cout<<"\n.A Swapping";
    cout<<"\n.B Greater of Two";
    cout<<"\n.C Area of Traingle:";
    cout<<"\n.D Area of Rectangle";
    cout<<"\n enter your choice:";
    cin>>ch;

    switch(ch)
    {
        case 'A':
        case 'a':
        c = a;
        a = b;
        b = c;
        cout<<"The swapped numbers are:";
        cout<<"\nA : "<<a;
        cout<<"\n B: "<<b;
        break;
    }
    return 0;
}  