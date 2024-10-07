#include <iostream>
#include <string>

using namespace std;

int main() {
  string nama, npm;
  float absen, tugas, uts, uas, nilai_akhir;
  char huruf_mutu;

  // Input data mahasiswa
  cout << "Masukkan Nama: ";
  getline(cin, nama);
  cout << "Masukkan NPM: ";
  getline(cin, npm);
  cout << "Masukkan Nilai Absen: ";
  cin >> absen;
  cout << "Masukkan Nilai Tugas: ";
  cin >> tugas;
  cout << "Masukkan Nilai UTS: ";
  cin >> uts;
  cout << "Masukkan Nilai UAS: ";
  cin >> uas;

  // Hitung nilai akhir
  nilai_akhir = (0.1 * absen) + (0.2 * tugas) + (0.3 * uts) + (0.4 * uas);

  // Tentukan huruf mutu
  if (nilai_akhir >= 85 && nilai_akhir <= 100) {
    huruf_mutu = 'A';
  } else if (nilai_akhir >= 80 && nilai_akhir < 85) {
    huruf_mutu = 'B';
  } else if (nilai_akhir >= 75 && nilai_akhir < 80) {
    huruf_mutu = 'C';
  } else if (nilai_akhir >= 70 && nilai_akhir < 75) {
    huruf_mutu = 'D';
  } else {nilai_akhir > 70) {
    huruf_mutu = 'E';
  }

  // Tampilkan output
  cout << "Nama: " << nama << endl;
  cout << "NPM: " << npm << endl;
  cout << "Nilai Absen: " << absen << endl;
  cout << "Nilai Tugas: " << tugas << endl;
  cout << "Nilai UTS: " << uts << endl;
  cout << "Nilai UAS: " << uas << endl;
  cout << "Nilai Akhir: " << nilai_akhir << endl;
  cout << "Huruf Mutu: " << huruf_mutu << endl;

  return 0;
}
