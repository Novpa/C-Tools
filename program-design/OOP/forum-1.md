Selamat sore Bapak,

Berdasarkan studi case di atas berikut adalah indentifikasinya:

Class :

- Mobil
- SubDealer
- User

Dimana masing masing class tersebut memiliki attribute & methode sebagai
berikut:

- Mobil Attribute:

  - idMobil (unik)
  - merk
  - model
  - tahun
  - harga
  - warna
  - ketersediaan
  - kondisi
  - tanggalMasuk

  Method:

  - getDetailMobil()
  - updateStock()
  - updateHarga()
  - updateKondisi()

SubDealer Attribute: - idSubDealer (unik) - namaSubDealer - Kota - contact

    Method:
    - getDaftarMobil()
    - tambahMobil()
    - hapusMmobil()
    - checkAvailability()

idUser Attribute: - username  
 - password - role

    Methods:
    - login()
    - logout()
    - manageMobil()
    - getDataMobil()

Untuk Enkapsulasi: Kita bisa terapkan pada class mobil dengan menambahakan
method getter dan setter yaitu: getHargaMobil() --> getter setHargaMobil() -->
setter setStock() --> setter

geter da setter juga bisa diterapkan pada class class lainnya seperti getter
untuk mengambil data nama, alamat, no telephone dll, serta setter untuk
memodifikasi data data tersebut.

Public Method: Contohnya untuk mendapatkan atau mengakses informasi:

- getNama(), getAlamat(), getKota(), dst.
- showMobilInfo() --> method untuk menampilkan informasi mobil
- addSubDealer() & deleteSubDealer --> Method untuk menambah dan menghpus sub
  dealer
- createUser() --> method untuk membuat user baru

Private Method:

- countTax() --> untuk menghitung pajak
- checkAvailability() --> method untuk check ketersediaan mobil
- subDealerCheck() --> method untuk mengecheck apakah sub dealer sudah ada?

Polimorfism dalam case ini contohnya yaitu misalkan kita mempunyai class turunan
yaitu MobilBekas & MobilBaru. Kita pun dapat menggunakan method method yang
tersedia (overtide method) seperti :

getDaftarMobil() --> pada MobilBekas & MobilBaru

Sekian dan Terima kasih

Novpa
