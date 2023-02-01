#include <time.h>
#include <iostream>

using namespace std;


/*
1. Создать массив int[][]
2. Найти адреса всех элементов
3. Найти, сколько байт в длину будет занимать массив:
   3.1. 2х2
   3.2. 4х4
   3.3. 10х10
*/


int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    //Создание и заполнение массива
    const int n = 4, m = 4;
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            arr[i][j] = rand() % 10 + 1;
            cout << arr[i][j] << "\t";
        }
        cout << endl << endl;
    }

    //Адреса элементов массива
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Адрес элемента [" << i << "][" << j << "]: " << &arr[i][j] << endl;
        }
    }

    //Длина в байтах
    int* i = &arr[0][0], * j = &arr[n - 1][m - 1], count = 1, bytes;
    cout << "Адрес первого элемента: " << i << endl << "Адрес последнего элемента: " << j << endl;

    for (i; i != j; i++) {
        count++;
    }

    bytes = count * 4;
    cout << "Массив " << n << 'x' << m << " занимает " << bytes << " байт" << endl;

    system("PAUSE");
}

