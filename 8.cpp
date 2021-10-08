#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    a = 2;
    b = 3;

    if(a < b) cout << "a < b\n";

    c = a - b;

    cout << "c =" << c << "\n";

    if(c >= 0) cout << "c < 0 or c = 0\n";

    if(c < 0) cout << "c < 0";

    cout << "\n\n";

    c = b - a;

    cout << "c =" << c << "\n";

    if(c >= 0) cout << "c >= 0 \n";

    if(c < 0) cout << "c < 0\n";

    return 0;
}
