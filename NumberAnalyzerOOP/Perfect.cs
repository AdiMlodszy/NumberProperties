/// <summary>
/// Reprezentuje właściwość doskonałości liczby.
/// Liczba doskonała to taka, której suma dzielników właściwych (bez niej samej)
/// jest równa tej liczbie. Przykład: 6 → 1 + 2 + 3 = 6.
/// Klasa dziedziczy metody pomocnicze z NumberPropertyBase.
/// </summary>
public class Perfect : NumberPropertyBase
{
    /// <inheritdoc />
    public override string Name => "Doskonała";

    /// <inheritdoc />
    public override bool Check(int number)
    {
        if (number <= 1)
            return false;

        int sum = 1;
        for (int i = 2; i <= number / 2; i++)
        {
            if (number % i == 0)
                sum += i;
        }

        return sum == number;
    }
}