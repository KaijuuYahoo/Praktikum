#include <iostream>
using namespace std;

float Luas, Panjang, Lebar;

void ProsedurHitungLuas(){
    Luas = Panjang * Lebar;
}

int main(){
    cout << "Masukkan Panjang: ";
    cin >> Panjang;
    cout << "Masukkan Lebar: ";
    cin >> Lebar;
    ProsedurHitungLuas();
    cout << "Luas Persegi Panjang: " << Luas << endl;
    return 0;
}