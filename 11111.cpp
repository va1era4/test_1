#include <iostream> 
#include <iomanip> 
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x, y;
    cout << "Введіть x = ";
    cin >> x;
    cout << "Введіть y = ";
    cin >> y;
    float rez, rez1;
    int s = 0;
    for (int k = 1; k < 6; k++)
    {
        s = s + x*k;*//зміна коду
    }
    rez = pow(x, 3) + pow(sin(x), 2) - 3 / s + pow(x, 4);
    cout << "Y=" << rez << endl;
    int d = 0;
    for (int m = 1; m < 6; m++)
    {
        d = d * m;
    }
    rez1 = tan(d) + pow(y, 5);
    cout << "Z=" << rez1 << endl;
    system("pause");
    return 0;
}
