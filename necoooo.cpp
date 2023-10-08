#include <iostream>
#include <time.h>

using namespace std;

int main() {

    srand(time(NULL));



    int pole[3][6];
    for(int i=0; i<3; i++) {
        for(int j=0; j<6; j++) {
            pole[i][j] = rand() % 101;
        }
        }


        
        for(int i=0; i<3; i++) {
            for(int j=0; j<6; j++) {
                cout << pole[i][j] << " ";
            } 
            cout << endl;
        }

        
        int sucet = 0;
        for(int i=0; i<3; i++) {
            for(int j=0; j<6; j++) {
                sucet += pole[i][j];
            }
        }
        cout << "sucet: " << sucet << endl;

        
        float priemer = (float)sucet / (3*6);
        cout << "priemer: " << priemer << endl;


    int mini = pole[0][0];
    int maxi = pole[0][0];
    for(int i=0; i<3; i++) {
        for(int j=0; j<6; j++) {
            if(pole[i][j] < mini) {
                mini = pole[i][j];
            }
            if(pole[i][j] > maxi) {
                maxi = pole[i][j];
            }
        }
    }
    cout << "min: " << mini << endl;
    cout << "max: " << maxi << endl;

    



        
    

    return 0;
}