#include "stdafx.h"

int main()
{
    setlocale(LC_ALL, "rus");
    char  AA[][2] = { "A", "B", "C", "D", "E" };
    std::cout << std::endl << " --- Combination ---";
    std::cout << std::endl << "start set: ";
    std::cout << "{ ";
    for (int i = 0; i < sizeof(AA) / 2; i++)

        std::cout << AA[i] << ((i < sizeof(AA) / 2 - 1) ? ", " : " ");
    std::cout << "}";
    std::cout << std::endl << "Generation of combinations ";
    combi::xcombination xc(sizeof(AA) / 2, 3);
    std::cout << "from " << xc.n << " to " << xc.m;
    int  n = xc.getfirst();
    while (n >= 0)
    {

        std::cout << std::endl << xc.nc << ": { ";

        for (int i = 0; i < n; i++)


            std::cout << AA[xc.ntx(i)] << ((i < n - 1) ? ", " : " ");

        std::cout << "}";

        n = xc.getnext();
    };
    std::cout << std::endl << "totally: " << xc.count() << std::endl;
    system("pause");
    return 0;
}
