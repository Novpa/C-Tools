Petugas perpustakaan dapat menginput judul buku, pengarang, tahun terbit, status
buku: AVAILABLE dan lokasi penyimpanan dari buku baru yang masuk

Algoritma :

1. Mulai
2. PEtugas memilih menu "Tambah Buku"
3. Petugas menginput judul buku
4. Petugas menginput nama pengarang
5. Petugas menginput tahun terbit
6. Petugas menginput status buku : AVAILABLE
7. Petugas menginput lokasi penyimpanan buku
8. Simpan semua input data ke database
9. Tampilkan pesan "Buku telah ditambahkan"
10. Selesai

Petugas perpustakaan dapat mencari buku berdasarkan judul buku dan pengarang.
Apabila ditemukan maka ditampilkan ketersediaan dan lokasi penyimpanan

Algoritma:

1. Mulai
2. Petugas memilih menu "Cari Buku"
3. Petugas memasukan nama buku
4. Petugas memasukan nama pengarang
5. Jika data buku ditemukan di database maka tampilkan status : "AVAILABLE" dan
   lokasi penyimpanan buku
6. Jika data buku tidak ditemukan di database, maka tampilkan : "Buku tidak
   ditemukan"
7. Selesai

Petugas perpustakaan dapat mengubah status buku menjadi : RENTED atau MISSING

Algoritma:

1. Mulai
2. Petugas memilih menu "Ubah Status Buku"
3. Petugas menginput nama buku
4. Petugas menginput nama pengarang
5. Jika buku ditemukan:

   1. Ubah status (RENTED / MISSING)
   2. Petugas memilih tombol "Save" agar terupdate di database
   3. Tampilkan pesan "Berhasil terupdate"

6. Jika buku tidak ditemukan, tampilkan pesan "Buku tidak ditemukan"
7. Selesai

Report page break yang saya usulkan adalah report yang menampilkan data buku
berdasarkan status dari buku tersebut seperti di bwah:

# Judul Pengarang Lokasi Status

---- Halaman 1 untuk status AVAILABLE ---- Buku A Pengarang A Rak A1 AVAILABLE
Buku B Pengarang B Rak A2 AVAILABLE Buku D Pengarang D Rak C1 AVAILABLE Buku E
Pengarang E Rak C2 AVAILABLE Buku F Pengarang F Rak D1 AVAILABLE ---- Page Break
---- Total Buku untuk status AVAILABLE: 5

---

# Judul Pengarang Lokasi Status

---- Halaman 1 untuk status MISSING ---- Buku C Pengarang C Rak B1 MISSING Buku
G Pengarang G Rak D2 MISSING ---- Page Break ---- Total Buku untuk status
MISSING: 2

---

# Judul Pengarang Lokasi Status

---- Halaman 1 untuk status RENTED ---- Buku H Pengarang H Rak E1 RENTED Buku I
Pengarang I Rak E2 RENTED ---- Page Break ---- Total Buku untuk status RENTED: 2
--------------------------------------------------------------zzzz ZZZZZ
