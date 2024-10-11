Selamat sore Bapak,

Ijin menjawab, berikut adalah cara menentukan jalur terpendek pada TSP khusunya
dengan metode Dynamic Programming :

Namun sebelum itu kita aka membahas, apasih yang dimaksud dengan Adjecency
matrix? Adjacency matrix adalah struktur data yang digunakan untuk
merepresentasikan graf. Dalam konteks TSP, matriks ini menunjukkan jarak atau
biaya antara setiap pasang kota. Sebuah matriks berukuran n x n akan berisi
elemen di mana setiap elemen menunjukkan jarak dari kota ke kota lainnya.
Misalnya, elemen di baris ke-i dan kolom ke-j menunjukkan jarak dari kota i ke
kota j.

Kita dapat mengisi adjacency matrix dengan data secara manual atau dari sumber
eksternal seperti file. Untuk mengisi data secara manual, kita bisa meminta
input jarak antar kota satu per satu. Setelah semua data diinput, matriks akan
terbentuk dan dapat digunakan dalam algoritma TSP.

Penyelesaian TSP dengan Dynamic Programming Inisialisasi: Dalam pendekatan
Dynamic Programming, kita mulai dengan membuat tabel yang menyimpan biaya
perjalanan. Tabel ini memiliki dimensi 2^n x n, di mana n adalah jumlah kota.
Setiap baris tabel mewakili himpunan kota yang telah dikunjungi, dan setiap
kolom menunjukkan kota terakhir yang dikunjungi.

Mengisi Tabel: Proses pengisian tabel dilakukan dengan iterasi melalui semua
kemungkinan kombinasi kota. Untuk setiap kombinasi, kita menghitung biaya
perjalanan dengan mempertimbangkan kota terakhir yang dikunjungi dan memperbarui
nilai tabel dengan biaya terendah yang ditemukan.

Menemukan Jalur Terpendek: Setelah tabel terisi, langkah terakhir adalah mencari
jalur terpendek. Ini dilakukan dengan memeriksa semua kemungkinan kota terakhir
yang dikunjungi dan menambahkan biaya kembali ke kota awal. Biaya terendah yang
ditemukan selama proses ini adalah solusi optimal untuk TSP.

Sekian dan terima kasih,

Novpa
