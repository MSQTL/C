#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int a = 10, b = 25;
    int* pa = &a, * pb = &b;
    cout << "Адрес переменной а: " << pa << "\nАдрес переменной b: " << pb << endl;

    int* i;
    int count = 0;

    if (pa > pb) {
        i = pb;
        while (i != pa) {
            i++;
            count++;
        }
    }
    else {
        i = pa;
        while (i != pb) {
            i++;
            count++;
        }
    }

    cout << "Расстояние между адресами: " << count << endl;
    system("pause");

}


