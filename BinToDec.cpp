#include <iostream>
#include <cmath>
using namespace std;

//программа перевода чисел из двоичной записи в десятичную

int perevod(int x);

int main()
{
    setlocale(0,"");
    cout << "Введите число в двоичной записи: ";
    int x;
    cin >> x;
    cout << x << " в двоичной = " << perevod(x) << " в десятичной"; 
}

int perevod(int x)
{
    int sum = 0, count = 0;
    while (x/10)
    {
        sum += x%10 * pow(2, count);
        x = x/10;
        count ++;
    }
    sum += x%10 * pow(2, count);

    return sum;
}