/// <summary>
/// Interfejs definiujący kontrakt dla właściwości liczby.
/// Każda właściwość implementująca ten interfejs powinna
/// zwracać informację, czy dana liczba ją spełnia oraz nazwę tej właściwości.
/// </summary>
public interface INumberProperty
{
    /// <summary>
    /// Sprawdza, czy dana liczba spełnia daną właściwość.
    /// </summary>
    /// <param name="number">Liczba do sprawdzenia.</param>
    /// <returns>True jeśli liczba spełnia właściwość, false w przeciwnym razie.</returns>
    bool Check(int number);

    /// <summary>
    /// Zwraca nazwę właściwości (np. "Palindromiczna", "Doskonała").
    /// </summary>
    /// <returns>Tekstowa nazwa właściwości.</returns>
    string Name { get; }
}
