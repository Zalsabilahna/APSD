#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung nilai akhir
float hitung_nilai_akhir(float nilai_keaktifan, float nilai_tugas, float nilai_ujian) {
    float nilai_murni_keaktifan = nilai_keaktifan * 0.20;
    float nilai_murni_tugas = nilai_tugas * 0.50;
    float nilai_murni_ujian = nilai_ujian * 0.30;

    return nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;
}

// Fungsi untuk menentukan grade
char tentukan_grade(float nilai_akhir) {
    if (nilai_akhir > 80)
        return 'A';
    else if (nilai_akhir > 70)
        return 'B';
    else if (nilai_akhir > 56)
        return 'C';
    else if (nilai_akhir > 46)
        return 'D';
    else
        return 'E';
}

int main() {
    string nama_siswa;
    float nilai_keaktifan, nilai_tugas, nilai_ujian;

    // Layar masukkan
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa: ";
    getline(cin, nama_siswa);
    cout << "Nilai Keaktifan: ";
    cin >> nilai_keaktifan;
    cout << "Nilai Tugas: ";
    cin >> nilai_tugas;
    cout << "Nilai Ujian: ";
    cin >> nilai_ujian;

    // Hitung nilai akhir
    float nilai_akhir = hitung_nilai_akhir(nilai_keaktifan, nilai_tugas, nilai_ujian);

    // Tentukan grade
    char grade = tentukan_grade(nilai_akhir);
    system("cls");

    // Layar keluaran
    cout << "Siswa yang bernama " << nama_siswa << endl;
    cout << "Dengan Nilai Persentasi Yang dihasilkan." << endl;
    cout << "Nilai Keaktifan * 20%: " << nilai_keaktifan * 0.20 << endl;
    cout << "Nilai Tugas * 30%: " << nilai_tugas * 0.50 << endl;
    cout << "Nilai Ujian * 50%: " << nilai_ujian * 0.30 << endl;
    cout << "Jadi Siswa yang bernama " << nama_siswa << " memperoleh nilai akhir sebesar " << nilai_akhir << endl;
    cout << "Grade: " << grade << endl;

    // Menahan layar keluaran
    cin.ignore(); // Membersihkan buffer dari newline sebelumnya
    cout << "Tekan tombol enter untuk melanjutkan...";
    cin.get();

    return 0;
}
