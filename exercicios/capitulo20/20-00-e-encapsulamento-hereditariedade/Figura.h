#ifndef FIGURA_H
#define FIGURA_H
#include <string>
using namespace std; // Classe string da STL
class Figura
{
    private:
        string cor;
    public:
        void setCor(string cor);
        string getCor();
};
#endif