#include <iostream>
using namespace std;

int main() {
    int i;
    float sum = 1, e, b, f, po, div;

    cout << "Enter the base: ";
    cin >> b;
    cout << "Enter the exponent: ";
    cin >> e;

    po = 1;  
    f = 1;   

    for (i = 1; i <= e; i++) {
        po = po * b;     
        f = f * i;       
        div = po / f;     

        if (i % 2 == 0)
            sum = sum + div;
        else
            sum = sum - div;
    }

    cout << "Result: " << sum << endl;
    return 0;
}

