#include <iostream>

using namespace std;

int main()
{
    char piskvorky[3][3] = {{'-','-','-'},
                            {'-','-','-'},
                            {'-','-','-'}};

    int r,s;
    char tah = 'X';
    while(true) {
        cout << "Zadaj riadok: ";
        cin >> r;
        cout << "Zadaj stlpec: ";
        cin >> s;
        if(r>=0 && r<=2 && s>=0 && s<=2) {
            if(piskvorky[r][s]=='X' || piskvorky[r][s]=='O') {
                cout << "Policko je obsadene" << endl;
                continue;
            }
            piskvorky[r][s] = tah;
            if(tah  == 'X') {
                tah = 'O';
            } else {
                tah = 'X';
            }
        } else {
            cout << "nespravny tah";
            continue;
        }

        //vypis dvojrozmerneho pola
        for(int j=0;j<3;j++) {//!prechod cez riadky
            for(int i=0;i<3;i++) {//!prechod cez stlpce v danom riadku
                cout << piskvorky[j][i] << " ";
            }
            cout << endl;
        }

        //!kontrola vyhry
        //!vyhra v 1. riadku
        if(piskvorky[0][0]=='X' && piskvorky[0][1]=='X' && piskvorky[0][2]=='X') {
            cout << "Vyhral X";
            break;
        }
        if(piskvorky[0][0]=='O' && piskvorky[0][1]=='O' && piskvorky[0][2]=='O') {
            cout << "Vyhral O";
            break;
        }
        //!vyhra v 2. riadku
        if(piskvorky[1][0]=='X' && piskvorky[1][1]=='X' && piskvorky[1][2]=='X') {
            cout << "Vyhral X";
            break;
        }
        if(piskvorky[1][0]=='O' && piskvorky[1][1]=='O' && piskvorky[1][2]=='O') {
            cout << "Vyhral O";
            break;
        }

        //!vyhra v 3. riadku
        if(piskvorky[2][0]=='X' && piskvorky[2][1]=='X' && piskvorky[2][2]=='X') {
            cout << "Vyhral X";
            break;
        }

      
        
        if(piskvorky[0][0]=='X' && piskvorky[1][1]=='X' && piskvorky[2][2]=='X') {
            cout << "Vyhral X";
            break;
        }

        if(piskvorky[0][0]=='O' && piskvorky[1][1]=='O' && piskvorky[2][2]=='O') {
            cout << "Vyhral O";
            break;
        }

        if(piskvorky[0][2]=='X' && piskvorky[1][1]=='X' && piskvorky[2][0]=='X') {
            cout << "Vyhral X";
            break;
        }

        if(piskvorky[0][2]=='O' && piskvorky[1][1]=='O' && piskvorky[2][0]=='O') {
            cout << "Vyhral O";
            break;
        }




        


        if(piskvorky[2][0]=='O' && piskvorky[2][1]=='O' && piskvorky[2][2]=='O') {
            cout << "Vyhral O";
            break;
        }

        //!vyhra v 1. stlpci
        if(piskvorky[0][0]=='X' && piskvorky[1][0]=='X' && piskvorky[2][0]=='X') {
            cout << "Vyhral X";
            break;
        }

        if(piskvorky[0][0]=='O' && piskvorky[1][0]=='O' && piskvorky[2][0]=='O') {
            cout << "Vyhral O";
            break;
        }

        //!vyhra v 2. stlpci
        if(piskvorky[0][1]=='X' && piskvorky[1][1]=='X' && piskvorky[2][1]=='X') {
            cout << "Vyhral X";
            break;
        }

        if(piskvorky[0][1]=='O' && piskvorky[1][1]=='O' && piskvorky[2][1]=='O') {
            cout << "Vyhral O";
            break;
        }

        //!vyhra v 3. stlpci
        if(piskvorky[0][2]=='X' && piskvorky[1][2]=='X' && piskvorky[2][2]=='X') {
            cout << "Vyhral X";
            break;
        }

        if(piskvorky[0][2]=='O' && piskvorky[1][2]=='O' && piskvorky[2][2]=='O') {
            cout << "Vyhral O";
            break;
        }

        

        //!kontrola remizy
        bool remiza = true;
        for(int j=0;j<3;j++) {//!prechod cez riadky
            for(int i=0;i<3;i++) {//!prechod cez stlpce v danom riadku
                if(piskvorky[j][i]=='-') {
                    remiza = false;
                }
            }
        }
        if(remiza) {
            cout << "Remiza";
            break;
        }
    }



    return 0;
}