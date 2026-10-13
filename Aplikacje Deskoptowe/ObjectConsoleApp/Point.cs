using System;
using System.Collections.Generic;
using System.Text;

namespace ObjectConsoleApp;

internal class Point
{
    public int x;
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

    private string description = "Hello";

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


    public void Show()
    {
        Console.WriteLine("Info o obiekcie");
        Console.WriteLine(description);
        Console.WriteLine($"x = {x}");
        Console.WriteLine($"y = {Y}");
    }
}