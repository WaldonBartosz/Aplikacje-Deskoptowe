using System;
using System.Collections.Generic;
using System.Text;

namespace PolymorphismConsoleApp;

internal class Quadrangle
{
    protected int sideA, sideB, sideC, sideD;
    protected int height;
    protected string name;

    public Quadrangle(string name, int a, int b, int c, int d, int h)
    {
        sideA = a;
        sideB = b;
        sideC = c;
        sideD = d;
        height = h;
        this.name = name;
    }

    public int GetPerimeter()
    {
        return sideA + sideB + sideC + sideD;
    }
}