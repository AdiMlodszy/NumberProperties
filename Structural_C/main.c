/*
 * Program: NumberPropertiesComparer (wersja strukturalna w C)
 * Autor: [Twoje imię i nazwisko]
 * Data: 2025-05
 *
 * Opis:
 * Program analizuje liczby całkowite w zadanym przez użytkownika zakresie (od-do),
 * sprawdzając dla każdej z nich występowanie wybranych pięciu właściwości matematycznych.
 * Wynikiem działania programu jest lista liczb z ich przypisanymi cechami.
 *
 * Sprawdzane właściwości:
 *
 * - Palindromiczna: liczba, której zapis dziesiętny czytany od przodu i od tyłu jest taki sam,
 *   np. 121 lub 1331. Jest to liczba symetryczna względem środka.
 *
 * - Doskonała: liczba naturalna, której suma wszystkich dzielników właściwych (czyli bez niej samej)
 *   równa się tej liczbie. Przykład: 28, bo 1 + 2 + 4 + 7 + 14 = 28.
 *
 * - Armstronga: liczba, która jest równa sumie swoich cyfr podniesionych do potęgi równej
 *   liczbie cyfr. Przykład: 153, bo 1^3 + 5^3 + 3^3 = 153.
 *
 * - Szczęśliwa: liczba, która po wielokrotnym podstawieniu sumy kwadratów swoich cyfr
 *   ostatecznie prowadzi do wartości 1. Przykład: 19 → 1^2 + 9^2 = 82 → 8^2 + 2^2 = 68 → … → 1.
 *   Jeśli pojawi się pętla inna niż 1, liczba nie jest szczęśliwa.
 *
 * - Harshada: liczba, która dzieli się bez reszty przez sumę swoich cyfr.
 *   Przykład: 18, bo 1 + 8 = 9, a 18 / 9 = 2.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main()
{
    int start, end;
    FILE *output = fopen("wyniki_C.md", "w");
    if (!output)
    {
        printf("Nie można otworzyć pliku do zapisu.\n");
        return 1;
    }

    printf("Podaj zakres liczb (od - do):\n");
    printf("Od: ");
    scanf("%d", &start);
    printf("Do: ");
    scanf("%d", &end);

    fprintf(output, "| Liczba:         | Własności:        |\n");
    fprintf(output, "|-----------------|-------------------|\n");

    for (int i = start; i <= end; ++i)
    {
        int printed = 0;

        if (is_palindromic(i))
        {
            fprintf(output, "| %15d | - Palindromiczna  |\n", i);
            printed = 1;
        }
        if (is_perfect(i))
        {
            if (!printed)
                fprintf(output, "| %15d | - Doskonała       |\n", i);
            else
                fprintf(output, "|                 | - Doskonała       |\n");
            printed = 1;
        }
        if (is_armstrong(i))
        {
            if (!printed)
                fprintf(output, "| %15d | - Armstronga      |\n", i);
            else
                fprintf(output, "|                 | - Armstronga      |\n");
            printed = 1;
        }
        if (is_happy(i))
        {
            if (!printed)
                fprintf(output, "| %15d | - Szczęśliwa      |\n", i);
            else
                fprintf(output, "|                 | - Szczęśliwa      |\n");
            printed = 1;
        }
        if (is_harshad(i))
        {
            if (!printed)
                fprintf(output, "| %15d | - Harshada        |\n", i);
            else
                fprintf(output, "|                 | - Harshada        |\n");
            printed = 1;
        }

        if (!printed)
        {
            fprintf(output, "| %15d | Brak właściwości  |\n", i);
        }

        fprintf(output, "|-----------------|-------------------|\n");
    }

    fclose(output);
    printf("\nWyniki zapisano do pliku 'wyniki_C.md'.\n");
    return 0;
}
