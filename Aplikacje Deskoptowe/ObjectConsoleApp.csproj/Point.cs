using System;
using System.Collections.Generic;
using System.Text;

namespace ObjectConsoleApp;

internal class Point : Object
{
    protected int x;
    public int X
    {
        set
        {
            if (value > 0)
                x = value;
        }

        get
        {
            return x;
        }
    }

    /*
    private int y;
    public int Y
    {
        set
        {
            y = value;
        }

        get
        {
            return y;
        }
    }
    */

    public int Y { get; set; }

    protected string description = "Hello";

    public string Description
    {
        get { return description; }
        set { description = value; }
    }


    public void SetX(int value)
    {
        if (value > 0)
            x = value;
    }

    public int GetX()
    {
        // if (mamy uprawnienia)
        return x;
        //else
        //    błąd
    }

    public Point()
    {
        Console.WriteLine("Działa konstruktor");
    }

    public Point(int x, int y)
    {
        X = x;
        Y = y;
    }

    public double GetDistanceToCenter()
    {
        return Math.Sqrt(x * x + Y * Y);
    }


    public void Show()
    {
        Console.WriteLine("Info o obiekcie");
        Console.WriteLine(description);
        Console.WriteLine($"x = {x}");
        Console.WriteLine($"y = {Y}");
    }
}

/*
 Modyfikatory klas
 
| Modyfikator                                  | Ta sama klasa | Klasa zawierająca | Klasy pochodne(ten sam assembly)  | Klasy pochodne(inny assembly)  | Inne klasy w tym samym assembly | Inne klasy w innym assembly |
| -------------------------------------------  | ------------- | ----------------- | --------------------------------- | ------------------------------ | ------------------------------- | --------------------------- |
| ** public** (top-level/zagnieżdżona)         | ✅            | ✅               | ✅                                | ✅                             | ✅                               | ✅                           |
| ** internal** (top-level/zagnieżdżona)       | ✅            | ✅               | ✅                                | ❌                             | ✅                               | ❌                           |
| ** private** (tylko zagnieżdżona)            | ✅            | ✅               | ❌                                | ❌                             | ❌                               | ❌                           |
| ** protected** (tylko zagnieżdżona)          | ✅            | ✅               | ✅                                | ✅                             | ❌                               | ❌                           |
| ** protected internal** (tylko zagnieżdżona) | ✅            | ✅               | ✅                                | ✅                             | ✅                               | ❌                           |
| ** private protected** (tylko zagnieżdżona)  | ✅            | ✅               | ✅                                | ❌                             | ❌                               | ❌                           |

Modyfikatory przy członkach klas (pola, właściwości, metody itd.)

| Modyfikator          | Dostęp w tej klasie | Klasy pochodne                 | Ten sam assembly | Inny assembly        |
| -------------------- | ------------------- | ------------------------------ | ---------------- | -------------------- |
| `public`             | ✅                  | ✅                              | ✅                | ✅                    |
| `private`            | ✅                  | ❌                              | ❌                | ❌                    |
| `protected`          | ✅                  | ✅                              | ❌                | ❌                    |
| `internal`           | ✅                  | ✅ (jeśli w tym samym assembly) | ✅                | ❌                    |
| `protected internal` | ✅                  | ✅                              | ✅                | ✅ (jeśli dziedziczy) |
| `private protected`  | ✅                  | ✅ (tylko w tym samym assembly) | ✅                | ❌                    |


*/