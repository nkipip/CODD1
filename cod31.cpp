#include <iostream>

using namespace std;

int main()

{

float a[20];

int n;

cout << "n = ";

cin >> n;

for (int i = 0; i < n; ++i)

{

}

cout << "a[" << i << "] = ";

cin >> a[i];

// изначально мы устанавливаем элемент с минимальным номером

// причем максимальный и запомните его номер

float min a[0], max a[0];

int nmin 0, nmax 0;

// найдите наибольшее и наименьшее значения в массиве и их номера
for (int i=1; i < n; ++i)

{

if (a[i] < min)

{

}

min a[i];

nmin = i;

if (a[i] > max)

{ max a[i];

nmax = 1;

}

}

// 8 в положение самого маленького элемента мы записываем значение самого большого

a[nmax] min;

// 6 в положение самого большого элемента записываем значение самого маленького

a[nmin] = max;

for (int i=0; i < n; ++1) // отобразите измененный массив на экране

cout << a[i] << "\t";

return 0;

}
