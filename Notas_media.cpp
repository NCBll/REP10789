#include <iostream>
using namespace std; 

int main() {
	
    float nota1, nota2, nota3, nota4;
    float media;

    cout << "Insira 4 notas para fazer a media: " << endl;
    cout << "Nota 1: ";
    cin >> nota1;

    cout << "Nota 2: ";
    cin >> nota2;

    cout << "Nota 3: ";
    cin >> nota3;

    cout << "Nota 4: ";
    cin >> nota4;

   
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    
    cout << "Notas: " << nota1 << ", " << nota2 << ", " << nota3 << ", " << nota4 << endl;
    cout << "Media: " << media << endl;

    return 0;
}
