#include <iostream>
using namespace std;

//numeric nLuas, nPanjang, nLebar;
float Luas , Panjang, Lebar;

void InputData(){
    //display "Masukkan Panjang : "
    cout << "Masukkan Panjang : ";
    cin >> Panjang;
    //display "Masukkan Lebar : "
    cout << "Masukkan Lebar : ";
    cin >> Lebar;
}

float HitungLuas(){
    //return nPanjang * nLebar
    return Panjang * Lebar;
}

void TampilData (){
    //display "Luas Persegi Panjang : " + nLuas
    cout << "Luas Persegi Panjang :" << HitungLuas();
}

int main(){
    InputData();
    TampilData();
}
