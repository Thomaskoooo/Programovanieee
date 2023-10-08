#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
    srand(time(NULL));
    fstream subor;
    subor.open("faktura.txt",ios::in);
    if(subor.is_open()) {
        int cislo;
        int pocet=0;
        int suma=0;
        int minimum=INT_MAX;
        int maximum=INT_MIN;
        while(!subor.eof()) {
            subor >> cislo;
            if(subor.fail()) {
                break;
            }
            if(cislo%2==0) {
                pocet++;
            }
            cout << cislo << endl;
            suma+=cislo;
            if(cislo<minimum) {
                minimum=cislo;
            }
            if(cislo>maximum) {
                maximum=cislo;
            }
        }
        cout << "Parnych cisel bolo: " << pocet << endl;
        cout << "Suma cisel je: " << suma << endl;
        cout << "Priemerna hodnota cisel je: " << (float)suma/pocet << endl;
        cout << "Minimum je: " << minimum << endl;
        cout << "Maximum je: " << maximum << endl;

        subor.close();
    } else {
        cout << "Subor sa nepodarilo otvorit";
    }

    return 0;
}
