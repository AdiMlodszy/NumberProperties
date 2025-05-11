using System.Collections.Generic;

/// <summary>
/// Odpowiada za analizowanie właściwości liczb.
/// Przechowuje listę implementacji INumberProperty i sprawdza, które z nich spełnia dana liczba.
/// </summary>
public class Analyzer
{
    private readonly List<INumberProperty> _properties;

    /// <summary>
    /// Tworzy instancję analizatora z listą dostępnych właściwości.
    /// </summary>
    /// <param name="properties">Lista obiektów implementujących INumberProperty.</param>
    public Analyzer(List<INumberProperty> properties)
    {
        _properties = properties;
    }

    /// <summary>
    /// Analizuje liczbę pod kątem wszystkich właściwości i zwraca obiekt Number z wynikami.
    /// </summary>
    /// <param name="value">Liczba do sprawdzenia.</param>
    /// <returns>Obiekt Number zawierający listę nazw właściwości spełnionych przez liczbę.</returns>
    public Number Analyze(int value)
    {
        List<string> result = new();
        foreach (var prop in _properties)
        {
            if (prop.Check(value))
            {
                result.Add(prop.Name);
            }
        }
        return new Number(value, result);
    }
}
