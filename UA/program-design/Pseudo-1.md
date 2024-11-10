```Js


START

    //Mendeklarasikan variable
    DECLARE customer_email as String
    DECLARE customer_name as String
    DECLARE customer_phone as String
    DECLARE starting_date as Date
    DECLARE rent_duration as Integer
    DECLARE car_type as String
    DECLARE car_price as Float
    DECLARE total_rent_cost as Float
    DECLARE get_discount as String
    DECLARE discount as Float

    // Meminta input email
    OUTPUT ("Input customer email: ")
    INPUT customer_email

    // Meminta input nama
    OUTPUT ("Input customer name: ")
    INPUT customer_name

    // Meminta input nomor telepon
    OUTPUT ("Input customer phone: ")
    INPUT customer_phone

    // Meminta input tangagl mulai sewa
    OUTPUT ("Input starting date: ")
    INPUT starting_date

    // Meminta input durasi sewa
    OUTPUT ("Input rent duration: ")
    INPUT rent_duration

    // Meminta input tipe mobil
    OUTPUT ("Input car type (e.g., A, B, C, etc.): ")
    INPUT car_type


    DO
        // Menentukan harga sewa mobil berdasarkan tipe mobil
        IF (car_type = "A") THEN
                car_price = 100.0
                ELSE IF (car_type = "B") THEN
                    car_price = 150.0
                    ELSE IF (car_type = "C") THEN
                        car_price = 200.0
                        ELSE IF (car_type = "D") THEN
                            car_price = 250.0
                            ELSE IF (car_type = "E") THEN
                                car_price = 300.0
                                ELSE
                                    PRINT "Invalid product type."
                                    car_price = 0.0
        ENDIF

    WHILE car_price != 0.0 // Loop berhenti ketika harga sewa mobil valid

    // Menghitung harga total sewa sebelum discount
    total_rent_cost = car_price * rent_duration

    // Menanyakan apakah ada discount atau tidak
    OUTPUT("Would you like to put discount?")
    INPUT get_discount

    // Jika ada, input discount
    IF (get_discount = "Yes") THEN
        OUTPUT ("Insert discount: ")
        INPUT discount

        // Menghitung discount yang didapat berdasarkan harga sewa mobil
        discount = discount * car_price

        // Set discount == 0 jika tidak ada discount
        ELSE
            discount == 0

    ENDIF

    // Menghitung total harga setelah mendapatkan discount
    total_rent_cost = total_rent_cost - discount

    // Menampilkan total harga sewa mobil yang harus dibayar
    OUPUT ("Harga total sewa yang harus dibayar: ", total_rent_cost)


END
```
