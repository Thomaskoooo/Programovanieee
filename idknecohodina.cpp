#include <iostream>
#include <fstream>

using namespace std;


struct Hod {
    string meno;
    double body;
    double bodyMax;
    double percenta;
    int znamka;
    string trieda;
    string predmet;
};




int main(){

Hod h1; // vytvorili sme si premennu h1 typu Hod
cout << "Zadaj meno: ";
cin >> h1.meno;
cout << "Zadaj body: ";
cin >> h1.body;
cout << "Zadaj bodyMax: ";
cin >> h1.bodyMax;

h1.percenta = h1.body / h1.bodyMax * 100;
//legit zo stranky
if(h1.percenta >= 90) {
    h1.znamka = 1;
} else if(h1.percenta >= 73) {
    h1.znamka = 2;
} else if(h1.percenta >= 56) {
    h1.znamka = 3;
} else if(h1.percenta >= 45) {
    h1.znamka = 4;
} else {
    h1.znamka = 5;
}

cout << "Zadaj triedu: ";
cin >> h1.trieda;
cout << "Zadaj predmet: ";
cin >> h1.predmet;

cout << "Hodnotenie: " << h1.znamka << endl;
cout << "Percenta: " << h1.percenta << endl;
cout << "Meno: " << h1.meno << endl;
cout << "Trieda: " << h1.trieda << endl;
cout << "Predmet: " << h1.predmet << endl;


//zisti kto mal znamku 1
//zisti kto mal znamku 5
//vypis mena
//priemer znamok

Hod ziaci[5];
for(int i = 0; i < 5; i++) {
    cout << "Zadaj meno: ";
    cin >> ziaci[i].meno;
    cout << "Zadaj body: ";
    cin >> ziaci[i].body;
    cout << "Zadaj bodyMax: ";
    cin >> ziaci[i].bodyMax;

    ziaci[i].percenta = ziaci[i].body / ziaci[i].bodyMax * 100;
    //legit zo stranky
    if(ziaci[i].percenta >= 90) {
        ziaci[i].znamka = 1;
    } else if(ziaci[i].percenta >= 73) {
        ziaci[i].znamka = 2;
    } else if(ziaci[i].percenta >= 56) {
        ziaci[i].znamka = 3;
    } else if(ziaci[i].percenta >= 45) {
        ziaci[i].znamka = 4;
    } else {
        ziaci[i].znamka = 5;
    }

    cout << "Zadaj triedu: ";
    cin >> ziaci[i].trieda;
    cout << "Zadaj predmet: ";
    cin >> ziaci[i].predmet;
}

//Ziaci s 1

for(int i = 0; i < 5; i++) {
    if(ziaci[i].znamka == 1) {
        cout << "Jednotku mal: " << ziaci[i].meno << endl;
    }
}

//ziaci s 5

for(int i = 0; i < 5; i++) {
    if(ziaci[i].znamka == 5) {
        cout << "Patku mal: " << ziaci[i].meno << endl;
    }
}

//priemer znamok

double priemer = 0;
for(int i = 0; i < 5; i++) {
    priemer += ziaci[i].znamka;
}
priemer /= 5;
cout << "Priemer znamok: " << priemer << endl;



ofstream subor;
subor.open("ziaci.txt"); //ios:in je citanie a ios:out je zapisovanie - defaultne je ios:out
if(subor.is_open()) {
    cout << "Subor sa podarilo otvorit" << endl;
}

else {
    cout << "Subor sa nepodarilo otvorit" << endl;
} 


for(int i = 0; i < 5; i++) {
    subor << ziaci[i].meno << " " << ziaci[i].trieda << " " << ziaci[i].predmet << " " << ziaci[i].znamka << endl;
} //zapis do suboru


subor.close();




    return 0;
}