#include <stdio.h>

int main() {

    return 0;
}

// NOTE

/*----------------------------------------------------------------

< 30 : E
30 s/d 50: D
51 s/d 75: C
76 s/d 89 : B
>89 : A

Bobot tugas perorangan: 20%
Bobot tugas kelompok: 20%
Bobot kehadiran: 5%
Bobot UTS: 20%
Bobot UAS: 35%

TAG

START
  DECLARE bobot_tugas_peroranan = 0.2
  DECLARE bobot_tugas_kelompok = 0.2
  DECLARE kehadiran = 00.5
  DECLARE uts = 0.2
  DECLARE uas = 0.35
  DECLARE nilai_tugas_perorangan
  DECLARE nilai_tugas_kelompok
  DECLARE nilai_kehadiran
  DECLARE nilai_uts
  DECLARE nilai_uas
  DECLARE accumulation

REMARK
  PRINT ("Input nilai tugas perorangan: ")
  INPUT nilai_tugas_perorangan

  PRINT ("Input nilai tugas kelopok: ")
  INPUT nilai_tugas_kelompok

  PRINT ("Input nilai kehadiran: ")
  INPUT nilai_kehadiran

  PRINT ("Input nilai UTS:)
  INPUT nilai_uts

  PRINT ("INPUT nilai UAS")
  INPUT nilai_uas

nilai_tugas_perorangan = nilai_tugas_perorangan * bobot_tugas_perorangan

nilai_tugas_kelompok = nilai_tugas_kelompok * bobot_tugas_kelompok

nilai_kehadiran =  nilai_kehadiran * bobot_kehadiran

nilai_uts = nilai_uts * bobot_nilai_uts

nilai_uas = nilai_uas * bobot_nilai_uas

accumulation = nilai_tugas_perorangan + bobot_nilai_tugas_kelompok +
nilai_kehadiran  + nilai_uts + nilai_uas

NOTE //checking the total score

IF accumulation > 100 or accumulation < 0 THEN
  PRINT ("Wrong Input")

ELSE IF accumulation > 89
  PRINT ("A")

ELSE IF accumulation >= 76 and accumulaton <= 89 THEN
  PRINT ("B")

ELSE IF accumulation >= 51 and accumulaton <=75 THEN
  PRINT ("C")

ELSE IF accumulation >= 30 and accumulaton <= 50
  PRINT ("D")

ELSE
  PRINT ("E")

END








*/