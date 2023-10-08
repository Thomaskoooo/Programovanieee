#include <iostream>

using namespace std;

int main() {
    //!retazec ako pole znakov
    string text;
    cout << "Zadaj text: ";
    getline(cin, text); //!precita cely riadok

    //!vypis retazca po pismenach
    for(int i=0;i<text.length();i++) {
        cout << text[i];
    }


/*
    //!posun dolava
    char prvy = text[0];
    for(int i = 0;i<text.length()-1;i++) {
        text[i]=text[i+1];
    }
    text[text.length()-1]= prvy;
    cout << endl;
    //!vypis retazca po pismenach
    for(int i=0;i<text.length();i++) {
        cout << text[i];
    }
*/

    //!riesenie 1
    //!kolkokra sa v texte nachadza samohlaska
    int pocet=0;
    for(int i=0;i<text.length();i++) {
        if(text[i]=='a' || text[i]=='e' || text[i]== 'i' || text[i]=='o' || text[i]== 'u' || text[i]=='y') {
            pocet++;
        }
    }
    cout << endl << "Samohlaska sa v texte nachadza " << pocet << "-krat";

    //!riesenie 2
    //!kolkokra sa v texte nachadza samohlaska
    string samohlasky = "aeiouy";
    pocet = 0;
    for(int i=0;i<text.length();i++) {//!prechod prvkami textu
        for(int j=0;j<samohlasky.length();j++) {//!prechod samohlaskami
            if(text[i]==samohlasky[j]) {//!je pismenko medzi samohlaskami
                pocet++;
                break;//!ukonci vnutorny cyklus
            }
        }
    }
    cout << endl << "Samohlaska sa v texte nachadza " << pocet << "-krat";

    
    for(int i=0;i<text.length();i++) {

        for(int j=0;j<samohlasky.length();j++) {

            if(text[i]==samohlasky[j]) {

                text[i]='*';
                break;
            }
        }
    }
    cout << endl << text;



    return 0;
}