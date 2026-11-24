using System;

namespace ZlecenieDruku
{
    internal class DrukDokumentu : ZlecenieDruku
    {
        public DrukDokumentu(string numer, int liczbaSztuk, decimal cenaZaSztuke)
            : base(numer, liczbaSztuk, cenaZaSztuke)
        {
        }

        public override int ObliczCzasRealizacji()
        {
            return (int)Math.Ceiling(LiczbaSztuk / 20.0);
        }
    }
}
