#ifndef CODIGEAR_H
#define CODIGEAR_H
#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include <string>

using namespace std;

class Codigear
{
    public:
        Codigear(int opt, string texto);
        virtual ~Codigear(); // No es necesario esto pero lo dejo porque posnomas

        void codigo(); // La función fundamental del código, con la que se accede al resto de métodos

    protected:

    private:
        int opt;
        string texto;
        vector<char> caracteres;

        void archivo();
        void cifrado();
        void descifrado();
};

#endif // CODIGEAR_H
