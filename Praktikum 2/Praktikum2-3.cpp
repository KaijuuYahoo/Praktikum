#include <iostream>
using namespace std;

float FungsiHitungRerata(float a, float b){
    return (a+b)/2;
}

string FungsiStatus(float c) {
    if (c >= 60){
        return "Lulus";
    } else {
        return "Tidak Lulus";
    }
}

int main(){
    float nilai1,nilai2;
    cout << "Masukkan Nilai 1 : ";
    cin >> nilai1;
    cout << "Masukkan Nilai 2 : ";
    cin >> nilai2;

    cout << "Status Kelulusan : " << FungsiStatus(FungsiHitungRerata(nilai1,nilai2));
}