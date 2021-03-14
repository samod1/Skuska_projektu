// Skuska_projektu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <math.h>
using namespace std;

double pytagorovaVeta(int a, int b)
{
    double floata = (int)a;
    double floatb = (int)b;
    double aa = pow(floatb, 2);
    double bb = pow(floatb, 2);

    double cc = aa + bb;

    double c = sqrt(cc);

    return c;
}

void vypisBodov(int bod[])
{
    cout << "X:" << bod[0] << endl;
    cout << "Y:" << bod[1] << endl;
}

bool jepravouhly(int zakladna, int vyska)
{
    
    double sucetStvorcaNadObomaOdvesnami = pow(zakladna, 2) + pow(vyska, 2);
    double sucetStvorcaNadPreponou = pow(pytagorovaVeta(zakladna, vyska), 2);
    
    if (sucetStvorcaNadObomaOdvesnami == sucetStvorcaNadPreponou)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}


int main()
{
 

    //trojuholnik
    int zakladna = 0;
    int vyska = 0;
    int prepona = 0;

    ///jednotlive body
    int bodA[2];
    int bodB[2];
    int bodC[2];

    bodA[0] = 0;
    bodA[1] = 0;
    

    //Zadanie dlzok stran
    cout << "Zadaj dlzku zakladne\n";
    cin >> zakladna;

    cout << "Zadaj dlzku vysky\n";
    cin >> vyska;

    bodB[0] = {zakladna};
    bodB[1] = {0};

    bodC[0] = {0};
    bodC[1] = {vyska};

    cout << endl << "Prepona:" << zakladna << endl << vyska << endl;
    cout << "Odvesna:" << pytagorovaVeta(zakladna, vyska) << endl;

    cout << "body trojuholniku su" << endl;
    cout << "A" << endl;
    vypisBodov(bodA);
    cout << "B" << endl;
    vypisBodov(bodB);
    cout << "C" << endl;
    vypisBodov(bodC);

    if (jepravouhly(zakladna,vyska) == 1)
    {
        cout << endl << "tento trojuholnik je naozaj pravouhly";
    }

    else
    {
        cout << endl << "tento trojuholnik nie je pravouhly" << endl;
    }

    return 0;
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