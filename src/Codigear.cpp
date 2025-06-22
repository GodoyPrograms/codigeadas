#include "Codigear.h"

Codigear::Codigear(int opt, std::string texto)
{
    this -> opt = opt;
    this -> texto = texto;
}

Codigear::~Codigear()
{
    //dtor
}

void Codigear::archivo(){
    std::ifstream in("cifrado.txt"); // Se abre el archivo cifrado.txt en modo lectura

    if(!in){
        std::cout << "No se ha podido abrir el archivo cifrado.txt, asegurate de tenerlo en la misma carpeta que el programa" << std::endl;
        system("pause");
        exit(1);
    }

    char simbolo;
    while(in >> simbolo){
        caracteres.push_back(simbolo); // Se guarda el contenido en archivo separados por un espacio dentro del vector caracteres
    }

    in.close(); // Se cierra el archivo
}

void Codigear::cifrado(){
    for(size_t i = 0;  i < texto.size(); i++){ // Se recorre cada posición del texto
        for(size_t j = 0; j < caracteres.size(); j++){ // Se recorre el vector caracteres
            if(texto[i] == caracteres[j] || texto[i] == tolower(caracteres[j])){
                texto[i] = caracteres[j+1]; // Si las letras son iguales se reemplaza la letra dentro del string por el siguiente caracter dentro del vector
                break;
            }
        }
    }
    std::cout << texto << std::endl; // Se imprime el texto codificado
}

void Codigear::descifrado(){
    for(size_t i = 0;  i < texto.size(); i++){
        for(size_t j = 1; j < caracteres.size(); j++){
            if(texto[i] == caracteres[j]){
                texto[i] = caracteres[j-1]; // Si los caracteres son iguales se reemplaza el caracter dentro del string por la letra anterior dentro del vector
                break;
            }
        }
    }
    std::cout << texto << std::endl; // Se imprime el texto decodificado
}

void Codigear::codigo(){
    archivo();

    std::cout << "\nResultado:" << std::endl;
    if(opt == 1){
        descifrado();
    }else{
        cifrado();
    }
}
