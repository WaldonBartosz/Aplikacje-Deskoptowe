
/*
C#
    01. Console
        FirstConsoleApp
    02. Value types
        ValueTypesConsoleApp
C++
*/

//ValueTypesConsoleApp

//przekazywanie przez wartość
void parametrTest_v1(int p)
{
    Console.WriteLine($"Parametr w parametrTest_v1 {p}");
    p++;
    Console.WriteLine($"Parametr w parametrTest_v1 {p}");
}

//przekazywanie przez referencję
void parametrTest_v2(ref int p)
{
    Console.WriteLine($"Parametr w parametrTest_v1 {p}");
    p++;
    Console.WriteLine($"Parametr w parametrTest_v1 {p}");
}

void parametrTest_v3(out int p)
{
    //Console.WriteLine($"Parametr w parametrTest_v1 {p}");
    p = 19;
    Console.WriteLine($"Parametr w parametrTest_v1 {p}");
}


int firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
parametrTest_v1(firstNumber);
//parametrTest_v1(87);  //POPRAWNE
Console.WriteLine($"firstNumber po {firstNumber}");

firstNumber = 15;
Console.WriteLine($"firstNumber przed {firstNumber}");
parametrTest_v2(ref firstNumber);
Console.WriteLine($"firstNumber po {firstNumber}");
//parametrTest_v2(ref 87);   //BŁEDNE

int thirdNumber;
parametrTest_v3(out thirdNumber);
Console.WriteLine($"thirdNumber po {thirdNumber}");
//ParametrTest_v3(out 99); //BŁAD

//-----------------------------------------------------------

string firstStrNumber = "15";

int firstConvertNumber;

firstConvertNumber = int.Parse(firstStrNumber);
Console.WriteLine($"Po konwersji {firstConvertNumber}");

//int secondConvertNumber;
/*..*/
if (int.TryParse(firstStrNumber, out int secondConvertNumber))
    Console.WriteLine($"Po konwersji {secondConvertNumber}");