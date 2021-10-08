#include <iostream>
using namespace std;

int main(){

    double result, n, d;

    cout << "Input divisible";
    cin >> n;

    cout << "Input divider";
    cin >> d;

    if(d != 0){
        result = n/d;
        cout << n << "/" << d << "\n";
        cout << "Result: " << result;
    }

    return 0;
}
