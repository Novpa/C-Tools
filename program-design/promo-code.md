FUNCTION main() // Langkah 1: Mengumpulkan data pesanan Cetak "Masukkan jumlah
customer yang memesan:" Input jumlah_customer

    // Memanggil modul get_data untuk mendapatkan input dari user
    total_customer, customer_data = get_data(jumlah_customer)

    // Langkah 2: Memproses pesanan untuk memeriksa promo
    // Memanggil modul check_promo untuk mengecek apakah pesanan memenuhi syarat promo
    bonus_data = check_promo(customer_data)

    // Langkah 3: Menghitung jumlah penerima bonus dan non-bonus
    // Memanggil modul count_bonus untuk menghitung berapa orang yang mendapatkan promo
    total_get_promo, total_non_promo = count_bonus(bonus_data)

    // Langkah 4: Mencetak laporan individu
    // Memanggil modul print_data_customer untuk mencetak data setiap customer dan bonus yang diterima
    print_data_customer(customer_data, bonus_data)

    // Langkah 5: Mencetak rekapitulasi bonus
    // Memanggil modul print_total_bonus untuk mencetak jumlah penerima promo dan non-promo
    print_total_bonus(total_get_promo, total_non_promo)

END FUNCTION
