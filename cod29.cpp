#include <iostream>

using namespace std;

int main()

{

int a[50];

int n, k=0;

cout << "n = ";

cin >> n;

float s = 0;

for (int i=0; i < n; ++i)

{

cout << "a[" << i << "] = ";

cin >> a[i];

if (!(a[i]%2)) // if the remainder when dividing an element by 2 is equal to {

s += a[i]; /

/ then the element is even add it to the sum

++k;

// and increase the number of even elements by 1

}

}

// if k is not zero, then there are even numbers in the sequence

// and you can calculate their arithmetic mean

if (k)

cout << "sr = << s/k << endl;

else cout <<

there are no even numbers in the sequence << endl;

}

return 0;
