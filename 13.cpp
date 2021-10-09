#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int magic, guess;

    cout << "input number: ";
    cin >> guess;

    magic = rand();

    if(guess == magic) cout << "**Yes**";
    else{
        cout << "\n" << magic;
    }
    return 0;
}
