using System;

namespace PrinterTaskConsoleApp
{
    internal class Printer
    {
        private string Name { get; set; }

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

        public Printer(int Count, string name)
        {
            PaperCount = Count;
            Name = name;
        }

        public void Show()
        {
            Console.WriteLine("Liczba arkuszy: ");
            Console.WriteLine(paperCount);
        }

        public void Write(int value)
        {
            if (value >= 0)
            {
                paperCount = value;
            }
        }
    }
}
