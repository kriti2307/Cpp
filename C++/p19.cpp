#include <iostream>
using namespace std;

int main(){
    char ch;
    float a, b, c, area, ar;

    cout<<"Enter an integer a: ";
    cin>>a;

    cout<<"Enter an integer b: ";
    cin>>b;

    cout<<"\nChoose Any One: ";
    cout<<"\n.A Swapping";
    cout<<"\n.B Greater of Two";
    cout<<"\n.C Area of Traingle:";
    cout<<"\n.D Area of Rectangle";
    cout<<"\n Enter Your Choice:";
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

        case 'B':
        case 'b':
        if(a==b)
        cout<<"Both are equal";
        else
        if(a>b)
        cout<<"a is greater";
        else
        cout<<"B is greater";
        break;

        case 'C':
        case 'c':
        area = (0.5)*a*b;
        cout<<"The area of the triangle is: "<<area;
        break;

        case 'D':
        case 'd':
        ar = a * b;
        cout<<"the area of the rectangle is: "<<ar;
        break;



    }
    return 0;
}  