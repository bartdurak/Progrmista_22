#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    int liczby[n] = {6,1,2,5,7,3,8,9,4,5};
    int min = 99999;
    int max = -1;

    for (int i = 0; i < n - 1; i += 2)
    {
        // jezeli A jest wieksze od B
        if (liczby[i] > liczby[i+1])
        {
            if (liczby[i] > max)
            {
                max = liczby[i];
            }
            if (liczby[i+1] < min)
            {
                min = liczby[i+1];
            }
        }
            // jezeli B jest wieksze od A
        else
        {
            if (liczby[i+1] > max)
            {
                max = liczby[i+1];
            }
            if (liczby[i] < min)
            {
                min = liczby[i];
            }
        }
    }

    // ilosc nieparzysta, sprawdzamy ostatni element
    if (n % 2 == 1)
    {
        if (liczby[n-1] > max)
        {
            max = liczby[n-1];
        }
        if (liczby[n-1] < min)
        {
            min = liczby[n-1];
        }
    }

    cout << "Liczba min to: " << min << endl;
    cout << "Liczba max to: " << max << endl;

    system("PAUSE >NUL");
    return 0;
}