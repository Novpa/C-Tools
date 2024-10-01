```js

Anda diminta oleh universitas untuk membuat sebuah program untuk menampilkan nilai ujian mahasiswa dengan ketentuan sebagai berikut

Rata-rata nilai >95 maka score: A
Rata-rata nilai 85 - 94 maka score: B
Rata-rata nilai 75 - 84 maka score: C
Rata-rata nilai 65 - 74 maka score: D
Rata-rata nilai 40 - 64 maka score: E
Rata-rata nilai <40 maka score: NOT PASSED
Setiap mata kuliah memiliki komponen nilai berupa ujian akhir, quiz, tugas, kehadiran dan keaktifan. 

Buatlah pseudo code untuk:

Input jumlah mahasiswa
Input nama mahasiswa
Input nilai dari masing-masing komponen dengan ketentuan nilai 0 - 100 dan output berupa score akhir dari rata-rata nilai yang diinput
Tampilkan nama mahasiswa dan score nya

/////////////////////////////////////////////////////////////////

START

    // Fungsi penentu score
    FUNCTION checkScore (rataRata : INTEGER)
        // Deklarasi score sebagai string
        DECLARE score as String

        IF rataRata > 95 THEN
            SET score = 'A'
            ELSE IF rataRata >= 85 AND rataRata <= 94 THEN
                SET score = 'B'
                ELSE IF rataRata >= 75 AND rataRata <= 84 THEN
                    SET score = 'C'
                    ELSE IF rataRata >= 65 AND rataRata <= 74 THEN
                        SET score = 'D'
                        ELSE IF rataRata >= 40 AND rataRata <= 64 THEN
                            SET score = 'E'
                            ELSE
                                SET score = 'NOT PASSED'
        return score
    END FUNCTION

    // Fungsi untuk validasi input user agar selalu diantara 0 - 100
    FUNCTION validasiNilai (nilai : FLOAT)

        WHILE nilai < 0 OR nilai > 100     
            OUPUT "Masukan ulang (0 - 100) : "
            INPUT nilai
        END WHILE

        return nilai
    END FUNCTION

    // Fungsi untuk print nama & score akhir semua mahsiswa
    FUNCTION printData (nama : ARRAY, score : ARRAY, jumlahMahasiswa : INTEGER )

        FOR i = 1 TO jumlahMahasiswa
            OUTPUT ("Nama :", nama[i])
            OUTPUT ("Score: ", score [i])
        END FOR

    END FUNCTION

    MODULE main()

        // Deklarasi variable untuk menamping jumlah mahasiswa
        DECLARE Integer jumlahMahasiswa

        OUTPUT ("Input Jumlah mahasiswa: ")
        INPUT jumlahMahasiswa

        // Deklarasi array untuk menampung nama - nama mahasiswa
        DECLARE Array nama[jumlahMahasiswa] as String

        // Deklarasi array untuk menampung nilai ujian
        DECLARE Array nilaiUjian[jumlahMahasiswa] as Float

        // Deklarasi array untuk menampung nilai quiz
        DECLARE Array quiz[jumlahMahasiswa] as Float

        // Deklarasi array untuk menampung nilai tugas
        DECLARE Array tugas[jumlahMahasiswa] as Float
        
        // Deklarasi array untuk menampung nilai kehadiranDanKeaktifan
        DECLARE Array kehadiranDanKeaktifan[jumlahMahasiswa] as Float

        // Deklarasi array untuk menampung nilai rata - rata
        DECLARE Array rataRata[jumlahMahasiswa] as Float

        // Deklarasi array untuk menampung Score
        DECLARE Array score[jumlahMahasiswa] as String
    
        // Loop meminta input user untuk setiap data mahasiswa
        FOR i = 1 TO jumlahMahasiswa 

            // Meminta input nama mahasiswa ke - i
            OUTPUT ("Input nama Mahasiswa ke - ", i)
            INPUT nama[i]

            // Meminta input nilai ujian mahasiswa ke -i
            OUPUT ("Input nilai ujian mahasiswa ke - ", i)
            INPUT nilaiUjian[i]
            SET nilaiUjian[i] = validasiNilai(nilaiUjian[i])

            // Meminta input nilai quiz mahasiswa ke -i
            OUPUT ("Input nilai quiz mahasiswa ke - ", i)
            INPUT quiz[i]
            SET quiz[i] = validasiNilai(quiz[i])

            // Meminta input nilai tugas mahasiswa ke -i
            OUPUT ("Input nilai tugas mahasiswa ke - ", i)
            INPUT tugas[i]
            SET tugas[i] = validasiNilai(tugas[i])

            // Meminta input nilai ujian mahasiswa ke -i
            OUPUT ("Input nilai kehadiranDanKeaktifan mahasiswa ke - ", i)
            INPUT kehadiranDanKeaktifan[i]
            SET kehadiranDanKeaktifan[i] = validasi(kehadiranDanKeaktifan[i])

            // Menghitung nilai rata - rata nilai mahasiswa ke - 1
            SET rataRata[i] = (nilaiUjian[i] + quiz[i] + tugas[i] + kehadiranDanKeaktifan[i]) / 4

            // Penentuan score akhir
            SET score[i] = checkScore(rataRata[i])

            //Output score akhir & rata rata nilai mahasiswa
            OUTPUT ("Nilai rata - rata: ", rataRata[i])
            OUTPUT ("Score: ", score[i])

        END FOR

        // Print data nama beserta score semua mahasiswa
        printData(nama, score)

    END MODULE
END


