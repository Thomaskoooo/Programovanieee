#include <iostream>

using namespace std;

int main() {



int pole[15];
int suma = 0;
int priemer = 0;
int najhorsi = 0;
int najhorsiIndex = 0;
int najlepsi = 0;
int najlepsiIndex = 0;
int jednotky = 0;
int patky = 0;
int nadpriemer = 0;

for(int i = 0; i < 15; i++) {
    pole[i] = rand() % 101;
    suma += pole[i];
    if(pole[i] > najlepsi) {
        najlepsi = pole[i];
        najlepsiIndex = i;
    }
    if(pole[i] < najhorsi || i == 0) {
        najhorsi = pole[i];
        najhorsiIndex = i;
    }
    if(pole[i] > 85) {
        jednotky++;
    }
    if(pole[i] < 40) {
        patky++;
    }
}

priemer = suma / 15;

for(int i = 0; i < 15; i++) {
    if(pole[i] > priemer) {
        nadpriemer++;
    }
}

cout << "Priemer: " << priemer << endl;
cout << "Najlepsi: " << najlepsi << " na indexe " << najlepsiIndex << endl;
cout << "Najhorsi: " << najhorsi << " na indexe " << najhorsiIndex << endl;
cout << "Jednotky: " << jednotky << endl;
cout << "Patky: " << patky << endl;
cout << "Nadpriemer: " << nadpriemer << endl;

for(int i = 0; i < 15; i++) {
    cout << "Ziak " << i+1 << " ma " << pole[i] << " percent" << endl;
}


    return 0;
}