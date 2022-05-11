#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
//    const size_t N;
    int N;
    cin >> N;
    const char c1 = '*', c2 = ' ';

    for ( size_t i = 0; i < N; i++ )
    {
        for ( size_t j = 0; j < N; j++ )
        {
            std::cout << ( ( i + j ) % 2 == 0 ? c1 : c2 );
        }
        std::cout << std::endl;
    }
    system("read -p 'Aperte Enter para continuar...' var");
    return 0;
}
