#ifndef CODIGEAR_H
#define CODIGEAR_H
#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include <string>

class Codigear
{
    public:
        Codigear(int opt, std::string texto);
        virtual ~Codigear(); // No es necesario esto pero lo dejo porque posnomas

        void codigo(); // La funci�n fundamental del c�digo, con la que se accede al resto de m�todos

    protected:

    private:
        int opt;
        std::string texto;
        std::vector<char> caracteres;

        void archivo();
        void cifrado();
        void descifrado();
};

#endif // CODIGEAR_H
