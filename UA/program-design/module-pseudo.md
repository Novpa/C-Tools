```js

MODULE main()

    //Mendeklarasikan variable
    DECLARE rent_duration as Integer
    DECLARE car_type as String
    DECLARE price as Float
    DECLARE total_rent_cost as Float
    DECLARE discount as Float

    // Memanggil & menjalankan modul modul lain
    get_input_data()

    SET price = define_car_cost(car_type)
    SET discount = apply_discount()
    SET total_rent_cost = calculate_total_cost(price, discount)

    show_data(total_rent_cost)

END MODULE

```

```js

MODULE get_input_data()

     //Mendeklarasikan variable
    DECLARE customer_email as String
    DECLARE customer_name as String
    DECLARE customer_phone as String
    DECLARE starting_date as Date

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


END MODULE

```

```js

MODULE define_car_cost(car_type)

    DECLARE car__price_ as Float
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

    RETURN car_price

END MODULE


```

```js

MODULE apply_discount()

    //Mendeklarasikan variable
    DECLARE get_discount as String
    DECLARE input_discount as Float

    // Menanyakan apakah ada discount atau tidak
    OUTPUT("Would you like to put discount?")
    INPUT input_discount

    // Jika ada, input discount
    IF (get_discount = "Yes") THEN
        OUTPUT ("Insert discount: ")
        INPUT input_discount
        RETURN input_discount

        // Set discount == 0 jika tidak ada discount
        ELSE
            input_discount == 0
            RETURN input_discount
    ENDIF


END MODULE

```

```js

MODULE calculate_total_cost(price, discount)

    // Menghitung total harga setelah mendapatkan discount
    total_rent_cost = (car_price * rent_duration) - (car_price * rent_duration) * discount

    RETURN total_rent_cost

END MODULE


```

```js

MODULE show_data(total_rent_cost)

    // Menampilkan Kwitansi
    OUTPUT ("Customer Name  : ", customer_name)
    OUTPUT ("Starting Date  : ", starting_date)
    OUTPUT ("Rent Duration  : ", rent_duration)
    OUTPUT ("Car Type       : ", car_type)
    OUTPUT ("Discount       : ", discount)
    OUTPUT ("Total Rent Cost: ", total_rent_cost)

END MODULE

```
