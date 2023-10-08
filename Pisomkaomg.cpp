#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
    int cisla[5];

    srand(time(NULL)); 

    for(int i = 0; i < 5; i++) {
        cisla[i] = rand() % 100; 
    }

    for(int i = 0; i < 5; i++) {
        cout << cisla[i] << " ";
    }
    cout << endl;

    return 0;
}
