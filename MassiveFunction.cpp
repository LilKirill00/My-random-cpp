#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

//программа выполняющая базовые работы с масивами через функции

void sortDownArr (int n, int arr[]);
void sortUpArr (int n, int arr[]);
void printArr (int n, int arr[]);
void randArr (int n, int arr[], int end, int plus_minus);

int main()
{
    setlocale(0,"rus");

    int n = 25;
    int arr[n];
    randArr(n, arr, 101, -50);
    cout << "Массив\n";
    printArr(n, arr);
    cout << "Сортировка\n";
    sortDownArr(n, arr);
    printArr(n, arr);
    cout << "Сортировка\n";
    sortUpArr(n, arr);
    printArr(n, arr);
}

void sortDownArr (int n, int arr[])
{
    int d = n/2;
    while(d>0)
    {
        bool k = 1;
        while(k)
        {
            k = 0;
            for(int i = 0; i < n-d; i++)
            {
                if(arr[i]<arr[i+d])
                {
                    swap(arr[i], arr[i+d]);
                    k = 1;
                }
            }
        }
        d/=2;
    }
}
void sortUpArr (int n, int arr[])
{
    int d = n/2;
    while(d>0)
    {
        bool k = 1;
        while(k)
        {
            k = 0;
            for(int i = 0; i < n-d; i++)
            {
                if(arr[i]>arr[i+d])
                {
                    swap(arr[i], arr[i+d]);
                    k = 1;
                }
            }
        }
        d/=2;
    }
}
void printArr (int n, int arr[])
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
void randArr (int n, int arr[], int end, int plus_minus)
{
    srand(time(NULL));
    for(int i = 0; i<n; i++)
        {
            arr[i] =rand()%end + plus_minus;
        }
}