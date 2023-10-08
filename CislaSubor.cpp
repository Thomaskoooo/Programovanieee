#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
    srand(time(NULL));

    fstream subor;
    subor.open("faktura.txt",ios::in);

    if (subor.is_open()) {
        string riadol;
        int cislo;
        int pocet=0;

        while(!subor.eof()) {
            subor >> cislo;
            if (subor.fail()) {
                break;
            }

            if (cislo%2==0) {
                pocet++;
            }
        }
        cout << cislo << endl;
    }
     else {
        cout << "Subor sa nepodarilo otvorit" << endl;
    }

//
 //           for(int i=0;i<1000;i++) {
   //     subor << rand()%100 << endl;}

    
    
        subor.close();




    return 0;


}