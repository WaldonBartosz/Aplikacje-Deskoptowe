using System;
using System.Collections.Generic;
using System.Text;

namespace ZlecenieDruku
{
    internal abstract class ZlecenieDruku
    {
        public string Numer { get; set; }
        public int LiczbaSztuk { get; set; }
        public decimal CenaZaSztuke { get; set; }
        private decimal CenazaSztuke = 10;

        protected ZlecenieDruku(string numer, int liczbaSztuk, decimal cenaZaSztuke)
        {
            Numer = numer;
            LiczbaSztuk = liczbaSztuk;
            CenaZaSztuke = cenaZaSztuke;
        }

        public virtual decimal ObliczKoszt()
        {
            return LiczbaSztuk * CenaZaSztuke;
        }

        public abstract int ObliczCzasRealizacji();
    }
}
