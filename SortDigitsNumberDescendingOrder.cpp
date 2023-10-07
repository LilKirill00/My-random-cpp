#include <iostream>
using namespace std;

//программа сортирующая все цифры из которых состоит число по убыванию  

int SortNumberDown(int a)
{
    int N = 1;
    int b = a;
    //узнаем сколько цифр в числе
    while(b/10)
    {
        b=b/10;
        N++;
    }
    //каждую цифру числа заносим отдельно в масив
    int arr[N];
    for(int i = 0; i<N ; i++)  
    {
        arr[i] = a%10;
        a = a/10;
    }
    //сортируем масив
    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            if (arr[i]>arr[j])
            swap(arr[i], arr[j]);
        }
    }
    //формируем результат работы программы
    int res  = 0;
    for(int i = 0; i<N;i++)
    {
        res = res*10 + arr[i];
    }
    return res;
}

int main()
{
    cout << SortNumberDown(123456789);
}