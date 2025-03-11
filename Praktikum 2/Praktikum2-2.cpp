#include <iostream>
using namespace std;

float FungsiHitungLuasBerParameter (float a, float b){
    return a*b;
}

int main(){
    float Panjang, Lebar;
    cout << "Masukkan Panjang : ";
    cin >> Panjang;
    cout << "Masukkan Lebar : ";
    cin >> Lebar;

    cout << "Luas Persegi Panjang :" << FungsiHitungLuasBerParameter(Panjang, Lebar);
}