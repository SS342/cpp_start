#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int magic;
    int guess;

    magic = rand();

    do{

        cout << "Input Your Magic Number: ";
        cin >> guess;

        if(guess == magic){

            cout << "**True** ";
            cout << magic;

        }
        else{

            cout << "Oh, No :( \n";

            if(guess > magic){

                cout << "Big\n";

            }
            else{

                cout << "lover\n";

            }
        }
    }while (magic != guess);

    return 0;
}
