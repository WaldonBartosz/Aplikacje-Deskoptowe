using System;
using System.Collections.Generic;
using System.Text;

namespace ObjectConsoleApp;

internal class Point3D : Point
{
    public int Z { get; set; }

    public Point3D(int x, int y, int z) : base(x, y)
    {
        Z = z;
    }

    public new void Show()
    {
        base.Show();
        Console.WriteLine($"y = {Z}");
    }

    public new double GetDistanceToCenter()
    {
        return Math.Sqrt(x * x + Y * Y + Z * Z);
    }
}