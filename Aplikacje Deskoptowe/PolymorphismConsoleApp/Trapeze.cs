using System;
using System.Collections.Generic;
using System.Text;

namespace PolymorphismConsoleApp;

internal class Trapeze : Quadrangle
{
    public Trapeze(string name, int a, int b, int c, int d, int h)
        : base(name, a, b, c, d, h)
    {

    }

    public void ShowInfo()
    {
        Console.WriteLine($"Obiekt {name}:");
        Console.WriteLine($"Bok a = {sideA}");
        Console.WriteLine($"Bok b = {sideB}");
        Console.WriteLine($"Bok c = {sideC}");
        Console.WriteLine($"Bok d = {sideD}");
        Console.WriteLine($"Wysokość = {height}");
        Console.WriteLine($"Obwód = {GetPerimeter()}");
        Console.WriteLine($"Pole = {GetArea()}");
        Console.WriteLine();
    }

    public int GetArea()
    {
        return (sideB + sideD) * height / 2;
    }
}

/*
                    d
            -----------------
           / |               \
     a    /  |h               \  c
         /   |                 \
        -------------------------
                    b
*/