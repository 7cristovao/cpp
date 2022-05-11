#ifndef EXEMPLO_H
#define EXEMPLO_H
#include <string>

class Exemplo
{
    private:
        int A,B;
        float C;
        float MetodoPri01 (int x);
        void MetodoPri02 (int &x, float &y);
    public:
    	void SetA(int num);
    	void SetB(int num);
    	float MetodoPub01 (int x, int y, bool z);
    	string MetodoPub02 (float p, float q);
    	string MetodoPub03 (float &p);
    	float GetC()
};

#endif