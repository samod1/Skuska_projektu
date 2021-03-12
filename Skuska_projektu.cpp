// Skuska_projektu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 

    //trojuholnik
    int zakladna = 0;
    int vyska = 0;
    int prepona = 0;


    //jednotlive body
    int bodA[2] = { 0,0 };
    int bodB[2] = { zakladna, 0 };
    int bodC[2] = { 0,vyska };
    

    cout << "Zadaj dlzku zakladne";
    cin >> zakladna;

    cout << "Zadaj dlzku vysky";
    cin >> vyska;

    cout << "body trojuholniku su";
    vypisBodov(bodA);
    vypisBodov(bodB);
    vypisBodov(bodC);


    return 0;
}


float pytagorovaVeta(int a, int b)
{
    int aa = a * a;
    int bb = b * b;

    int cc = aa + bb;

    float c = sqrt(cc);

    return c;
}

/*
bool jepravouhly(int zakladna, int vyska)
{
    c=  
}
*/

void vypisBodov (int bod[])
{
    for (int i = 0; i >= 2; i++)
    {
        cout << "X" << bod[i]<<"endl";
        cout << "Y" << bod[i]<<"endl";
    }
}

/* Nacitanie Bodov
void nacitanieBodov(int bod[])
{
    for (int i = 0; i >= 2; i++)
    {
        if (i == 0)
        {
            cout << "Zadaj X suradnicu";
            cin >> bod[i];
        }

        else
        {
            cout << "Zadaj Y suradnicu";
            cin >> bod[i];
        }

    }
}*/