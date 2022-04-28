#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
    
    double pol, mm;
    cout << "polegadas = ";
    cin >> pol;
    mm = 25.4 / ( 1/pol );
    cout << "\nmm = " << mm;
    cout << "\n";
    return 0;
}

