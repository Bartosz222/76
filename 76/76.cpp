#include <iostream>
#include <fstream>

using namespace std;
void z1() {
    ifstream wejscie;
    ofstream wyjscie;
    string napis;
    char buf;
    int x;
    string base;
    string tablica[6];
    int tab[50];
    int i = 0;
    int index = 0;
    wejscie.open("szyfr1.txt");
    wyjscie.open("wynik1.txt");
    for (int i = 0; i <= 5; i++) {
        wejscie >> napis;
        tablica[i] = napis;
    }
    while (!wejscie.eof()) {
        wejscie >> x;
        tab[i] = x;
        i++;
    }
    for (int i = 0; i <= 5; i++) {
        base = tablica[i];
        for (int j = 0; j < base.length(); j++) {
            buf = base[j];
            int z = tab[index] - 1;
            base[j] = base[z];
            base[z] = buf;
            index++;
            if (index == 50) index = 0;
        }
        cout << base << endl;
        wyjscie << base << endl;
    }
    cout << endl;
    wyjscie.close();
    wejscie.close();
}
void z2() {
    string napis;
    int x;
    int tab[15];
    int i = 0;
    char buf;
    int index = 0;
    ifstream wejscie;
    ofstream wyjscie;
    wejscie.open("szyfr2.txt");
    wyjscie.open("wynik2.txt");
    wejscie >> napis;
    while (!wejscie.eof()) {
        wejscie >> x;
        tab[i] = x;
        i++;
    }
    for (int j = 0; j < napis.length(); j++) {
        buf = napis[j];
        int z = tab[index] - 1;
        napis[j] = napis[z];
        napis[z] = buf;
        index++;
        if (index == 15) index = 0;
     }
    cout << napis << endl;
    cout << endl;
    wyjscie << napis << endl;
    wejscie.close();
    wyjscie.close();
}
void z3() {
    ifstream wejscie;
    ofstream wyjscie;
    string napis;
    char buf;
    int tab[] = { 6,2,4,1,5,3 };
    int index;
    wejscie.open("szyfr3.txt");
    wyjscie.open("wynik3.txt");
    wejscie >> napis;
    index = (napis.length() % 6 - 1);
    for (int i = napis.length() - 1; i >= 0; i--) {
        buf = napis[i];
        int z = tab[index] - 1;
        napis[i] = napis[z];
        napis[z] = buf;
        index--;
        if (index == -1) index = 6 - 1;
    }
    cout << napis;
    wyjscie << napis;
    wejscie.close();
    wyjscie.close();
}
int main(){
    
    z1();
    z2();
    z3();
}
