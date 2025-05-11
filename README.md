# Number Properties Comparer

## 1. Cel projektu

Celem projektu jest porównanie dwóch paradygmatów programowania:

- **imperatywno-strukturalnego** (C)
- **obiektowego (OOP)** (C#)

Obie wersje programu wykonują dokładnie to samo zadanie — analizują liczby z przedziału podanego przez użytkownika i przypisują im określone właściwości matematyczne.

---

## 2. Funkcjonalność

- Pobranie zakresu liczb z konsoli (`od` – `do`)
- Sprawdzenie 5 własności dla każdej liczby:

  1. Palindromiczna
  2. Doskonała
  3. Armstronga (narcystyczna)
  4. Szczęśliwa
  5. Harshada (liczba Nivena)

- Zapis wyników do pliku:

  - `wyniki_C.md` — wersja strukturalna
  - `wyniki_OOP.md` — wersja obiektowa

---

## 3. Struktura projektu

```
/NumberProperties
│
├── /Structural_C
│   ├── main.c
│   ├── palindromic.c
│   ├── perfect.c
│   ├── armstrong.c
│   ├── happy.c
│   ├── harshad.c
│   ├── utils.h
│   └── wyniki_C.md
│
├── /NumberAnalyzerOOP
│   ├── Program.cs
│   ├── NumberPropertyBase.cs
│   ├── Number.cs
│   ├── Analyzer.cs
│   ├── INumberProperty.cs
│   ├── Palindromic.cs
│   ├── Perfect.cs
│   ├── Armstrong.cs
│   ├── Happy.cs
│   ├── Harshad.cs
│   ├── wyniki_OOP.md
│   └── NumberAnalyzerOOP.csproj
│
└── README.md
```

---

## 4. Jak uruchomić projekt?

### Wersja strukturalna (C):

1. Upewnij się, że masz zainstalowany kompilator C, np. MinGW (dla Windows) lub gcc (Linux/macOS).

- Dla Windows: zainstaluj MinGW i upewnij się, że gcc jest dodany do zmiennej środowiskowej PATH.

2. Skompiluj:

```
gcc main.c palindromic.c perfect.c armstrong.c happy.c harshad.c -o number_properties
```

3. Uruchom:

```
./number_properties

```

4. Wynik znajdziesz w pliku wyniki_C.md.

---

### Wersja obiektowa (C#):

Upewnij się, że masz zainstalowane .NET SDK (np. .NET 8 lub 9) i że polecenie dotnet działa w terminalu (możesz sprawdzić wpisując `dotnet --version`).

1. Wejdź do katalogu `NumberAnalyzerOOP`:

   ```bash
   cd NumberAnalyzerOOP
   ```

2. Przy pierwszym uruchomieniu (jeśli nie masz projektu):

   ```bash
   dotnet new console
   ```

3. Zbuduj i uruchom:

   ```bash
   dotnet build
   dotnet run
   ```

4. Wynik znajdziesz w pliku `wyniki_OOP.md`.

---

## 5. Cechy porównywanych paradygmatów

| Paradygmat           | Strukturalny (C)           | Obiektowy (C#)                                         |
| -------------------- | -------------------------- | ------------------------------------------------------ |
| Kod źródłowy         | Funkcje w osobnych plikach | Klasy z metodami implementujące interfejsy             |
| Reprezentacja liczby | Typ `int`                  | Klasa `Number`                                         |
| Własności liczby     | Funkcje `bool is_xyz(int)` | Klasy implementujące `INumberProperty`                 |
| Obsługa logiki       | Warunki w `main.c`         | Klasa `Analyzer`                                       |
| Dziedziczenie        | Brak                       | Klasy dziedziczą po NumberPropertyBase                 |
| Polimorfizm          | Brak                       | Właściwości są używane przez interfejs INumberProperty |
| Enkapsulacja         | Brak                       | Każda logika właściwości ukryta we własnej klasie      |
| Abstrakcja           | Brak                       | Interfejs INumberProperty + klasa abstrakcyjna         |
| Kompozycja           | Brak                       | Analyzer zawiera kolekcję właściwości                  |

---

## 6. Wynik działania

W obu wersjach programu otrzymujemy plik `.md` z tabelą zawierającą analizowane liczby oraz ich właściwości matematyczne. Format wyniku:

```
| Liczba:         | Właściwości:        |
|-----------------|---------------------|
|             153 | - Armstronga        |
|                 | - Harshada          |
|-----------------|---------------------|
```

---

## Autor

Adrian Kasprzak
Projekt na potrzeby przedmiotu **Języki i paradygmaty programowania**
Uniwersytet Pomorski w Słupsku — 2025
