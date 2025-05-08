# Number Properties Comparer

## 1. Cel projektu

Celem projektu jest porównanie dwóch paradygmatów programowania:

- imperatywno-strukturalnego
- obiektowego (OOP)

Obie wersje programu wykonują identyczne zadanie: analizują liczby z zakresu podanego przez użytkownika i przypisują im określone własności matematyczne.

## 2. Funkcjonalność

- Pobranie przedziału liczb (od - do) z konsoli
- Sprawdzenie pięciu własności dla każdej liczby:

  1. Palindromiczna
  2. Doskonała
  3. Armstronga
  4. Szczęśliwa
  5. Harshada

- Wypisanie numerów wraz z pasującymi własnościami:

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
│   └── utils.h
│
├── /OOP
│   ├── Program.cs
│   ├── Number.cs
│   ├── Analyzer.cs
│   ├── INumberProperty.cs
│   ├── PalindromicProperty.cs
│   ├── PerfectProperty.cs
│   ├── ArmstrongProperty.cs
│   ├── HappyProperty.cs
│   └── HarshadProperty.cs
│
└── README.md
```

## 4. Główne założenia

- Program ma jasno wykazywać różnice między dwoma paradygmatami przy identycznej funkcjonalności.
- Każda własność liczby implementowana jest osobno w obu wersjach.
- Kod strukturalny stosuje funkcje w osobnych plikach.
- Kod obiektowy w pełni wykorzystuje cechy OOP: dziedziczenie, polimorfizm, enkapsulację i kompozycję.
