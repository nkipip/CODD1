#include <iostream>

using namespace std;

int main()

{

int a[20]; // declare a static array,

// setting the maximum dimension

int n;

cout << "n = ";

cin >> n; // entered the number of array elements

for (int i=0;i < n; ++i) // input and processing of data

{

cout << "a[" << i << "] = ";

cin >> a[i];

// input of the next element

if (a[i] < 0)

// if the i-th element of the array is negative,

a[i]=0; // replace it with zero

}

for (int i=0;i < n; ++i) // output the array to the screen

cout << a[i] << "\t";

return 0;

}
