using System.Collections.Generic;

/// <summary>
/// Reprezentuje liczbę i zbiór jej właściwości.
/// Umożliwia przechowywanie wyniku analizy w postaci jednej struktury danych.
/// </summary>
public class Number
{
    /// <summary>
    /// Wartość liczby.
    /// </summary>
    public int Value { get; }

    /// <summary>
    /// Lista nazw właściwości spełnianych przez daną liczbę.
    /// </summary>
    public List<string> Properties { get; }

    /// <summary>
    /// Tworzy nową instancję liczby z przypisanymi właściwościami.
    /// </summary>
    /// <param name="value">Liczba całkowita.</param>
    /// <param name="properties">Lista nazw właściwości.</param>
    public Number(int value, List<string> properties)
    {
        Value = value;
        Properties = properties;
    }

    /// <summary>
    /// Zwraca reprezentację tekstową liczby i jej właściwości.
    /// </summary>
    /// <returns>Łańcuch w formacie: "123: Właściwość1, Właściwość2"</returns>
    public override string ToString()
    {
        if (Properties.Count == 0)
            return $"{Value}: (brak właściwości)";
        return $"{Value}: {string.Join(", ", Properties)}";
    }
}
