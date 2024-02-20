#include "pch.h"

unsigned long long int getTwoOne(int numb);

int main()
{
	//FIRST ******************************************************
	//auxil::start();

	//std::cout << std::endl;

	//for (int i = 0; i < 10; i++)
	//{
	//	std::cout << auxil::dget(-1.11, 2.22) << std::endl;
	//}

	//std::cout << std::endl;

	//for (int i = 0; i < 10; i++)
	//{
	//	std::cout << auxil::iget(-10, 10) << std::endl;
	//}

	//SECOND ******************************************************
	//double av1 = 0, av2 = 0;
	//clock_t t1 = 0, t2 = 0;

	//setlocale(LC_ALL, "rus");

	//t1 = clock();
	//for (int i = 0; i < CYCLE; i++)
	//{
	//	av1 += (double)auxil::iget(-100, 100);
	//	av2 += auxil::dget(-100, 100);
	//}
	//t2 = clock();

	//std::cout << std::endl << "CYCLE:			" << CYCLE;
	//std::cout << std::endl << "midl value (int):	" << av1 / CYCLE;
	//std::cout << std::endl << "midl value (double):	" << av2 / CYCLE;
	//std::cout << std::endl << "time (y.e):		" << (t1 - t2);
	//std::cout << std::endl << "     (sec):		" << ((double)(t2 - t1)) / ((double)CLOCKS_PER_SEC);

	//std::cout << std::endl;

	//THIRD ******************************************************

	clock_t t1 = 0, t2 = 0;

	t1 = clock();
	unsigned long long hello = getTwoOne(50);
	t2 = clock();

	std::cout << hello << std::endl;

	std::cout << ((double)(t2 - t1)) / (double)CLOCKS_PER_SEC << std::endl;

	system("pause");
}

unsigned long long int getTwoOne(int numb)
{
	if (numb == 0)
		return 0;
	if (numb == 1 || numb == 2)
		return 1;

	return getTwoOne(numb - 1) + getTwoOne(numb - 2);
}	