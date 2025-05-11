using System;
using System.Linq;

/// <summary>
/// Reprezentuje właściwość palindromiczności liczby.
/// Liczba palindromiczna to taka, która czytana od przodu i od tyłu wygląda tak samo.
/// Przykład: 121, 1331, 7
/// Klasa dziedziczy metody pomocnicze z NumberPropertyBase.
/// </summary>
public class Palindromic : NumberPropertyBase
{
    /// <inheritdoc />
    public override string Name => "Palindromiczna";

    /// <inheritdoc />
    public override bool Check(int number)
    {
        if (number < 0)
            return false;

        var str = number.ToString();
        var reversed = new string(str.Reverse().ToArray());
        return str == reversed;
    }
}
