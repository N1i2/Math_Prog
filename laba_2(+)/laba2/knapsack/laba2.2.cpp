#include "stdafx.h"
#include <iostream>
#include "Combi.h"
#include "Knapsack.h"
#include "Auxil.h"
#define NN 18
//рюкзак упр
int main()
{
    setlocale(LC_ALL, "rus");
    int V = 300,                // вместимость рюкзака              
        v[NN],     // размер предмета каждого типа  
        c[NN];     // стоимость предмета каждого типа 
    short m[NN];                // количество предметов каждого типа  {0,1}   

    auxil::start();

    for (int i = 0; i < NN; i++)
    {
        v[i] = auxil::iget(10, 300);
        c[i] = auxil::iget(5, 55);
    }

    int maxcc = knapsack_s(

        V,   // [in]  вместимость рюкзака 
        NN,  // [in]  количество типов предметов 
        v,   // [in]  размер предмета каждого типа  
        c,   // [in]  стоимость предмета каждого типа     
        m    // [out] количество предметов каждого типа  
    );

    std::cout << std::endl << "-------- knapsack problem --------- ";
    std::cout << std::endl << "- number of item : " << NN;
    std::cout << std::endl << "- knapsack wieght  : " << V;
    std::cout << std::endl << "- object sizes  : ";
    for (int i = 0; i < NN; i++) std::cout << v[i] << " ";
    std::cout << std::endl << "- object prices  : ";
    for (int i = 0; i < NN; i++) std::cout << v[i] * c[i] << " ";
    std::cout << std::endl << "- best price : " << maxcc;
    std::cout << std::endl << "- best wieght: ";
    int s = 0; for (int i = 0; i < NN; i++) s += m[i] * v[i];
    std::cout << s;
    std::cout << std::endl << "- selected item: ";
    for (int i = 0; i < NN; i++) std::cout << " " << m[i];
    std::cout << std::endl << std::endl;

    system("pause");
    return 0;
}