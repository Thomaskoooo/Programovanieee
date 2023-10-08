#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
    srand(time(NULL));
    fstream subor;
    subor.open("data.txt",ios::in);
    int pocetRiadkov = 0; 
    if(subor.is_open()) {
        string riadok;
        while(!subor.eof()) {
            getline(subor,riadok);
            cout << riadok << endl;
            pocetRiadkov++; 
        }

        subor.close();
        cout << "Pocet riadkov: " << pocetRiadkov << endl; 
    } else {
        cout << "Subor sa nepodarilo otvorit";
    }

    return 0;
}
