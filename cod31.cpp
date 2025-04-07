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

// initially we set the element with the number in the minimum

// and the maximum and remember its number

float min a[0], max a[0];

int nmin 0, nmax 0;

// search for the largest and smallest value in the array and their numbers

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

// 8 position of the smallest element we write the value of the largest

a[nmax] min;

// 6 position of the largest element we write the value of the smallest

a[nmin] = max;

for (int i=0; i < n; ++1) // display the modified array on the screen

cout << a[i] << "\t";

return 0;

}
