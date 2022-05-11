#include <iostream>
#include <cmath>

using namespace std;
    
int main(int argc, char *argv[])
{
    int i, n, c; double s;
    cout << "n = "; cin >> n;
    s = 0; c = 1;
    for (i = 1; i <= n; i++)
    {
        s = s + 1.0/i*c;
        c = -c;
    }
    cout << "s = " << s << endl;
    system("read -p 'Press Enter to continue...' var");
    return 0;
}
