#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int number;

    cout << "Number from 1 to 3: ";
    cin >> number;

    switch (number) {

        case 1:
            cout << "1\n";
            break;

        case 2:
            cout << "2\n";
            break;

        case 3:
            cout << "3\n";
            break;

    }

    return 0;
}
