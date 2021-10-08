#include <iostream>
using namespace std;

int main(){

    int ivar = 100;
    double  dvar = 100.0;

    cout << "ivar: " << ivar << "\n";
    cout << "dvar: " << dvar << "\n" << "\n";

    ivar = ivar / 3;
    dvar = dvar / 3.0;

    cout << "ivar / 3: " << ivar << "\n";
    cout << "dvar / 3: " << dvar << "\n" << "\n";

    return 0;
}
