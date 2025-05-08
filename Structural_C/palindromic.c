/**
 * @brief Sprawdza czy podana liczba jest palindromiczna.
 *
 * Funkcja konwertuje liczbę na ciąg znaków, a następnie sprawdza,
 * czy czytana od lewej do prawej i od prawej do lewej daje ten sam rezultat.
 * Liczby ujemne nie są uznawane za palindromiczne.
 *
 * @param number Liczba całkowita do sprawdzenia
 * @return bool Zwraca true jeśli liczba jest palindromiczna, false w przeciwnym wypadku
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// Funkcja sprawdzająca, czy liczba jest palindromiczna
bool is_palindromic(int number)
{
    // Obsługa liczb ujemnych: nie są palindromiczne
    if (number < 0)
    {
        return false;
    }

    char str[20];
    snprintf(str, sizeof(str), "%d", number);

    size_t len = strlen(str);
    for (size_t i = 0; i <= len / 2; ++i)
    {
        if (str[i] != str[len - 1 - i])
        {
            return false;
        }
    }
    return true;
}