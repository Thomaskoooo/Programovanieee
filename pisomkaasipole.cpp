#include <iostream>


using namespace std;

int main() {
    int pocet_brigadnikov = 11;
    double zber[pocet_brigadnikov];
    double celkovo = 0;
    double naj_sikovny = 0;
    double naj_nesikovny = 0;
    int index_naj_sikovny;
    int index_naj_nesikovny;

    
    for (int i = 0; i < pocet_brigadnikov; i++) {
        cout << "Zadajte mnozstvo zberu pre brigadnika " << i+1 << " v kg: ";
        cin >> zber[i];
        celkovo += zber[i];
        if (zber[i] > naj_sikovny) {
            naj_sikovny = zber[i];
            index_naj_sikovny = i;
        }
        if (zber[i] < naj_nesikovny || i == 0) {
            naj_nesikovny = zber[i];
            index_naj_nesikovny = i;
        }
    }

    
    double priemer = celkovo / pocet_brigadnikov;

    
    
    cout << "Celkove nazbierane mnozstvo: " << celkovo << " kg" << endl;
    cout << "Priemer nazbieranych jablk na brigadnika: " << priemer << " kg" << endl;
    cout << "Najsikovnejsi brigadnik: " << index_naj_sikovny+1 << " s " << naj_sikovny << " kg" << endl;
    cout << "Najnesikovnejsi brigadnik: " << index_naj_nesikovny+1 << " s " << naj_nesikovny << " kg" << endl;

    
    double zisk = celkovo * 0.4;
    cout << "Brigadnici zarobili spolu " << zisk << " eur." << endl;

    
    for (int i = 0; i < pocet_brigadnikov; i++) {
        double zisk_brigadnika = zber[i] * 0.4;
        cout << "Brigadnik " << i+1 << " zarobil " << zisk_brigadnika << " eur." << endl;
    }

    return 0;
}
