// VariableConsoleApplication.cpp 

#include <iostream>

/*
* Wyk³adzina do pokoju
Wczytaj d³ugoœæ i szerokoœæ prostok¹tnego pokoju w metrach oraz cenê metra kwadratowego wyk³adziny. Oblicz powierzchniê pod³ogi oraz koszt wyk³adziny potrzebnej do jej pokrycia. Pomiñ zapas i odpady przy docinaniu.

* Podlewanie trawnika
Zraszacz podlewa obszar w kszta³cie ko³a. Wczytaj jego zasiêg w metrach, czyli odleg³oœæ od zraszacza do najdalszego podlewanego punktu. Oblicz powierzchniê podlewanego trawnika.

* Koszt podró¿y samochodem
Wczytaj d³ugoœæ trasy w kilometrach, œrednie spalanie samochodu w litrach na 100 km oraz cenê litra paliwa. Oblicz iloœæ paliwa potrzebn¹ do przejechania trasy oraz koszt tego paliwa.

* Zakup z rabatem
Wczytaj cenê towaru przed obni¿k¹ oraz wysokoœæ rabatu w procentach. Oblicz cenê po obni¿ce oraz zaoszczêdzon¹ kwotê.

* Koszt zu¿ycia energii
Wczytaj moc urz¹dzenia w watach, czas jego pracy w godzinach oraz cenê jednej kilowatogodziny energii elektrycznej. Oblicz zu¿ycie energii w kilowatogodzinach oraz koszt pracy urz¹dzenia. Przyjmij, ¿e urz¹dzenie przez ca³y ten czas pracuje z podan¹ moc¹.

* Rachunek za zakupy
Klient kupuje trzy rodzaje produktów. Dla ka¿dego rodzaju wczytaj cenê jednej sztuki oraz liczbê kupowanych sztuk. Oblicz koszt zakupu ka¿dego rodzaju produktu oraz ³¹czn¹ kwotê do zap³aty.

* Œrednia wa¿ona ocen
Wczytaj trzy oceny ucznia oraz wagê ka¿dej z nich. Przyjmij, ¿e wszystkie wagi s¹ dodatnie. Oblicz œredni¹ wa¿on¹ ocen.

* Wymiary do dokumentacji
Wczytaj d³ugoœæ elementu w metrach. Do dokumentacji warsztatowej potrzebny jest ten sam wymiar w centymetrach i milimetrach. Oblicz i wyœwietl obie wartoœci.

* Wymiana waluty przed wyjazdem
Wczytaj kwotê w z³otych przeznaczon¹ na wymianê oraz kurs euro wyra¿ony jako cena jednego euro w z³otych. Oblicz, ile euro mo¿na otrzymaæ za podan¹ kwotê. Pomiñ prowizjê kantoru.

* Podzia³ kosztów wyjazdu
Grupa znajomych dzieli po równo koszty wspólnego wyjazdu. Wczytaj ³¹czny koszt transportu, cenê jednego noclegu dla jednej osoby, liczbê noclegów oraz liczbê uczestników. Oblicz ca³kowity koszt wyjazdu i kwotê przypadaj¹c¹ na jedn¹ osobê.
*/


//Napisz program który wczyta liczbê od u¿ytkownika 
// i j¹ wyœwietli na konsoli
void task1()
{
	//wczytanie liczby od u¿ytkownika
	//	informacja co chcemy
	std::cout << "Podaj liczbê:\n";
	//  pobieramy dan¹
	//     deklaracja zmiennej
	int numberFromUser;
	//     zapamiêtanie danej
	std::cin >> numberFromUser;
	//wyœwietlenie na konsoli
	std::cout << "U¿ytkownik poda³: " << numberFromUser << "\n";
}

//Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsz¹ liczbê:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj drug¹ liczbê:\n";
	std::cin >> secondNumber;

	float average;
	average = (firstNumber + secondNumber) / 2.0;

	std::cout << "Œrednia to: " << average << "\n";
}

//Program pokazuj¹cy wspó³pracê zmiannych
void task3()
{
	int firstNumber = 10;
	int secondNumber = firstNumber;

	firstNumber = 20;

	std::cout << firstNumber << ' ' << secondNumber << '\n';
}

//Zamiana wartoœci dwóch zmiennych
void task4()
{
	// Wczytanie dwóch liczb
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe:\n";
	std::cin >> secondNumber;

	// Wyœwietlenie wartoœci przed zamian¹
	std::cout << "Przed zamiana: " << firstNumber << ' '
		<< secondNumber << '\n';

	// Zamiana wartoœci
	//   Zachowanie pierwszej wartoœci w zmiennej pomocniczej
	int temporaryNumber = firstNumber;
	//   Zast¹pienie pierwszej wartoœci drug¹
	firstNumber = secondNumber;
	//   Zapisanie zachowanej wartoœci w drugiej zmiennej
	secondNumber = temporaryNumber;

	// Wyœwietlenie wartoœci po zamianie
	std::cout << "Po zamianie: " << firstNumber << ' ' << secondNumber << '\n';
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task2();
}

/*
Algorytm - skoñczony zbiór instrukcji,
który rozwi¹zuje zadany problem.
Okreœla te¿ kolejnoœæ wynonywanych instrukcji.

Zapis algorytmu:
* opis s³owny
* w punktach
* rysunki
* schemat blokowy
* kod Ÿród³owy danego jêzyka programowania
* pseudokod

Zmienna - pewien obszar w pamiêci operacyjnej, w której mo¿na
w danej chwili przechowaæ tylko jedn¹ dan¹.

Instrukcja daklaracji zmiennej:
typ_zmiennej nazwa_zmiennej;

Typ zmiennej - wielkoœæ obszaru pamiêci, interpretacja ci¹gu bitów

short - 2 bajtowa liczba ca³kowita ze znakiem <-32 768, 32 767>
long - 4 bajtowa liczba ca³kowita ze znakiem <-2 147 483 648, 2 147 483 647>
int - 2 lub 4 bajtowa liczba ze znakiem (zalezy od kompilatora)
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dok³adnoœæ 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok³adnoœæ 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dok³adnoœæ 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszaru w pamiêci, identyfikator

Warunki niezbêdne:
* dozwolone znaki:
	- alfabet angielski aA-zZ
	- cyfry arabskie 0-9
	- podkreœlenie (pod³oga) _
* pierwszym znakiem nie mo¿e byæ cyfra
* unikalny w swoim zakresie widocznoœci
* nie mo¿e to byæ s³owo kluczowe (zarezerwowane) danego jêzyka

Warunki programistów:
* nazwa zmiennej powinna oddawaæ charakter przechowywanych danych
* jeœli identyfikator sk³ada siê z wielu s³ów to w miejscu spacji wstawiamy podkreœlenie
  lub piszemy bez spacji i zaczynaj¹c od drugiego s³owa piszemy je z du¿ej litery
* piszemy po angielsku

*/