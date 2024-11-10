Selamat Sore Bapak,

Baik ijin menjawab,

Dalam metode naiive adalah Pendekatan naif memeriksa setiap posisi yang mungkin
dalam teks tempat pola dapat dimulai dan memeriksa kecocokan dengan
membandingkan karakter satu per satu. Pemeriksaan dillakukan tanpa mempelajari
pattern dari suatu text. Jadi, metode ini akan memeriksa semua kemungkinan tanpa
pengecualian tanpa mempelajari apakah bagian pattern tersebut sudah di check
atau belum. Berikut adalah contoh yang sya buat.

text[] = "abcdeabcfg" pattern[] = "abc"

dalam metode naiive kita akan memulai pencocokan satu persatu dari index ke
index. Berikut adalah ilustrasi dengan menggunakan table :
