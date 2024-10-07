#include <iostream>
using namespace std;

// Fungsi untuk operasi penjumlahan
double tambah(double x, double y) {
  return x + y;
}

// Fungsi untuk operasi pengurangan
double kurang(double x, double y) {
  return x - y;
}

// Fungsi untuk operasi perkalian
double kali(double x, double y) {
  return x * y;
}

// Fungsi untuk operasi pembagian
double bagi(double x, double y) {
  if (y == 0) {
    cout << "Pembagian dengan nol tidak terdefinisi" << endl;
    return 0; // Mengembalikan 0 jika terjadi pembagian dengan nol
  } else {
    return x / y;
  }
}

int main() {
  int pilihan;
  double angka1, angka2;

  cout << "Pilih operasi:" << endl;
  cout << " + " << endl;
  cout << " - " << endl;
  cout << " * " << endl;
  cout << " / " << endl;
  cout << "Masukkan pilihan (1/2/3/4): ";
  cin >> pilihan;

  cout << "Masukkan angka pertama: ";
  cin >> angka1;
  cout << "Masukkan angka kedua: ";
  cin >> angka2;

  switch (pilihan) {
    case 1:
      cout << "Hasil dari penjumlahan untuk " << angka1 << " dan " << angka2 << " adalah " << tambah(angka1, angka2) << endl;
      break;
    case 2:
      cout << "Hasil dari pengurangan untuk " << angka1 << " dan " << angka2 << " adalah " << kurang(angka1, angka2) << endl;
      break;
    case 3:
      cout << "Hasil dari perkalian untuk " << angka1 << " dan " << angka2 << " adalah " << kali(angka1, angka2) << endl;
      break;
    case 4:
      cout << "Hasil dari pembagian untuk " << angka1 << " dan " << angka2 << " adalah " << bagi(angka1, angka2) << endl;
      break;
    default:
      cout << "Input tidak valid" << endl;
  }

  return 0;
}
