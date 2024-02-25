#include "stdafx.h"

namespace boatfnc
{
    int calcv(combi::xcombination s, const int v[])  
    {
        int rc = 0;

        for (int i = 0; i < s.m; i++)
        {
            rc += v[s.ntx(i)];
        }
        
        return rc;
    };

    int calcc(combi::xcombination s, const int c[]) 
    {
        int rc = 0;
        for (int i = 0; i < s.m; i++)
        {
            rc += c[s.ntx(i)];
        }
        return rc;
    };

    void   copycomb(short m, short* r1, const short* r2)    
    {
        for (int i = 0; i < m; i++)
        {
            r1[i] = r2[i];
        }
    };

}
int  boat(int V/*midle price*/, short m/*free place*/, short n/*contener*/, const int v[]/*wieght*/, const int c[]/*price*/, short r[]/*now sostoyanie*/)
{
    combi::xcombination xc(n, m);
    int rc = 0;                     //итогавая цена
    int i = xc.getfirst();          //первый индекс
    int cc = 0;

    while (i > 0)
    {
        if (boatfnc::calcv(xc, v) <= V)
        {
            if ((cc = boatfnc::calcc(xc, c)) > rc)
            {
                rc = cc;
                boatfnc::copycomb(m, r, xc.sset);
            }
        }

        i = xc.getnext();
    };

    return rc;
};