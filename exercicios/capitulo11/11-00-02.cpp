#include <iostream>
#include <cmath>

using namespace std;
    
int main(int argc, char *argv[])
{
    int i, n; double s;
    cout << "n = "; cin >> n;
    s = 0;
    for (i = 1; i <= n; i++)
        s = s + 1.0/i*pow(-1.0,i+1);
    cout << "s = " << s << endl;
    system("read -p 'Press Enter to continue...' var");
    return 0;
}
