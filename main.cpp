#include <iostream>

using namespace std;

// Funkcija, kuri suskaičiuoja kvadrato perimetrą.
// Argumentas perduodamas reikšme
int suskaiciuotiPerimetra(int krastine)
{
    return krastine * 4;
}

// Funkcija, kuri suskaičiuoja kvadrato plotą.
// Rezultatas gražinamas per adresą
void suskaiciuotiPlota(int krastine, int& plotas)
{
    plotas = krastine * krastine;
}

// F = (C * 9/5) + 32
double celsiusToFahrenheit(double tempCelsius)
{
    return tempCelsius * 9/5.0 + 32;
}

// C = (F - 32) * 5/9
void fahrenheitToCelsius(double tempFahrenheit, double& tempCelsius)
{
    tempCelsius = (tempFahrenheit - 32) * 5/9.0;
}

int main() 
{
    int krastine = 0;
    int kvadratoPlotas = 0;

    cout << "\n---------- Užduotis #1 ----------\n";
    cout << "Įveskite kvadrato kraštinės ilgį:";
    cin >> krastine;
    cout << "Kvadrato perimetras: " << suskaiciuotiPerimetra(krastine) << '\n';
    suskaiciuotiPlota(krastine, kvadratoPlotas);
    cout << "Kvadrato plotas: " << kvadratoPlotas << '\n';

    double celsius = 0;
    double fahrenheit = 0;

    cout << "\n---------- Užduotis #2 ----------\n";
    cout << "Įveskite temperatūrą Celsijaus laipsniais:";
    cin >> celsius;
    cout << "Temperatūra Farenheito laipsniais: " << celsiusToFahrenheit(celsius) << '\n';

    cout << '\n';

    cout << "Įveskite temperatūrą Farenheito laipsniais:";
    cin >> fahrenheit;
    fahrenheitToCelsius(fahrenheit, celsius);
    cout << "Temperatūra Celsijaus laipsniais: " << celsius << '\n';

    cout << '\n';

    return 0;
}
