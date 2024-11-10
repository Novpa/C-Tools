Selamat malam Bapak,

Ijin menjawab,

Dari sumber yang saya dapatkan dibawah: https://revou.co/kosakata/encapsulation

Konsep dasar dan penjelasan: Menurut saya, enkapsulasi adalah suatu prinsip
untuk menyembunyikan detail internal implementasi objek dari dunia luar dan
menyediakan interface yang dapat berinteraksi dengan objek tersebut.

Manfaat :

1.  Menyembunyikan data Encapsulation dapat menyembunyikan detail implementasi
    internal suatu kelas. Hal ini berarti bahwa pengguna kelas tidak perlu
    mengetahui bagaimana data disimpan dalam variabelnya. Sebaliknya, pengguna
    berinteraksi dengan kelas melalui metode publik yang dirancang dengan baik,
    seperti setter dan getter. Dengan demikian, keamanan dapat meningkat dan
    mencegah manipulasi langsung terhadap data sensitif.

2.  Meningkatkan fleksibilitas Dengan enkapsulasi, programmer dapat mengontrol
    akses ke elemen pada kelas dan menyesuaikan tingkat visibilitas sesuai
    dengan kebutuhan. Hal ini memungkinkan mereka untuk membuat kelas yang
    menerapkan aturan khusus untuk mengakses dan memodifikasi data.

3.  Dapat digunakan kembali Encapsulation mendukung penggunaan kembali karena
    detail implementasi internal suatu kelas disembunyikan dari entitas
    eksternal. Saat kelas yang dienkapsulasi digunakan di berbagai bagian
    program atau di proyek lain, perubahan pada penerapan kelas kemungkinan
    besar tidak akan memengaruhi basis kode lainnya.

4.  Mudah menguji kode Kode yang dienkapsulasi mudah untuk diuji, terutama
    selama pengujian unit. Karena kelas memiliki interface yang jelas,
    fungsionalitas setiap metode dapat diuji secara terpisah dengan lebih mudah.

5.  Memberi kebebasan bagi programmer Enkapsulasi memberdayakan programmer
    dengan memberikan kebebasan untuk mengubah detail implementasi internal
    suatu kelas tanpa memengaruhi interface eksternal yang digunakan oleh bagian
    lain dari program.

Untuk contohnya, saya buat sendiri dikarenakan sedikit challenging untuk mencari
contoh dalam bentu C++ (Kebanyakan menggunakan Java, dan saya belum terlalu tau
bahasa Java) :

Seblum Enkansulasi:

```cpp

#include <iostream>
using namespace std;

class Mobil {
public:
    string merek;    // Atribut publik
    int kecepatan;   // Atribut publik

    // Metode publik untuk mengubah kecepatan
    void ubahKecepatan(int k) {
        kecepatan = k; // Langsung mengubah kecepatan tanpa validasi
    }
};

int main() {
    Mobil mobil;
    mobil.merek = "Toyota";  // Mengakses atribut publik
    mobil.kecepatan = 0;

    mobil.ubahKecepatan(60);  // Mengubah kecepatan langsung
    cout << "Merek: " << mobil.merek << endl;
    cout << "Kecepatan: " << mobil.kecepatan << " km/jam" << endl;

    return 0;
}

```

Sesudah Enkapsulasi:

```cpp
#include <iostream>
using namespace std;

class Mobil {
private:
    string merek;      // Atribut privat
    int kecepatan;     // Atribut privat

public:
    // Konstruktor untuk menginisialisasi merek dan kecepatan awal
    Mobil(string m) {
        merek = m;
        kecepatan = 0;
    }

    // Getter untuk mendapatkan merek
    string getMerek() {
        return merek;
    }

    // Getter untuk mendapatkan kecepatan
    int getKecepatan() {
        return kecepatan;
    }

    // Setter untuk mengubah kecepatan dengan validasi
    void setKecepatan(int k) {
        if (k >= 0) {
            kecepatan = k;
        } else {
            cout << "Kecepatan tidak bisa negatif!" << endl;
        }
    }
};

int main() {
    Mobil mobil("Toyota");   // Menginisialisasi objek Mobil dengan merek Toyota

    mobil.setKecepatan(60);  // Mengubah kecepatan melalui setter dengan validasi
    cout << "Merek: " << mobil.getMerek() << endl;
    cout << "Kecepatan: " << mobil.getKecepatan() << " km/jam" << endl;

    mobil.setKecepatan(-10); // Menguji validasi negatif
    cout << "Kecepatan: " << mobil.getKecepatan() << " km/jam" << endl;

    return 0;
}

```

Untuk nomor 3. Berikut adalah contoh yang saya berikan :

dalam class Obat saya akan mengisi beberapa property privat seperti dibawah:

```cpp
class Obat {
private:
    std::string namaObat;
    std::string jenisObat;
    int jumlahStok;
    std::date tanggalKadaluarsa;

```

untuk methodnya saya akan isi pada bagian public seperti di bawah:

```cpp
getNamaObat() // --> method untuk mengambil nama obat
getJenisObat()  //--> method untuk mengambil jenis obat dan return jenis obat itu sendiri
getStock() //--> Method untuk melihat jumlah stok yang tersedia
getTglKadarluarsa() //--> method untuk mengambil data tanggal kadarluarsa dari obat tersebut.

// Setter :
setNamaObat() // --> untuk mengisi nama obat
setJenisObat() // --> untuk mengisi jenis obat
KurangiStock() & TambahStock() //--> method untuk mengurangi dan menambah stock

isKadarluarsa() //--> Method yang mengembalikan nilai boolean apakah obat kadarluwarsa atau tidak

```

Berikut adalah contoh fungsi sederhana menggunakan enkapsulasi dengan format
yang sudah ditentukan di atas:

changeUsername Untuk mengganti username suatu user contoh code:

```cpp
class User{
private:
    std::string username;
    std::string password;

public:
//Bagian enkapsulasi:
std:: string changeUsername(const std::string& newUsername) const {
    username = newUsername
}

}
```

Sekian dan terima kasih

Novpa
