#include <iostream>
#include <time.h>

using namespace std;


float cestovne(int km, int vek) {
    if(vek < 18 || vek > 60) {
        return 0;
    }
    if(km <= 10) {
        return 1 * km;
    }
    if(km <= 40) {
        return 0.9 * km;
    }
    if(km <= 80) {
        return 0.8 * km;
    }
    return 0.7 * km;
}


int stromceky(int cas, int pracovnyCas, int prestavka) {
    int pocet = 0;
    while(pracovnyCas > 0) {
        pracovnyCas -= cas;
        pocet++;
        if(pracovnyCas > 0) {
            pracovnyCas -= prestavka;
        }
    }
    return pocet;
}

int main() {

    srand(time(NULL));

    cestovne(10, 20);

    int km = rand() % 101;
    int vek = rand() % 101;
    cout << "km: " << km << endl;
    cout << "vek: " << vek << endl;

    float cena = cestovne(km, vek);
    cout << "cena: " << cena << endl;


    stromceky(10, 100, 5);

    int cas = rand() % 101;
    int pracovnyCas = rand() % 101;
    int prestavka = rand() % 101;
    cout << "cas: " << cas << endl;
    cout << "pracovnyCas: " << pracovnyCas << endl;
    cout << "prestavka: " << prestavka << endl;

    int pocet = stromceky(cas, pracovnyCas, prestavka);
    cout << "pocet: " << pocet << endl;

    return 0;
}






