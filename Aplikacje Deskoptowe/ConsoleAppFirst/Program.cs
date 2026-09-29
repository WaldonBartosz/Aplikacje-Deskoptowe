﻿
Console.Write("Hello, World!");
Console.WriteLine("Hello, World!");

string name = "Jan";
string surname = "Kowalski";

Console.WriteLine("Witaj " + name + " " + surname + " tutaj!!!!");
Console.WriteLine("Witaj {0} {1} tutaj!!!!", name, surname);
Console.WriteLine($"Witaj {name} {surname} tutaj!!!!");

Console.WriteLine("Prędkość to km\\h");
Console.WriteLine(@"Prędkość to km\h");

int firstNumber = 15;
int secondNumber = firstNumber;
++secondNumber;
Console.WriteLine($"Pierwsza liczba to {firstNumber}");
Console.WriteLine($"Druga liczba to {secondNumber}");

string text;
Console.WriteLine("Podaj dowolny tekst");
text = Console.ReadLine();
Console.WriteLine($"Podałeś: {text}");

int x = 15;
int? y = null;


y = x;
//x = y;



/*
Zmienna - pewien obszar w pamięci operacyjnej, w której można
w danej chwili przechować tylko jedną daną.

Instrukcja daklaracji zmiennej:
typ_zmiennej nazwa_zmiennej;


Typ zmiennej - wielkość obszaru pamięci, interpretacja ciągu bitów

byte - 1 bajtowa liczba całkowita ze znakiem <-128 ; 127>
short - 2 bajtowa liczba całkowita ze znakiem <-32 768, 32 767>
int - 4 bajtowa liczba całkowita ze znakiem <-2 147 483 648, 2 147 483 647>
long - to samo co int
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

float - 4 bajtowa liczba rzeczywista, dokładność 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dokładność 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dokładność 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszaru w pamięci, identyfikator
Warunki niezbędne:
* dozwolone znaki:
	- alfabet angielski aA-zZ
	- cyfry arabskie 0-9
	- podkreślenie (podłoga) _
* pierwszym znakiem nie może być cyfra
* unikalny w swoim zakresie widoczności
* nie może to być słowo kluczowe (zarezerwowane) danego języka

Warunki programistów:
* nazwa zmiennej powinna oddawać charakter przechowywanych danych
* jeśli wiele słów to w miejscu spacji podkreślenie lub zaczynając od drugiego
  słowa piszemy je z dużej litery
* piszemy po angielsku



KISS - Keep It Simple, Stupid 
DRY - don't repeat yourself - nie powtarzaj się
YAGNI - You Aren't Gonna Need It - Nie będziesz tego potrzebował
SOLID


*/