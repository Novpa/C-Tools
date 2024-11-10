```js

FUNCTION count_bonus(bonus_customer_data[])
    Deklarasikan total_get_promo sebagai integer = 0
    Deklarasikan total_non_promo sebagai integer = 0

    FOR i = 1 TO panjang(bonus_customer_data) DO
        IF bonus_customer_data[i] == "Sensatia_Serum_Tea_Tree" THEN
            total_get_promo = total_get_promo + 1
        ELSE
            total_non_promo = total_non_promo + 1
        END IF
    END FOR

    RETURN total_get_promo, total_non_promo
END FUNCTION

```
