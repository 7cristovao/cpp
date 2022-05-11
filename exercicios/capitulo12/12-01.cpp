#include <iostream>
#include <cmath>

// declaracao da funcao
float Media (float a, float b, float c);

using namespace std;

int main(int argc, char *argv[])

{
    float a, b, c, m;
    cout << "digite a: "; cin >> a;
    cout << "digite b: "; cin >> b;
    cout << "digite c: "; cin >> c;
    cout << Media (a, b, c) << endl;
    system("read -p 'Press Enter to continue...' var");
    return 0;
}

// definicao da funcao
float Media (float a, float b, float c)
{
    float m;
    m = (a + b + c) / 3;
    return m;
}
