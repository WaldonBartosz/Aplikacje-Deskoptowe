#include <iostream>
//#include <cstdlib>
//#include <ctime>

/*
* **Wybór miesi¹ca**
  Program potrzebuje numeru miesi¹ca z zakresu od 1 do 12. Wczytaj numer i, jeœli jest poza tym zakresem, wyœwietl komunikat oraz ponownie poproœ o podanie wartoœci. Powtarzaj pytanie do uzyskania poprawnego numeru. Na koñcu wyœwietl zaakceptowany numer miesi¹ca.

* **Kod dostêpu — trzy próby**
  Przyjmij, ¿e poprawny kod dostêpu to `4826`. Poproœ u¿ytkownika o podanie kodu. Je¿eli kod jest b³êdny, umo¿liwiaj kolejne próby, ale nie wiêcej ni¿ trzy ³¹cznie. Zakoñcz pytania natychmiast po podaniu poprawnego kodu. Wyœwietl informacjê o przyznaniu dostêpu albo wykorzystaniu wszystkich prób.

* **Rachunek za zakupy**
  Klient kupuje co najmniej jeden produkt. Wczytaj cenê jednej sztuki i liczbê kupowanych sztuk, a nastêpnie dodaj koszt do rachunku. Po ka¿dej pozycji zapytaj, czy klient chce dodaæ kolejny produkt: `1` oznacza tak, a `0` — nie. Na koñcu wyœwietl ³¹czn¹ kwotê do zap³aty. Przyjmij dodatnie ceny i liczby sztuk.

* **Najwy¿sza zmierzona temperatura**
  Wczytaj pierwszy pomiar temperatury. Po ka¿dym pomiarze zapytaj, czy u¿ytkownik chce podaæ nastêpny: `1` oznacza tak, a `0` — nie. Po zakoñczeniu wyœwietl najwy¿sz¹ podan¹ temperaturê oraz liczbê pomiarów. Temperatury mog¹ byæ dodatnie, ujemne lub równe zero.

* **Oszczêdzanie na zakup**
  Wczytaj dodatni¹ cenê przedmiotu, na który u¿ytkownik odk³ada pieni¹dze. Pocz¹tkowo nie ma ¿adnych oszczêdnoœci. Wczytuj kolejne dodatnie wp³aty i po ka¿dej wyœwietl zgromadzon¹ kwotê. Zakoñcz przyjmowanie wp³at, gdy oszczêdnoœci wystarcz¹ na zakup. Wyœwietl liczbê wp³at oraz kwotê, która pozostanie po zakupie.

* **Rzuty kostk¹ przed rozpoczêciem gry**
  W pewnej grze gracz mo¿e rozpocz¹æ ruch dopiero po wyrzuceniu szóstki. Symuluj kolejne rzuty kostk¹, losuj¹c liczby od 1 do 6. Wyœwietl wynik ka¿dego rzutu. Zakoñcz losowanie po pierwszej szóstce i podaj, ile rzutów wykonano.

* **Przelicznik jednostek z menu**
  Wyœwietl menu: `1` — metry na centymetry, `2` — centymetry na metry, `0` — zakoñczenie programu. Wczytaj wybór u¿ytkownika. Dla opcji `1` lub `2` wczytaj d³ugoœæ, wykonaj przeliczenie i wyœwietl wynik wraz z jednostk¹. Dla nieznanej opcji wyœwietl komunikat o b³êdnym wyborze. Po obs³u¿eniu opcji ponownie wyœwietl menu, chyba ¿e u¿ytkownik wybra³ zakoñczenie. Do obs³ugi wyboru wykorzystaj `switch`.
*/

//Napisz program, który ma pobraæ od u¿ytkownika liczbê dodatni¹. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int numberFromUser;

	std::cout << "Podaj liczbê doodatni¹:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczbê doodatni¹:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczbê doodatni¹:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczbê doodatni¹:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczbê doodatni¹:\n";
					std::cin >> numberFromUser;
					//wklejamy ca³ego If'a
				}
			}
		}
	}

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

//Napisz program, który ma pobraæ od u¿ytkownika liczbê dodatni¹. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task2()
{
	int numberFromUser;

	do
	{
		std::cout << "Podaj liczbê dodatni¹:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

//Napisz program, który wylosuje liczbê a nastêpnie uzytkownik bêdzie musia³ j¹ zgadn¹æ.
void task3()
{
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	//std::cout << randomNumber << "\n";

	int numberFromUser;

	/*
	std::cout << "Podaj liczbê:\n";
	std::cin >> numberFromUser;
	if (numberFromUser != randomNumber)
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> numberFromUser;
		if (numberFromUser != randomNumber)
		{
			std::cout << "Podaj liczbê:\n";
			std::cin >> numberFromUser;
			//...
		}
	}*/

	do
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "Za du¿a liczba\n";
		if (numberFromUser < randomNumber)
			std::cout << "Za ma³a liczba\n";
	} while (numberFromUser != randomNumber);

	std::cout << "Gratulacje!!!!\n";

}

//Napisz program wyœwietlaj¹cy liczby ca³kowite z przedzia³u <1,x>.
//Gdzie x podaje u¿ytkownik.
void task4()
{
	//std::cout << "1, 2, 3, 4, 5, 6 \n";
	unsigned long long upperRange;
	std::cout << "Podaj górny zakres wiêkszy b¹dŸ równy 1\n";
	std::cin >> upperRange;

	/*
	std::cout << "1, ";
	if (upperRange > 1)
	{
		std::cout << "2, ";
		if (upperRange > 2)
		{
			std::cout << "3, ";
			if (upperRange > 3)
			{
				std::cout << "4, ";
				//.....
			}
		}
	}
	*/

	unsigned long long currentNumber = 0;
	do
	{
		//currentNumber = currentNumber + 1;
		//currentNumber += 1;
		//currentNumber++;
		++currentNumber;
		std::cout << currentNumber << ", ";
	} while (upperRange > currentNumber);
}

//Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
void task5()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	/*
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

	do
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma " << sum << "\n";
	//4125
}

//* Poproœ u¿ytkownika o podawanie liczb, a¿ wprowadzi zero. 
//Oblicz sumê oraz œredni¹ arytmetyczn¹ wprowadzonych liczb.
void task6()
{
	int number;
	int sum = 0;
	int numberOfNumbers = 0;

	/*
	std::cout << "Podaj liczbê:\n";
	std::cin >> number;
	sum = sum + number;
	numberOfNumbers++;
	if (number != 0)
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> number;
		sum = sum + number;
		numberOfNumbers++;
		if (number != 0)
		{
			std::cout << "Podaj liczbê:\n";
			std::cin >> number;
			sum = sum + number;
			numberOfNumbers++;
			//if ...
		}
	}
	*/

	do
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> number;
		sum = sum + number;
		//if (number != 0)
		numberOfNumbers++;
	} while (number != 0);

	//numberOfNumbers--;
	std::cout << "Suma liczb wynosi " << sum << "\n";
	double avg = sum * 1.0 / numberOfNumbers;
	std::cout << "Œrednia " << avg << "\n";
}

//Napisz program, który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej. 
//Nastêpnie program powinien obliczyæ i wyœwietliæ liczbê cyfr.
void task7()
{
	int number;
	int rest;
	int counter = 0;

	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	/*
	rest = number % 10;
	std::cout << rest << ", ";
	counter++;
	number = number / 10;
	if (number != 0)
	{
		rest = number % 10;
		std::cout << rest << ", ";
		counter++;
		number = number / 10;
		if (number != 0)
		{
			rest = number % 10;
			std::cout << rest << ", ";
			counter++;
			number = number / 10;
			//if ...
		}
	}
	*/

	do
	{
		rest = number % 10;
		std::cout << rest << ", ";
		counter++;
		number = number / 10;
	} while (number != 0);

	std::cout << "Iloœæ cyfr w liczbie to " << counter << "\n";
}


int main()
{
	task7();

}
