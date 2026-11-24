using System;
using System.Collections.Generic;
using System.Text;

namespace ZlecenieDruku
{
    internal class DrukPlakatu : ZlecenieDruku

    {
        public DrukPlakatu(string numer, int liczbaSztuk, decimal cenaZaSztuke)
            : base(numer, liczbaSztuk, cenaZaSztuke)
        {
        }

        public override decimal ObliczKoszt()
        {
            return (LiczbaSztuk * CenaZaSztuke) + 12;
        }

        public override int ObliczCzasRealizacji()
        {
            return 5 + LiczbaSztuk * 3; 
        }
    }
}
