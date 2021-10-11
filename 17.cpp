#include <iostream>
#include <cstdlib>
using namespace std;

void box(int length, int width, int height);

int main(){

    box(10,10,20);

    return 0;
}

void box(int length, int width, int height){

    cout << "Volume: " << length * width * height << "\n";

}
