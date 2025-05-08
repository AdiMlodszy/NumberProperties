/**
 * @brief Sprawdza, czy podana liczba jest liczbą szczęśliwą (happy number)
 *
 * Liczba szczęśliwa to liczba naturalna, dla której iteracyjne sumowanie kwadratów cyfr
 * prowadzi ostatecznie do 1. Jeśli w trakcie tej operacji wpadniemy w cykl bez 1,
 * liczba nie jest szczęśliwa (jest "sad").
 *
 * Przykład:
 *   19: 1^2 + 9^2 = 82
 *       8^2 + 2^2 = 68
 *       6^2 + 8^2 = 100
 *       1^2 + 0^2 + 0^2 = 1 → szczęśliwa
 *
 * Funkcja wykorzystuje zbiór do wykrywania cyklu i zatrzymuje się, jeśli liczba osiągnie 1
 * lub jeśli pojawi się wartość już wcześniej obliczona.
 *
 * @param number Liczba do sprawdzenia
 * @return true jeśli liczba jest szczęśliwa, false w przeciwnym wypadku
 */
#include <stdio.h>
#include <stdbool.h>

// Funkcja pomocnicza: suma kwadratów cyfr
int sum_of_squares(int number) {
    int sum = 0;
    while (number > 0) {
        int digit = number % 10;
        sum += digit * digit;
        number /= 10;
    }
    return sum;
}

// Funkcja sprawdzająca, czy liczba jest szczęśliwa
bool is_happy(int number) {
    if (number <= 0) return false;

    int slow = number;
    int fast = sum_of_squares(number);

    while (fast != 1 && slow != fast) {
        slow = sum_of_squares(slow);
        fast = sum_of_squares(sum_of_squares(fast));
    }

    return fast == 1;
}
