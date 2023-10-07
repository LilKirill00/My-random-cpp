#include <iostream>
#include <cstdlib>
#include <ctime>

//Программа преобразующая случайную матрицу, в сортированую по возрастанию сумму каждой строки случайной матрицы

int main() 
{
	//упорядочить по возрастанию суммы элементов каждой строки
	using namespace std;
	srand(time(0));
	setlocale(0,"");
	
	cout << "Начальная матрица:\n";
	const int N = 10;
	const int M = 5;
	int arr[N][M];
	//заполняем и сразу выводим матрицу
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			cout << (arr[i][j] = rand() % 30) << "\t";
		}
		cout << "\n";
	}
	cout << "Сортированные суммы элементов каждой строки матрицы:\n";	
	//сумируем каждую строку и записываем в новый масив 
	int sort[N];
	for(int i = 0; i < N; i++)
	{
		int summ = 0;
		for(int j = 0; j < M; j++)
		{
			summ += arr[j][i];
		}
		sort[i] = summ;
	}
	//сортируем масив
	for(int i = 0; i<N;i++)
	{
		for(int j =0;j<N;j++)
		{
			if(sort[i]<sort[j])
            {
                swap(sort[i],sort[j]);
            }
		}
	}
	//выводим масив
    for(int i = 0;i<N;i++)
	{
        cout << sort[i] << "\t";
    }
}
