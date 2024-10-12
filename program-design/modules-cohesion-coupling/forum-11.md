Selamat malam Bapak,

Baik, ijin menjawab.

1. Mendefinisikan sebuah module menggunakan pseudocode. dalam contoh ini saya
   akan memberikan contoh module peningputan siswa Binus sebagai berikut:

MODUL InputNilaiSiswa VARIABEL: nama_siswa: string nim: string nilai_akhir:
float

MULAI OUTPUT "Masukkan Nama Siswa: " INPUT nama_siswa

    OUTPUT "Masukkan NIM Siswa: "
    INPUT nim

    OUTPUT "Masukkan Nilai Akhir: "
    INPUT nilai_akhir

    OUTPUT "Nama Siswa: ", nama_siswa
    OUTPUT "NIM: ", nim
    OUTPUT "Nilai Akhir: ", nilai_akhir

SELESAI

Variabel yang Digunakan:

nama_siswa: untuk menyimpan nama siswa yang diinputkan. nim: untuk menyimpan NIM
dari siswa yang diinputkan. nilai_akhir: untuk menyimpan nilai akhir siswa yang
diinputkan.

Proses: Modul menerima input berupa nama, NIM, dan nilai akhir siswa. Setelah
semua data dimasukkan, sistem akan menampilkan data tersebut.

2. Mendefinisikan variable, konstanta atau tipe data dari modul Apa itu
   variable? Variabel adalah tempat penyimpanan data sementara yang nilainya
   bisa berubah selama eksekusi program. Seperti contoh dibawag:

MODUL HitungNilaiAkhir VARIABEL: nilai_tugas: float nilai_uts: float nilai_uas:
float nilai_akhir: float

Sedangakan konstanta adalah nilai yang bersifat tetap atau satuan (tidak dapat
diubah ubah selama program berjalan) contoh:

MODUL HitungNilaiAkhir KONSTANTA: MAX_NILAI: integer = 100

dalam hal tipe data, tipe datalah yang menentukan jenis data yang dapat disimpan
dalam suatu variable tertentu. tipe data dapat berupa integer, float, string,
character, dll. Contohnya:

VARIABEL: nama_siswa: string nilai_akhir: float

3. Apa yang disebut sebagai global dan lokal parameter dan bagaimana cara
   penggunaannya Variabel global memiliki kemampuan untuk dikenali oleh seluruh
   kode program yang ada, entah itu didalam class maupun di program utama (main
   program) karena pendeklarasian variabel global dilakukan diluar class dan
   diluar program utama, tapi sebaiknya kamu mengurangi penggunaan variabel
   global karena ada kemungkinan variabel ini akan termodifikasi oleh instruksi
   yang menggunakan variabel yang di deklarasikan secara global. Berikut adalah
   contoh variable global:

VARIABEL GLOBAL: nilai_uas: float

MODUL HitungNilaiAkhir VARIABEL LOKAL: nilai_akhir: float MULAI nilai_akhir =
nilai_uas \* 0.4 OUTPUT nilai_akhir SELESAI

Sedangkan Variabel lokal adalah variabel yang hanya dapat digunakan dimana
variabel tersebut dideklarasikan dalam sebuah scope fungsi. Seperti contoh
dibawah:

MODUL HitungNilaiAkhir VARIABEL LOKAL: nilai_uts: float nilai_akhir: float MULAI
nilai_akhir = nilai_uts \* 0.3 OUTPUT nilai_akhir SELESAI

Berikut adalah perbedaan utama dari penggunaan variable global dengan lokal:

- Variabel lokal dideklarasikan di dalam suatu fungsi, sedangkan variabel Global
  dideklarasikan di luar fungsi.

- Variabel lokal dibuat ketika fungsi telah memulai eksekusi dan hilang ketika
  fungsi berakhir, sebaliknya variabel Global dibuat ketika eksekusi dimulai dan
  hilang ketika program berakhir.

- Variabel lokal tidak menyediakan pembagian data, sedangkan variabel Global
  menyediakan pembagian data.

- Variabel lokal disimpan di tumpukan, sedangkan variabel Global disimpan di
  lokasi tetap yang ditentukan oleh kompiler.

- Pengoperan parameter diperlukan untuk variabel lokal, sedangkan untuk variabel
  global tidak diperlukan

Referensi :
https://an-nur.ac.id/mengenal-fungsi-dan-modul-dalam-pemrograman-konsep-manfaat-dan-contoh/

https://daily-dev.translate.goog/blog/what-is-modular-programming?_x_tr_sl=en&_x_tr_tl=id&_x_tr_hl=id&_x_tr_pto=sge#:~:text=Pertanyaan%20Terkait-,Apa%20itu%20modul%20dalam%20pemrograman?,bagian%20tanpa%20mengacaukan%20yang%20lainnya.

https://www.toppr.com/guides/computer-science/introduction-to-c/

data-types-variables-and-constants/variables-in-programming-language/

https://www.mahirkoding.com/variabel-global-dan-variabel-lokal-dalam-bahasa-c/

https://www.guru99.com/id/local-vs-global-variable.html

Sekian dan terima kasih

Novpa
