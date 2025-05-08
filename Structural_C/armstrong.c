/**
 * @brief Sprawdza, czy podana liczba jest liczbą Armstronga.
 *
 * Liczba Armstronga (narcystyczna) to liczba całkowita, która jest równa
 * sumie swoich cyfr podniesionych do potęgi równej liczbie cyfr tej liczby.
 * Przykład: 153 = 1^3 + 5^3 + 3^3 = 153.
 *
 * @param number Liczba całkowita do sprawdzenia
 * @return true jeśli liczba jest Armstronga, false w przeciwnym wypadku
 * @note Funkcja nie obsługuje liczb ujemnych.
 */
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Funkcja sprawdzająca, czy liczba jest liczbą Armstronga
bool is_armstrong(int number) {
    if (number < 0) {
        return false;
    }

    if (number == 0) {
        return true; // 0^1 = 0
    }

    int original = number;
    int digits = 0;
    int temp = number;

    // Liczenie liczby cyfr
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = number;
    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += (int)round(pow((double)digit, digits));
        temp /= 10;
    }

    return sum == original;
}
