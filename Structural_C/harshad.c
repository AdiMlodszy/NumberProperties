/**
 * @brief Sprawdza, czy podana liczba jest liczbą Harshada.
 * 
 * Liczba Harshada (znana również jako liczba Nivena) to liczba całkowita, która jest podzielna
 * przez sumę swoich cyfr. Funkcja obsługuje również liczby ujemne, operując na ich wartości
 * bezwzględnej podczas obliczania sumy cyfr, ale sprawdzając podzielność dla oryginalnej wartości.
 *
 * @param number Liczba całkowita do sprawdzenia
 * @return true jeśli liczba jest liczbą Harshada, false w przeciwnym wypadku lub gdy liczba jest równa 0
 * 
 * @note Liczba 0 nie jest uznawana za liczbę Harshada w tej implementacji
 */
#include <stdio.h>
#include <stdbool.h>

// Funkcja sprawdzająca, czy liczba jest liczbą Harshada
bool is_harshad(int number) {
    if (number == 0) {
        return false;
    }

    int original = number;
    int sum = 0;

    // Operujemy na wartości bezwzględnej, by obsłużyć liczby ujemne
    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum != 0 && original % sum == 0;
}