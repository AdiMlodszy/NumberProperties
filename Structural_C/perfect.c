/**
 * @brief Sprawdza, czy dana liczba jest liczbą doskonałą.
 * 
 * Funkcja sprawdza, czy podana liczba jest liczbą doskonałą.
 * Liczba doskonała to taka liczba naturalna, która jest równa sumie
 * wszystkich swoich dzielników właściwych (czyli mniejszych od niej samej).
 * Na przykład, 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6.
 * 
 * @param number Liczba, która ma być sprawdzona.
 * @return true jeśli liczba jest doskonała, false w przeciwnym przypadku.
 * @note Funkcja zwraca false dla liczb mniejszych lub równych 1.
 */
#include <stdio.h>
#include <stdbool.h>

// Funkcja sprawdzająca, czy liczba jest doskonała
bool is_perfect(int number) {
    if (number <= 1) {
        return false;
    }

    int sum = 1; // 1 zawsze dzieli każdą liczbę >1
    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum == number;
}