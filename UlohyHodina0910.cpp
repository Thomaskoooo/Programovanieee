#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream subor1, subor2;
    subor1.open("data.txt",ios::in);
    subor2.open("kopia.txt",ios::out);

if(subor1.is_open()) {
    cout << "Subor sa podarilo otvorit" << endl;
} else {
    cout << "Subor sa nepodarilo otvorit" << endl;
}

while(!subor1.eof()) {
    string riadok;
    getline(subor1,riadok);
    subor2 << riadok << endl;

}
subor1.close();
subor2.close();

    return 0;
}