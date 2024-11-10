Selamat malam Bapak,

Ijin menjawab,

Untuk membangun fitur tersebut, berikut adalah fungsi menggunakan class dan
object saya jabarkan dalam bentuk pseudocode beserta dengan comment agar
memperjelas arti dari fungsi tersebut:

```cpp

Kelas Produk
    Atribut:
        id: integer
        nama: string
        harga: float
        stok: integer

Kelas Keranjang
    Atribut:
        daftarProduk: array of Produk

    Metode:

        //fungsi untuk menambahkan item atau produk
        tambahProduk(produk):
            tambahkan produk ke daftarProduk

        //fungsi untuk menghapus profuk
        hapusProduk(idProduk):
            cari produk dengan id yang sesuai di daftarProduk
            hapus produk tersebut dari daftarProduk

        //fungsi untuk menghitung total harga pada keranjang
        hitungTotalHarga():
            inisialisasi totalHarga dengan 0
            untuk setiap produk di daftarProduk:
                tambahkan harga * jumlah produk ke totalHarga
            kembalikan totalHarga

        //fungsi untuk sort/mengurutkan produk berdasarkan nama, harga, dan stok
        urutkanProduk(kriteria):
            jika kriteria adalah "nama":
                urutkan daftarProduk berdasarkan nama produk
            jika kriteria adalah "harga":
                urutkan daftarProduk berdasarkan harga produk
            jika kriteria adalah "stok":
                urutkan daftarProduk berdasarkan stok produk

Program Utama
    buat beberapa objek Produk
    buat objek Keranjang
    tambahkan objek Produk ke Keranjang
    hitung total harga Keranjang
    urutkan produk dalam Keranjang berdasarkan nama
    tampilkan daftar produk dalam Keranjang

```

Sekian dan terima kasih

Novpa
