/// <summary>
/// Reprezentuje właściwość Harshada (znaną także jako Niven number).
/// Liczba Harshada to taka, która dzieli się bez reszty przez sumę swoich cyfr.
/// Przykład: 18 → 1 + 8 = 9 → 18 % 9 == 0 → Harshada.
/// Klasa dziedziczy metody pomocnicze z NumberPropertyBase.
/// </summary>
public class Harshad : NumberPropertyBase
{
    /// <inheritdoc />
    public override string Name => "Harshada";

    /// <inheritdoc />
    public override bool Check(int number)
    {
        if (number <= 0)
            return false;

        int sum = SumOfDigits(number);
        return sum != 0 && number % sum == 0;
    }
}
