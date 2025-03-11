#include <iostream>
using namespace std;

float Panjang, Lebar;

 float FungsiHitungLuas(){
    return Panjang*Lebar;
 }

int main(){
    cout << "Masukkan Panjang : ";
    cin >> Panjang;
    cout << "Masukkan Lebar : ";
    cin >> Lebar;

    cout << "Luas Persegi Panjang :" << FungsiHitungLuas();
}