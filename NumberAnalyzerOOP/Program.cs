using System;
using System.Collections.Generic;
using System.IO;

/// <summary>
/// Główna klasa programu odpowiedzialna za uruchomienie analizy liczb
/// i zapisanie wyników do pliku Markdown.
/// </summary>
class Program
{
    static void Main()
    {
        Console.WriteLine("Podaj zakres liczb (od - do):");
        Console.Write("Od: ");
        int start = int.TryParse(Console.ReadLine(), out var s) ? s : 0;
        Console.Write("Do: ");
        int end = int.TryParse(Console.ReadLine(), out var e) ? e : 0;

        // Zarejestrowane właściwości
        var properties = new List<INumberProperty>
        {
            new Palindromic(),
            new Perfect(),
            new Armstrong(),
            new Happy(),
            new Harshad()
        };

        var analyzer = new Analyzer(properties);
        var results = new List<Number>();

        for (int i = start; i <= end; i++)
        {
            results.Add(analyzer.Analyze(i));
        }

        // Zapis do pliku Markdown
        using var writer = new StreamWriter("wyniki_OOP.md");
        writer.WriteLine("| Liczba:         | Właściwości:        |");
        writer.WriteLine("|-----------------|---------------------|");

        foreach (var number in results)
        {
            if (number.Properties.Count == 0)
            {
                writer.WriteLine($"| {number.Value,15} | Brak właściwości    |");
            }
            else
            {
                writer.WriteLine($"| {number.Value,15} | - {number.Properties[0],-17} |");
                for (int i = 1; i < number.Properties.Count; i++)
                {
                    writer.WriteLine($"|                 | - {number.Properties[i],-17} |");
                }
            }
            writer.WriteLine("|-----------------|---------------------|");
        }

        Console.WriteLine("Wyniki zapisano do pliku wyniki_OOP.md");
    }
}
