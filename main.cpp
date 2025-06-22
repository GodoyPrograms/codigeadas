// Programa creado sin orgullo por GodoyPrograms y las voces que me controlan

// This program is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License and blah blah blah
#include "Codigear.h"

using namespace std;

void menu();
void codigo(int opt, string sel);

int main()
{
    cout << "=== Maquina enigma ===" << endl;
    menu();
    return 0;
    system("pause");
}

void menu(){
    int opt;
    string sel;

    cout << "Elige una opción" << endl;
    cout << "1. Descifrar\n2. Cifrar\n3. Salir" << endl;
    cin >> opt;
    cin.ignore();

    if(opt == 1){
        sel = "descifrar";
    }else if(opt == 2){
        sel = "cifrar";
    }else{
        exit(0);
    }

    codigo(opt, sel);
}

void codigo(int opt, string sel){
    string texto;
    cout << "Ingresa el texto a " << sel << ": "<< endl;
    getline(cin, texto);

    Codigear code(opt, texto);
    code.codigo();

    char respuesta;
    cout << "\n¿Desea seguir en el programa? (S/N): ";
    cin >> respuesta;
    if(respuesta == 's' || respuesta == 'S'){
        system("cls"); // Se limpia la terminal
        menu(); // Se vuelve a mostrar el menu
    }else{
        exit(0);
    }
}
