https://www.geeksforgeeks.org/software-engineering-coupling-and-cohesion/
https://www.geeksforgeeks.org/common-coupling-in-software-engineering/?ref=oin_asr3
https://www.youtube.com/watch?v=7pdrZDqEPIw
https://www.youtube.com/watch?v=uWseUdUqM5U
https://www.youtube.com/watch?v=vHdx0uMaO3E

Selamat malam Bapak,

Ijin menjawab,

Kohesi Apa yang dimaksud dengan kohesi/ Cohesion? Kohesi mengukur seberapa
terkait dan terfokus fungsi-fungsi dalam satu modul. Kohesi yang tinggi
menunjukkan bahwa modul tersebut memiliki satu tanggung jawab atau tujuan utama
yang jelas dan semua bagian dari modul tersebut bekerja bersama untuk mencapai
tujuan itu. Kohesi yang rendah, di sisi lain, menunjukkan bahwa modul melakukan
berbagai hal yang tidak saling berkaitan.

Jenis-jenis Kohesi: Functional Cohesion (Kohesi Fungsional): Modul melakukan
satu tugas utama atau fungsi. Ini adalah bentuk kohesi tertinggi.

Sequential Cohesion: Keluaran dari satu fungsi dalam modul menjadi masukan untuk
fungsi lainnya.

Communicational Cohesion: Semua elemen dalam modul beroperasi pada data yang
sama atau sekumpulan data yang serupa.

Temporal Cohesion: Fungsi-fungsi di dalam modul dipanggil pada waktu yang sama,
misalnya untuk inisialisasi sistem.

Procedural Cohesion: Fungsi dalam modul mengikuti urutan langkah tertentu.

Logical Cohesion: Fungsi-fungsi di dalam modul melakukan tugas yang mirip,
seperti memvalidasi data, tetapi tugas-tugas tersebut bisa dilakukan secara
independen.

Coincidental Cohesion: Fungsi-fungsi di dalam modul tidak ada hubungannya satu
sama lain, hanya kebetulan ditempatkan dalam satu modul. Ini adalah bentuk
kohesi terendah.

Contoh Riil Kohesi: Misalnya, kita memiliki modul untuk mengelola inventaris
barang. Jika modul hanya fokus pada satu fungsi utama, seperti menambah barang
ke dalam inventaris, dan semua fungsi dalam modul mendukung operasi itu
(misalnya validasi input, update stok, dan logging), maka ini adalah contoh
functional cohesion. Modul ini memiliki tanggung jawab tunggal dan terfokus.

Coupling (Kopling) Coupling mengukur seberapa erat suatu modul terhubung atau
bergantung pada modul lain. Coupling yang rendah berarti modul-modul dapat
bekerja secara mandiri dan hanya memiliki sedikit ketergantungan pada modul
lain. Sebaliknya, coupling yang tinggi berarti modul-modul sangat bergantung
satu sama lain, sehingga perubahan pada satu modul dapat memengaruhi modul
lainnya.

Jenis-jenis Coupling: Data Coupling: Modul hanya berbagi data yang diperlukan
melalui parameter. Ini adalah bentuk coupling terendah.

Control Coupling: Satu modul mengontrol alur kerja modul lain, biasanya dengan
mengirimkan sinyal kontrol atau parameter penentu.

External Coupling: Modul bergantung pada format data atau perangkat eksternal
yang sama.

Common Coupling: Modul berbagi variabel global atau struktur data yang sama.

Content Coupling: Satu modul langsung mengakses data atau metode privat modul
lain. Ini adalah bentuk coupling tertinggi dan tidak diinginkan.

Contoh Riil Coupling: Misalnya, dalam sistem inventaris, jika modul "Pengelolaan
Barang" dan modul "Pembuatan Laporan" hanya berbagi data yang relevan (seperti
data stok barang) melalui parameter saat memanggil fungsi, ini adalah contoh
data coupling, yang merupakan bentuk coupling yang rendah. Namun, jika modul
"Pembuatan Laporan" harus memanggil dan mengontrol metode spesifik di dalam
modul "Pengelolaan Barang" untuk mendapatkan informasi, itu adalah contoh
control coupling, yang lebih erat.

Prinsip Ideal dalam Pengembangan Software: Cohesion harus tinggi: Modul
sebaiknya fokus pada satu tanggung jawab utama.

Coupling harus rendah: Modul sebaiknya sedikit bergantung pada modul lain agar
perubahan pada satu modul tidak secara signifikan memengaruhi modul lain.

Contoh Kasus Nyata: Misalkan kita sedang merancang sistem penjualan untuk toko
retail. Kita bisa memisahkan modul-modul berikut:

Modul Transaksi -> Fokus pada pemrosesan transaksi penjualan. Ini akan memiliki
high cohesion karena semua fungsi (validasi pembayaran, pengurangan stok,
pencatatan transaksi) berkaitan dengan satu tanggung jawab utama, yaitu
memproses transaksi.

Modul Pengelolaan Stok -> Berfungsi mengelola inventaris barang.

Modul Laporan Penjualan -> Menghasilkan laporan transaksi dan penjualan.

Kita menginginkan low coupling antara modul "Transaksi" dan "Laporan Penjualan",
sehingga modul "Transaksi" tidak perlu mengetahui detail bagaimana laporan
dihasilkan. Mereka hanya berbagi data transaksi yang relevan melalui antarmuka
(data coupling).
