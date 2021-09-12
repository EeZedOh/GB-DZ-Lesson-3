#include <iostream>

using namespace std;

extern const int a;
extern const int b;
extern const int c;
extern const int d;

int main()
{

    setlocale(LC_ALL, "Russian");


    //#1
    {
        float f = a * (b + (float(c) / d));
        cout << "Пересчет формулы показал: " << f << endl;
    }
    //#2
    {
        cout << "Введите целое число: \n";
        int a = 0,b;
        cin >> a;
        b = (a <= 21) ? (a - 21) : ((a - 21) * 2);
        cout << "Прогон условя выдал: " << b << endl;
    }
    //#3
    {
        int b[3][3][3] = { { {3, 2, 2}, {1, 4, 8}, {8, 1, 9} },
                         { {8, 1, 9}, {3, 2, 2}, {1, 4, 8} },
                         { {1, 4, 8}, {8, 4, 2}, {7, 4, 1} } };
        int* ptr;
        ptr = nullptr;
        ptr = &b[2][2][2];
        *ptr = 1;
        cout << "Центральное значение в массиве:" << b[2][2][2] << endl;
    }
    //#4
    //Готов
}
