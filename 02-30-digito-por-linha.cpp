#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
    int a;
    cin >> a;
    while(a>0)
    {
        cout << "\n" << a % 10;
        a = a / 10;
    }
    cout << "\n";
    system("read -p 'Press Enter to continue...' var");
    return 0;
}
