using System;
using System.Collections.Generic;
using System.Text;

namespace PolymorphismConsoleApp;

internal class Rectangle : Quadrangle
{
    public Rectangle(string name, int a, int b)
        : base(name, a, b, a, b, a)
    {

    }

    public void ShowInfo()
    {
        Console.WriteLine($"Obiekt {name}:");
        Console.WriteLine($"Bok a = {sideA}");
        Console.WriteLine($"Bok b = {sideB}");
        Console.WriteLine($"Obwód = {GetPerimeter()}");
        Console.WriteLine($"Pole = {GetArea()}");
        Console.WriteLine();
    }

    public int GetArea()
    {
        return sideA * sideB;
    }
}

/*
                d = b
        ---------------------
        |                   |
  a =h  |                   | c = a = h
        |                   |
        ---------------------
                   b


*/