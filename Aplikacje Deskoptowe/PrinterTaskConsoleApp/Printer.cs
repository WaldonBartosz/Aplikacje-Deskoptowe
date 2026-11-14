namespace PrinterTaskConsoleApp;

internal class Printer
{
    public string Name { get; set; }

    private int paperCount;

    public int PaperCount
    {
        get
        {
            return paperCount;
        }
        set
        {
            if (value >= 0)
                paperCount = value;
        }
    }

    public Printer(string name, int paperCount)
    {
        Name = name;
        PaperCount = paperCount;
    }

    public bool Print(int pageCount)
    {
        if (pageCount > 0 && pageCount <= paperCount)
        {
            paperCount -= pageCount;
            return true;
        }

        return false;
    }
}
