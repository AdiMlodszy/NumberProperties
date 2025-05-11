using System.Collections.Generic;

/// <summary>
/// Reprezentuje właściwość liczby szczęśliwej (happy number).
/// Liczba szczęśliwa to taka, która w wyniku iteracyjnego sumowania kwadratów jej cyfr
/// prowadzi do 1. Jeśli pojawi się cykl bez 1, liczba jest nieszczęśliwa.
/// Przykład: 19 → 1^2 + 9^2 = 82 → 8^2 + 2^2 = 68 → ... → 1.
/// Klasa dziedziczy metody pomocnicze z NumberPropertyBase.
/// </summary>
public class Happy : NumberPropertyBase
{
    /// <inheritdoc />
    public override string Name => "Szczęśliwa";

    /// <inheritdoc />
    public override bool Check(int number)
    {
        if (number <= 0)
            return false;

        HashSet<int> seen = new();
        while (number != 1 && !seen.Contains(number))
        {
            seen.Add(number);
            number = SumOfSquares(number);
        }

        return number == 1;
    }
}