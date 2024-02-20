#include "stdafx.h"

#define NN 35
#define MM 6
#define SPACE(n) std::setw(n)<<" "

int main()
{
    setlocale(LC_ALL, "rus");
    int v[NN], V = 1500;
    int c[NN] = { 15, 26, 27, 43,  16,  26,  42,  22,  34,  12,  33,  30,
               42,22,  34,  43,  16,  26,  14,  12,  25,  41,  17,  28,
               12,45,  60,  41,  33,  11,  14,  12,  25,  41,  30 };
    auxil::start();
    for (int i = 0; i < NN; i++)
    {
        v[i] = auxil::iget(100, 900);
    }
    short r[MM];
    int maxcc = 0;
    clock_t t1, t2;
    std::cout << std::endl << "-- Container placement problem -- ";
    std::cout << std::endl << "-  total containers    : " << V;
    std::cout << std::endl << "-- quantity ------ duration -- ";
    std::cout << std::endl << "   places        calculations  ";
    for (int i = 25; i <= NN; i++)
    {
        t1 = clock();
        int maxcc = boat(V, MM, i, v, c, r);
        t2 = clock();
        std::cout << std::endl << SPACE(7) << std::setw(2) << i
            << SPACE(15) << std::setw(5) << (t2 - t1);
    }
    std::cout << std::endl << std::endl;
    system("pause");
    return 0;
}