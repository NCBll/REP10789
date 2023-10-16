#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, nota4;
    float media;

    cout << "Insira 4 notas para fazer a média: " << endl;
    cout << "Nota 1: ";
    cin >> nota1;

    cout << "Nota 2: ";
    cin >> nota2;

    cout << "Nota 3: ";
    cin >> nota3;

    cout << "Nota 4: ";
    cin >> nota4;

    float ponderacao1 = 0.50;
    float ponderacao2 = 0.10;
    float ponderacao3 = 0.30;

    // Media ponderada
    media = (nota1 * ponderacao1 + nota2 * ponderacao2 + nota3 *  + nota4 * ponderacao3) / (ponderacao1 + ponderacao2 + ponderacao2 + ponderacao3);

    cout << "Notas: " << nota1 << ", " << nota2 << ", " << nota3 << ", " << nota4 << endl;
    cout << "Média: " << media << endl;

    return 0;
}

