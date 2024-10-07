#include <iostream>
using namespace std;

int main() {
    float berat, tinggi, imt;

    cout<<"Masukan berat badan cm: ";
    cin>>berat;
    cout<<"Masukan Tinggi badan cm: ";
    cin>>tinggi;

    tinggi = tinggi/100;
    imt = berat / (tinggi * tinggi)

    cout<<"Nilai IMT anda: " "<<imt<<endl;

    if (imt<= 18.4) {
        cout<<"Berat badan kurang"<<endl;
    } else if (imt <= 24.9) {
        cout<<"Berat badan ideal"<<endl;
    } else if (imt <= 29.9) {
        cout<<"Berat badan lebih"<<endl;
    } else if (imt <= 39.9) {
        cout<<"Gemuk"<<endl;
    } else if (imt <40)
        cout<<"Sangat gemuk"<<endl;

 return 0;
}


