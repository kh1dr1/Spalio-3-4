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

int main() 
{
    int kvadratoKrastine = 13;
    int kvadratoPlotas = 0;

    suskaiciuotiPlota(kvadratoKrastine, kvadratoPlotas);

    cout << "Kvadrato kraštinė: " << kvadratoKrastine << '\n';
    cout << "Kvadrato perimetras: " << suskaiciuotiPerimetra(kvadratoKrastine) << '\n';
    cout << "Kvadrato plotas: " << kvadratoPlotas << '\n';
    
    return 0;
}
