#include <iostream>

/*
* **Obliczanie potêgi**
  Wczytaj dodatni¹ ca³kowit¹ podstawê oraz nieujemny ca³kowity wyk³adnik. Oblicz potêgê przez wielokrotne mno¿enie, bez korzystania z funkcji `pow`. Pamiêtaj, ¿e dla wyk³adnika równego zero wynik wynosi 1.

* **Obliczanie silni**
  Wczytaj nieujemn¹ liczbê ca³kowit¹ i oblicz jej silniê. Silnia liczby dodatniej jest iloczynem kolejnych liczb od 1 do tej liczby, np. `4! = 1 · 2 · 3 · 4 = 24`. Przyjmij, ¿e `0! = 1`.

* **Rachunek za zakupy**
  Wczytuj ceny kolejnych produktów i obliczaj ³¹czn¹ kwotê do zap³aty. Cena równa zero oznacza zakoñczenie wprowadzania i nie jest cen¹ produktu. Na koñcu wyœwietl sumê oraz liczbê produktów. Jeœli u¿ytkownik od razu poda zero, oba wyniki powinny wynosiæ zero. Przyjmij, ¿e ceny produktów s¹ dodatnie.

* **Zakup biletów z ograniczonego bud¿etu**
  Wczytaj nieujemn¹ kwotê przeznaczon¹ na bilety oraz dodatni¹ cenê jednego biletu. Kwoty podawane s¹ w pe³nych z³otych. Oblicz, ile biletów mo¿na kupiæ i ile pieniêdzy pozostanie. Symuluj kupowanie po jednym bilecie — w ka¿dym obiegu pêtli odejmuj jego cenê od pozosta³ej kwoty. Nie korzystaj z dzielenia ani operatora reszty z dzielenia.

* **Oszczêdzanie na rower**
  Wczytaj cenê roweru, aktualn¹ kwotê oszczêdnoœci oraz dodatni¹ kwotê odk³adan¹ na koniec ka¿dego miesi¹ca. Oblicz, po ilu miesi¹cach oszczêdnoœci wystarcz¹ na zakup, oraz wyœwietl zgromadzon¹ wtedy kwotê. Jeœli u¿ytkownik ju¿ ma wystarczaj¹ce oszczêdnoœci, wynikiem powinno byæ zero miesiêcy. Przyjmij sta³¹ cenê roweru i brak odsetek.

* **Najwiêksza cyfra liczby**
  Wczytaj nieujemn¹ liczbê ca³kowit¹. Wyznacz najwiêksz¹ cyfrê wystêpuj¹c¹ w jej zapisie dziesiêtnym, np. dla `5072` wynikiem jest `7`. Wykorzystaj dzielenie ca³kowite i resztê z dzielenia przez 10. Dla liczby zero wynikiem powinno byæ zero.

* **Ciêcie wst¹¿ek na jednakowe kawa³ki**
  Wczytaj d³ugoœci dwóch wst¹¿ek w pe³nych centymetrach. Obie d³ugoœci s¹ dodatnie. Wst¹¿ki trzeba poci¹æ na kawa³ki o jednakowej, mo¿liwie najwiêkszej d³ugoœci, bez pozostawiania resztek. Oblicz d³ugoœæ jednego kawa³ka oraz ³¹czn¹ liczbê otrzymanych kawa³ków. Do wyznaczenia d³ugoœci wykorzystaj algorytm NWD.

* **Sprawdzanie liczby pierwszej**
  Wczytaj liczbê ca³kowit¹ wiêksz¹ od 1. SprawdŸ, czy jest liczb¹ pierwsz¹, czyli ma dok³adnie dwa dodatnie dzielniki: 1 oraz sam¹ siebie. Sprawdzaj kolejnych kandydatów na dzielnik, zaczynaj¹c od 2. Zakoñcz poszukiwanie natychmiast po znalezieniu dzielnika. Nie sprawdzaj kandydatów, których kwadrat jest wiêkszy od badanej liczby. Wyœwietl informacjê, czy liczba jest pierwsza.
* 
*/

//Napisz program, który policzy sumê cyfr 
// podanej przez u¿ytkownika liczby.
void task1()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	int sum = 0;

	/*
	if (number != 0)
	{
		do
		{
			int digit = number % 10;
			sum = sum + digit;
			number = number / 10;
		} while (number != 0);
	}

	if (number != 0)
	{
		int digit = number % 10;
		sum = sum + digit;
		number = number / 10;
		if (number != 0)
		{
			int digit = number % 10;
			sum = sum + digit;
			number = number / 10;
			if (number != 0)
			{
				int digit = number % 10;
				sum = sum + digit;
				number = number / 10;
				if (number != 0)
				{
					//itd.
				}
			}
		}
	}

	*/

	

	while (number != 0)
	{
		int digit = number % 10;
		sum = sum + digit;
		number = number / 10;
	}

	std::cout << "Suma cyfr: " << sum << "\n";
}

//Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
void task2()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	/*
	if (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
		if (number != 0)
		{
			rest = number % 10;
			sum = sum + rest;
			number = number / 10;
			if (number != 0)
			{
				rest = number % 10;
				sum = sum + rest;
				number = number / 10;
				//if (number != 0) ...
			}
		}
	}
	*/

	while (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	}

	std::cout << "Suma " << sum << "\n";
	//4125
}

//Napisz program, który policzy NWD dwóch liczb.
void task3()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsz¹ liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj drug¹ liczbê\n";
	std::cin >> secondNumber;

	int nwd;
	/*
	if (firstNumber < secondNumber)
		nwd = firstNumber;
	else
		nwd = secondNumber;
	*/
	nwd = (firstNumber < secondNumber) ? firstNumber : secondNumber;

	/*
	if (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
	{
		nwd--;
		if (secondNumber % nwd != 0
			|| firstNumber % nwd != 0)
		{
			nwd--;
			if (secondNumber % nwd != 0
				|| firstNumber % nwd != 0)
			{
				nwd--;
				//if...
			}
		}
	}
	*/

	//wersja 1
	while (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
	{
		--nwd;
	}

	std::cout << "NWD = " << nwd << "\n";

	//wersja 2
	nwd = 1;
	int divisor = 2;
	int tmpFirstNumber = firstNumber, tmpSecondNumber = secondNumber;
	while (tmpFirstNumber >= divisor
		&& tmpSecondNumber >= divisor)
	{
		if (tmpFirstNumber % divisor == 0
			&& tmpSecondNumber % divisor == 0)
		{
			tmpFirstNumber = tmpFirstNumber / divisor;
			tmpSecondNumber /= divisor;
			nwd *= divisor;
		}
		else
			divisor++;
	}
	std::cout << "NWD = " << nwd << "\n";

	//wersja 3
	//NWD(a, b) = a				jeœli b = 0
	//NWD(a, b) = NWD(b, a % b) jeœli b != 0
	int a = firstNumber, b = secondNumber;
	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
	}
	nwd = a;
	std::cout << "NWD = " << nwd << "\n";
}

//Sprawdzanie czy liczba jest palindromem.
void task4()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	//wersja 1

	//obliczam iloœæ cyfr
	int tmpNumber = number;
	int numberOfDigit = 1;
	while (tmpNumber >= 10)
	{
		numberOfDigit++;
		tmpNumber = tmpNumber / 10;
	}

	//liczê 10 do potêgi (numberOfDigit - 1)
	int leftDivided = 1;
	while (numberOfDigit != 1)
	{
		leftDivided *= 10;
		numberOfDigit--;
	}

	int rightDivided = 10;
	int leftNumber = number;
	int rightNumber = number;

	bool isPalindrome = true;
	while (leftNumber > 10)
	{
		int leftDigit = leftNumber / leftDivided;
		int rightDigit = rightNumber % rightDivided;
		if (leftDigit != rightDigit)
		{
			isPalindrome = false;
			break;
		}

		leftNumber = leftNumber % leftDivided;
		rightNumber = rightNumber / rightDivided;

		leftDivided = leftDivided / 10;
	}

	if (isPalindrome /*== true*/)
		std::cout << "Liczba jest palindromem\n";
	else
		std::cout << "Liczba nie jest palindromem\n";

	//wersja 2
	int reverseNumber = 0;
	tmpNumber = number;
	do
	{
		int rest = tmpNumber % 10;
		reverseNumber = reverseNumber * 10 + rest;
		tmpNumber /= 10;
	} while (tmpNumber != 0);

	if (number == reverseNumber)
		std::cout << "Liczba jest palindromem\n";
	else
		std::cout << "Liczba nie jest palindromem\n";

}

//Napisz program, który wyœwietli "Hello world" tyle razy ile chce u¿ytkownik
void task5()
{
	int howManyTimes;
	std::cout << "Podaj ile razy wyœwietliæ\n";
	std::cin >> howManyTimes;

	int i = 0;
	while (i != howManyTimes)
	{
		std::cout << "Hello world\n";
		i++;
	}
}

//Napisz program, który wyœwietli liczby parzyste do podanej przez u¿ytkownika liczby
void task6()
{
	int upperRange;
	std::cout << "Podaj górn¹ granicê do wyœwietlenia\n";
	std::cin >> upperRange;

	int i = 0;
	while (i <= upperRange)
	{
		std::cout << i << "\n";
		i += 2;
	}
}


int main()
{
	task4();
}
