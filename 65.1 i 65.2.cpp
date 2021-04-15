#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
class klasa
{

   public:
ifstream plik1;
    klasa();
};

klasa::klasa()
{
    plik1.open("plik1.txt");
}


class klasa_nr2
{
vector <int> licznik;

    vector <int> mianownik;


    public:


        int  najmniejszaB = 12000;
    int licznik = 0;


    double min = 12001.0;
void zdobadz_vector(int x, int y);

            double do_klasy(double a, double b);

int najmniejsza = 12000;
            void najmniejsza_wartosc(double value_of, int i);
        int nwd(int a, int b);
                void ilosc(int i);
    void result();


};

void klasa_nr2::zdobadz_vector(int x, int y)
{
    licznik.push_back(x);
    mianownik.push_back(y);
}

double klasa_nr2::do_klasy(double a, double b)
{
    return a / b;
}

void klasa_nr2::najmniejsza_wartosc(double value_of, int i)
 {

if (value_of < min)
{
    min = value_of;
     najmniejsza = licznik[i];
najmniejszaB = mianownik[i];
    }
    else if (value_of == min)
    {
    if (mianownik[i] < najmniejszaB)
    {
        min = value_of;

            najmniejsza = licznik[i];

    najmniejszaB = mianownik[i];
    }
}
}

int value_of::nwd(int a, int b)
{
if (b == 0)
    {
    return a;
    }
return nwd(b, a % b);
}

void value_ofs::ilosc(int i)
{
    if (nwd(licznik[i], mianownik[i]) == 1)
        licznik++;
}

void value_ofs::result()

{
    cout << "Najmniejsza para liczb: " << najmniejsza << " " << najmniejszaB << endl;
    cout << "liczba ulamkow nieskracalnych: " << licznik << endl;
}
int main()
{
    klasa p;
    klasa_nr2 yes;
    int first, second, i = 0;
    while (!f.plik1.eof())

    {
    p.plik1 >> first;
    p.plik1 >> second;

           yes.zdobadz_vector(first, second);

        yes.najmniejsza_wartosc(yes.do_klasy(first, second), i);

yes.nwd(first, second);

    yes.ilosc(i);
        i++;
}
    yes.result();
}
