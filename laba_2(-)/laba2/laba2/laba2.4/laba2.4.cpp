#include"stdafx.h"

#define NN 25
#define MM 5

int main()
{
    setlocale(LC_ALL, "rus");

    int v[NN], V = 1500, c[NN] = { 10, 15, 20, 25, 30, 25, 70, 30, 120, 100, 90, 50, 75,
                                   150, 140, 20, 10, 130, 30, 10, 70, 120, 125, 30, 100 };

    auxil::start();
    for (int i = 0; i < NN; i++)
    {
        v[i] = auxil::iget(100, 900);
    }
    short  r[MM];
    int cc = boat(
        V,   // [in]  максимальный вес груза
        MM,  // [in]  количество мест для контейнеров     
        NN,  // [in]  всего контейнеров  
        v,   // [in]  вес каждого контейнера  
        c,   // [in]  доход от перевозки каждого контейнера     
        r    // [out] результат: индексы выбранных контейнеров  
    );
    std::cout << std::endl << "- The problem of placing containers on a ship";
    std::cout << std::endl << "- total number of containers : " << NN;
    std::cout << std::endl << "- number of places for containers : " << MM;
    std::cout << std::endl << "- total weight limit : " << V;
    std::cout << std::endl << "- container weight : ";
    for (int i = 0; i < NN; i++) std::cout << std::setw(3) << v[i] << " ";
    std::cout << std::endl << "- transportation income : ";
    for (int i = 0; i < NN; i++) std::cout << std::setw(3) << c[i] << " ";
    std::cout << std::endl << "- containers selected (0,1,...,m-1) : ";
    for (int i = 0; i < MM; i++) std::cout << r[i] << " ";
    std::cout << std::endl << "- transportation income : " << cc;
    std::cout << std::endl << "- total weight of selected containers : ";
    int s = 0; for (int i = 0; i < MM; i++) s += v[r[i]]; std::cout << s;
    std::cout << std::endl << std::endl;
    system("pause");
    return 0;
}