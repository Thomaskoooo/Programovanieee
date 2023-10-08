#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {

srand(time(NULL));

//uloha 1
int pole[10];
int i;
int min;
int max;
int sucet = 0;
float priemer;

for (i = 0; i < 10; i++) {
    cout << "Zadajte " << i + 1 << ". cislo: ";
    cin >> pole[i];
}

for (i = 0; i < 10; i++) {
    cout << pole[i] << " ";
}

min = pole[0];
max = pole[0];

for (i = 0; i < 10; i++) {
    if (pole[i] < min) {
        min = pole[i];
    }
    if (pole[i] > max) {
        max = pole[i];
    }
    sucet = sucet + pole[i];

}

priemer = (float)sucet / 10;

cout << endl << "Min: " << min << endl;
cout << "Max: " << max << endl;



//uloha 2


   
    int x;
    cout << "Uhadni cislo ";

    int pole1[20];
    for(int i=0;i<20;i++) {
        pole[i]=rand()%100;
    }

    int pokusy = 3;
    bool nasiel = false;
    int poradieX = -1;
    while (pokusy > 0 && !nasiel) {
        cin >> x;

        for(int i=0;i<20;i++) {
            if(pole1[i] == x) {
                nasiel = true;
                poradieX = i;
                break;
            }
        }

        if(!nasiel) {
            pokusy--;
            if (pokusy == 0) {
                cout << "Neuhadol si ani jedno cislo :/ skus nabuduce!" << endl;
            } else {
                cout << "Este mas " << pokusy << " pokusov. Skus znova: " << endl;
            }
        }
    }

    if(nasiel) {
        cout << "Uhadol si sprave!!! " << x << " Je na pozicii " << poradieX << endl;
    }


    cout << endl;
    //uloha 3
    int pole2[20];
    for(int i=0;i<20;i++) {
        pole2[i]=rand()%100;
    }

    for(int i=0;i<20;i++) {
        for(int j=0;j<20;j++) {
            if(i!=j && pole2[i]==pole2[j]) {
                pole2[j]=rand()%100;
                j=0;
            }
        }
    }

    for(int i=0;i<20;i++) {
        cout << pole2[i] << " ";
    }

    



    


    




    return 0;

}