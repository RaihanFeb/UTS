#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Masukkan Angka: ";
    for (int i = 1; i <=  n; i++) {
        for (int i = 1; i <= n - i; i++) {}
        cout<<" ";
    }

    for (int i = 1; i <=2*i-1; i++) {
        cout<<" ";
    }

    for (int i = 1; i <= 2*i-1; i++) {
        cout<<"*";
        cout<<endl;
    }
return 0;

}
