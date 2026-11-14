/*
Drukarka wybrana do wydruku

Napisz program obsługujący wydruk na wybranej drukarce.
- Utwórz klasę Printer z automatyczną właściwością Name oraz prywatnym polem przechowującym liczbę arkuszy. Udostępnij właściwość PaperCount z odczytem i zapisem. Próba ustawienia ujemnej liczby arkuszy ma pozostawić poprzednią wartość.
- Dodaj konstruktor otrzymujący nazwę drukarki i początkową liczbę arkuszy. Przyjmij poprawne argumenty konstruktora.
- Dodaj metodę Print(int pageCount). Jeśli liczba stron jest dodatnia i papieru wystarcza, metoda zmniejsza zapas i zwraca true. W przeciwnym razie zwraca false bez zmiany zapasu. Jedna strona zużywa jeden arkusz.
- Utwórz drukarkę z 10 arkuszami. Do zmiennej selectedPrinter przypisz referencję do tej drukarki. Do osobnej zmiennej typu int skopiuj jej początkową liczbę arkuszy.
- Wczytaj liczbę stron za pomocą Console.ReadLine i int.TryParse. Jeśli konwersja się powiedzie, spróbuj wykonać wydruk przez selectedPrinter i wyświetl wynik operacji. Przy błędnym tekście wyświetl komunikat.
- Wyświetl liczbę arkuszy przez obie zmienne wskazujące drukarkę oraz wcześniej zapisaną liczbę typu int. Wyjaśnij otrzymane wyniki.

*/

using PrinterTaskConsoleApp;

Printer printer = new Printer("DzikaM", 10);

Printer selectedPrinter = printer;        // ta sama drukarka (druga nazwa)
int initialPaperCount = printer.PaperCount; // kopia liczby 10

Console.Write("Podaj liczbę stron: ");
string? input = Console.ReadLine();

if (int.TryParse(input, out int pageCount))
{
    bool result = selectedPrinter.Print(pageCount);
    Console.WriteLine($"Wynik wydruku: {result}");
}
else
{
    Console.WriteLine("To nie jest liczba!");
}

Console.WriteLine($"printer: {printer.PaperCount}");
Console.WriteLine($"selectedPrinter: {selectedPrinter.PaperCount}");
Console.WriteLine($"initialPaperCount: {initialPaperCount}");

/*
Wyjaśnienie (np. wpisano 4):

printer i selectedPrinter to jedna drukarka z dwiema nazwami,
więc obie pokazują 6.
initialPaperCount to zwykła kopia liczby, więc zostało 10.
*/
