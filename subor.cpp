
#include <iostream>
#include <fstream> //!1. kniznica

using namespace std;

struct Hodnotenie {
    string meno;
    double body;
    double bodyMax;
    double percenta;
    int znamka;
    string trieda;
    string predmet;


};

int main() {
    fstream subor; //!2. premenna pre subor
    subor.open("ziaci.txt",ios::in); //!3. otvorenie suboru
    if(subor.is_open()) { //!4 kontrola otvorenia suboru
        int N = 15;
        Hodnotenie h1;
        double bodyC=0;
        double znamkaT=0;
        Hodnotenie pisomka[N];
        for(int i=0;i<N;i++) {
            subor >> pisomka[i].meno; //!5 nacitanie zo suboru
            subor >> pisomka[i].body;
            subor >> pisomka[i].bodyMax;

            pisomka[i].percenta = (pisomka[i].body/pisomka[i].bodyMax)*100;

            if(pisomka[i].percenta >= 85) {
                pisomka[i].znamka = 1;
            }else if(pisomka[i].percenta<85 && pisomka[i].percenta>=75){
                pisomka[i].znamka = 2;
            }else if(pisomka[i].percenta<75 && pisomka[i].percenta>=65){
                pisomka[i].znamka = 3;
            }else if(pisomka[i].percenta<65 && pisomka[i].percenta>=55){
                pisomka[i].znamka = 4;
            }else if(pisomka[i].percenta<55){
                pisomka[i].znamka = 5;
            }

            subor >> pisomka[i].trieda;
            subor >> pisomka[i].predmet;

            cout << "Meno: " << pisomka[i].meno << endl;
            cout << "Body: " << pisomka[i].body << endl;
            cout << "Max Bodov: " << pisomka[i].bodyMax << endl;
            cout << "Percenta: " << pisomka[i].percenta << endl;
            cout << "Znamka: " << pisomka[i].znamka << endl;
            cout << "Percenta: " << pisomka[i].percenta << endl;
            cout << "Trieda: " << pisomka[i].trieda << endl;
            cout << "Predmet: " << pisomka[i].predmet << endl << endl;

            bodyC += pisomka[i].body;
        }

        znamkaT = bodyC/N;

        for(int i=0;i<N;i++){
        if(pisomka[i].znamka == 1){
            cout<< "1 mal/a " << pisomka[i].meno << endl;
            }
        }

        for(int i=0;i<N;i++){
        if(pisomka[i].percenta < 42){
            cout<< "5 mal/a " << pisomka[i].meno << endl;
            }
        }

        cout << "Priemer triedy: " << znamkaT << "%" << endl;

        subor.close(); //!6 zatvorenie suboru
    } else {
        cout << "Subor sa nepodarilo otvorit";
    }

    return 0;
}




