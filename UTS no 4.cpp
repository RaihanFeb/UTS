#include <iostream>
using namespace std;

int main() {
    int batas;


    cout<<"Masukan batas : ";
    cin>>batas;
    cout<<endl;
    cout<<"Deret bilangan ganjil"<<endl;

    for (int i=1;i<=batas;i++) {
        if(i%2!=0) {
            cout<<i<<" ";
        }
    }
    cout<<"Deret bilangan genap"<<endl;

    for (int i=1;i<=batas;i++) {
        if(i%2==0) {
            cout<<i<<" ";
        }
     }
    return 0;
}