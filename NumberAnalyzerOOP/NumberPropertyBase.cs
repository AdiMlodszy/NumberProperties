/// <summary>
/// Klasa bazowa dla wszystkich właściwości liczby.
/// Udostępnia metody pomocnicze wspólne dla wielu klas.
/// </summary>
public abstract class NumberPropertyBase : INumberProperty
{
    public abstract string Name { get; }

    public abstract bool Check(int number);

    /// <summary>
    /// Zwraca sumę cyfr danej liczby.
    /// </summary>
    protected int SumOfDigits(int number)
    {
        int sum = 0;
        while (number > 0)
        {
            sum += number % 10;
            number /= 10;
        }
        return sum;
    }

    /// <summary>
    /// Zwraca sumę kwadratów cyfr danej liczby.
    /// </summary>
    protected int SumOfSquares(int number)
    {
        int sum = 0;
        while (number > 0)
        {
            int digit = number % 10;
            sum += digit * digit;
            number /= 10;
        }
        return sum;
    }

    /// <summary>
    /// Zwraca liczbę cyfr w liczbie.
    /// </summary>
    protected int DigitCount(int number)
    {
        return number.ToString().Length;
    }
}
