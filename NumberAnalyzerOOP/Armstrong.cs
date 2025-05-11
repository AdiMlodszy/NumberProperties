using System;

/// <summary>
/// Reprezentuje właściwość liczby Armstronga (narcystycznej).
/// Liczba Armstronga to liczba równa sumie swoich cyfr podniesionych do potęgi
/// równej liczbie cyfr. Przykład: 153 = 1^3 + 5^3 + 3^3 = 153.
/// Klasa dziedziczy metody pomocnicze z NumberPropertyBase.
/// </summary>
public class Armstrong : NumberPropertyBase
{
    /// <inheritdoc />
    public override string Name => "Armstronga";

    /// <inheritdoc />
    public override bool Check(int number)
    {
        if (number < 0)
            return false;

        int original = number;
        int digits = DigitCount(number);
        int sum = 0;
        int temp = number;

        while (temp > 0)
        {
            int digit = temp % 10;
            sum += (int)Math.Pow(digit, digits);
            temp /= 10;
        }

        return sum == original;
    }
}