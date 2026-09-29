#include <iostream>
//#include <cmath>
//#include <math.h>

/*
DRY - don't repeat yourself - nie powtarzaj siê

Operatory porównania:
> - wiêksze
< - mniejsze
>= - wiêksze b¹dŸ równe
<= - mniejsze b¹dŸ równe
== - równe
!= - ró¿ne

Operatory logiczne:
&& - AND
|| - OR
! - NOT
								  ALBO
 a	b	a && b	a || b	!a		a XOR b
 F	F	  F		   F	T			F
 F	T	  F		   T	T			T
 T	F	  F		   T	F			T
 T	T	  T		   T	F			F

 F - false
 T - true

*/
/*
* **Pe³noletnoœæ uczestnika**
  Wczytaj wiek uczestnika. Wyœwietl informacjê, czy jest pe³noletni. Przyjmij, ¿e pe³noletnoœæ osi¹ga siê w wieku 18 lat.

* **Kontrola liczby produktów**
  Wczytaj liczbê zamówionych sztuk produktu oraz liczbê sztuk dostarczonych. SprawdŸ, czy dostawa jest zgodna z zamówieniem. Jeœli liczby s¹ ró¿ne, oblicz i wyœwietl, ilu sztuk brakuje albo ile sztuk dostarczono za du¿o.

* **Odleg³oœæ od punktu zerowego**
  Wczytaj ca³kowit¹ wspó³rzêdn¹ punktu na osi liczbowej. Oblicz jego odleg³oœæ od zera. Przyk³adowo punkty o wspó³rzêdnych `-5` i `5` znajduj¹ siê w odleg³oœci `5` od zera. Wykorzystaj instrukcjê warunkow¹.

* **Koszt dostawy zamówienia**
  Wczytaj wartoœæ zakupów. Dla zakupów o wartoœci co najmniej 200 z³ dostawa jest bezp³atna, a dla mniejszych zamówieñ kosztuje 15 z³. Oblicz i wyœwietl koszt dostawy oraz ³¹czn¹ kwotê do zap³aty.

* **Pakowanie produktów**
  Wczytaj dodatni¹ ca³kowit¹ liczbê produktów. SprawdŸ osobno, czy wszystkie produkty mo¿na zapakowaæ do pe³nych opakowañ po 3 sztuki oraz do pe³nych opakowañ po 5 sztuk. Nastêpnie poinformuj, czy oba sposoby pakowania s¹ mo¿liwe bez pozostawienia produktów luzem.

* **Bilet ulgowy**
  Wczytaj wiek pasa¿era oraz cenê biletu normalnego. Osobom poni¿ej 18 lat lub maj¹cym co najmniej 65 lat przys³uguje zni¿ka 50%. Oblicz cenê biletu i wyœwietl informacjê, czy zastosowano ulgê.

* **Temperatura w ch³odni**
  Wczytaj aktualn¹ temperaturê w ch³odni. Prawid³owa temperatura mieœci siê w zakresie od 2°C do 8°C w³¹cznie. Wyœwietl informacjê, czy temperatura jest prawid³owa, za niska czy za wysoka.

* **Budowa trójk¹ta**
  Wczytaj d³ugoœci trzech odcinków. SprawdŸ, czy mo¿na zbudowaæ z nich trójk¹t. Wszystkie d³ugoœci musz¹ byæ dodatnie, a suma d³ugoœci ka¿dych dwóch odcinków musi byæ wiêksza od d³ugoœci trzeciego.

* **Bok kwadratowej dzia³ki**
  Wczytaj powierzchniê kwadratowej dzia³ki w metrach kwadratowych. Je¿eli powierzchnia jest dodatnia, oblicz d³ugoœæ boku dzia³ki, wykorzystuj¹c pierwiastek kwadratowy. W przeciwnym razie wyœwietl komunikat o niepoprawnej powierzchni.

* **Wynik testu**
  Wczytaj liczbê punktów zdobytych w teœcie. Mo¿na uzyskaæ od 0 do 100 punktów ca³kowitych. Przypisz wynik do odpowiedniej kategorii:
  - poni¿ej 50 punktów — test niezaliczony;
  - od 50 do 69 punktów — wynik podstawowy;
  - od 70 do 89 punktów — wynik dobry;
  - od 90 do 100 punktów — wynik bardzo dobry.
  Dla liczby spoza zakresu 0–100 wyœwietl komunikat o niepoprawnych danych.

* **Przeliczanie jednostek d³ugoœci**
  Wyœwietl menu: `1` — metry na centymetry, `2` — centymetry na metry, `3` — kilometry na metry. Wczytaj numer opcji oraz d³ugoœæ do przeliczenia. Wykorzystaj instrukcjê `switch`, aby wykonaæ wybrane przeliczenie. Wyœwietl wynik wraz z jednostk¹, a dla nieznanej opcji — komunikat o b³êdnym wyborze.

*/

//Napisz program, który wyœwietli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczbe:\n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "Liczba jest ujemna";

	if (number == 0)
		std::cout << "Liczba jest równa zero";

	std::cout << "Kolejna instrukcja\n";
}

//Napisz program, który wyœwietli informacje czy liczba jest parzysta czy nieparzysta.
void task2()
{
	unsigned int number;
	std::cout << "Podaj liczbe:\n";
	std::cin >> number;

	int remainderOfDivision = number % 2;

	if (remainderOfDivision == 0)
		std::cout << "Liczba jest parzysta\n";

	if (remainderOfDivision != 0) // remainderOfDivision == 1
		std::cout << "Liczba jest nieparzysta\n";

	if (remainderOfDivision == 0)
		std::cout << "Liczba jest parzysta\n";
	else
		std::cout << "Liczba jest nieparzysta\n";
}

//Napisz program, który wyœwietli informacje czy liczba jest z zakresu <1 ; 10).
void task3()
{
	int number;
	std::cout << "Podaj liczbe:\n";
	std::cin >> number;

	//wersja 1
	if (number >= 1) //number > 0
	{
		if (number < 10) // number <= 9
			std::cout << "Liczba jest w przedziale\n";
		else
			std::cout << "Liczba z poza zakresu\n";
	}
	else
		std::cout << "Liczba z poza zakresu\n";

	//wersja 2
	if (number >= 1) //number > 0
		if (number < 10) // number <= 9
			std::cout << "Liczba jest w przedziale\n";
		else
			std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba z poza zakresu\n";

	//wersja 3
	if (number >= 1 && number < 10)
		std::cout << "Liczba jest w przedziale\n";
	else
		std::cout << "Liczba z poza zakresu\n";

	//wersja 4
	if (number < 1 || number >= 10)
		std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba jest w przedziale\n";

	//wersja 5
	if (!(number >= 1 && number < 10))
		std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba jest w przedziale\n";
}

//Napisz program, który wykona dzielenie dwóch liczb
void task4()
{
	int dividend, divisor;
	std::cout << "Podaj liczbe:\n";
	std::cin >> dividend;
	std::cout << "Podaj liczbe:\n";
	std::cin >> divisor;

	if (divisor != 0)
	{
		int quoitent = dividend / divisor;
		std::cout << "wynik dzielenia " << quoitent << "\n";
	}
	else
		std::cout << "Dzzielenie przez zero!!!\n";
}

//Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
void task5()
{
	int day, month, year;
	std::cout << "Podaj dzieñ\n";
	std::cin >> day;
	std::cout << "Podaj miesi¹c\n";
	std::cin >> month;
	std::cout << "Podaj rok\n";
	std::cin >> year;

	if (day >= 1 && day <= 31
		&& month >= 1 && month <= 12
		&& year != 0
		&& (
			// Miesi¹ce maj¹ce 31 dni
			(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)

			// Miesi¹ce maj¹ce 30 dni
			|| ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30)

			// Luty z uwzglêdnieniem roku przestêpnego
			|| (month == 2
				&& (day <= 28
					|| (day == 29
						&& ((year % 4 == 0 && year % 100 != 0)
							|| year % 400 == 0))))
			))
	{
		std::cout << "Data " << day << "." << month << "." << year << " jest poprawna\n";
	}
	else
	{
		std::cout << "Data nie jest poprawna";
	}
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby od 1 do 7 i wyœwietli odpowiadaj¹cy mu dzieñ tygodnia.
void task6()
{
	int dayOfWeek;
	std::cout << "Podaj numer dnia tygodnia\n";
	std::cin >> dayOfWeek;

	if (dayOfWeek == 1)
		std::cout << "Podniedzia³ek\n";
	else if (dayOfWeek == 2)
		std::cout << "Wtorek\n";
	else if (dayOfWeek == 3)
		std::cout << "Œroda\n";
	else if (dayOfWeek == 4)
		std::cout << "Czwartek\n";
	else if (dayOfWeek == 5)
		std::cout << "Pi¹tek\n";
	else if (dayOfWeek == 6)
		std::cout << "Sobota\n";
	else if (dayOfWeek == 7 || dayOfWeek == 0)
		std::cout << "Niedziela\n";
	else
		std::cout << "Dzieñ niepoprawny\n";

	switch (dayOfWeek)
	{
	case 1:
		std::cout << "Podniedzia³ek\n";
		break;
	case 2:
		std::cout << "Wtorek\n";
		break;
	case 3:
		std::cout << "Œroda\n";
		break;
	case 4:
		std::cout << "Czwartek\n";
		break;
	case 5:
		std::cout << "Pi¹tek\n";
		break;
	case 6:
		std::cout << "Sobota\n";
		break;
	case 0:
	case 7:
		std::cout << "Niedziela\n";
		break;
	default:
		std::cout << "Dzieñ niepoprawny\n";
	}
}

//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru jednoelementowego.
void task7()
{
	int firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;

	int max;

	max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}

//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru dwuelementowego.
void task8()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;

	int max;

	if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}

//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru trójelementowego.
void task9()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> thirdNumber;

	int max;

	if (thirdNumber > secondNumber && thirdNumber > firstNumber)
		max = thirdNumber;
	else
	{
		if (secondNumber > firstNumber)
			max = secondNumber;
		else
			max = firstNumber;
	}

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}

//Napisz program, który wyœwietli najwiêksz¹ liczbê ze zbioru czteroelementowego.
void task10()
{
	int firstNumber, secondNumber, thirdNumber, fourthNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> secondNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> thirdNumber;
	std::cout << "Podaj liczbê\n";
	std::cin >> fourthNumber;

	int max;

	if (fourthNumber > thirdNumber
		&& fourthNumber > secondNumber
		&& fourthNumber > firstNumber)
		max = fourthNumber;
	else if (thirdNumber > secondNumber
		&& thirdNumber > firstNumber)
		max = thirdNumber;
	else if (secondNumber > firstNumber)
		max = secondNumber;
	else
		max = firstNumber;

	std::cout << "Najwiêksza wartoœæ to: " << max << "\n";
}

int main()
{
	task6();

	//float number = 9;
	//double root = pow(number, 19) + sqrt(number) + 8;

}
